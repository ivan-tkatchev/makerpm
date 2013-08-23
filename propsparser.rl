#ifndef __PROPSPARSER_H
#define __PROPSPARSER_H

// This file needs to be preprocessed with the 'ragel' tool.
// Run it like this:
//
//   ragel -G2 propsparser.rl -o propsparser.h
//

#include <string>
#include <stdexcept>
#include <iostream>

#include <string.h>
#include <stdio.h>

#include "rpmprops.h"

namespace propsparser {

struct ragel_state {

    /** Ragel scanner cruft. **/

    // Iterators for start and end of buffer data.
    char* p;
    char* pe;

    // Iterator for 'end of file'.
    char* eof;

    // Iterator for start and end of token.
    char* ts;
    char* te;

    // Internal state and rollback variables.
    int cs, act;

    // Stack for ragel machine states.
    int stack[32];
    int top;

    // Not part of ragel's variables; this is a buffer to hold the current match.
    std::string match;
};


void parse_props(mfile& input, rpmprops_t& props) {

    ragel_state state;

    rpmprops_t::deps_t deps;

    %%{

        machine PropsParser;

        access state.;
        variable p state.p;
        variable pe state.pe;
        variable eof state.eof;

        action start {
            state.match.clear();
        }

        action push {
            state.match += fc;
        }

        onews = [ \t\r\n];
        ws = onews*;
        ws1 = onews+;
        sep = '_' | ws;

        number = [0-9]+ 
            >start $push;

        snumber = ('-'? [0-9]+)
            >start $push;

        real = (('-'?) (([0-9]+ '\.' [0-9]+) | ([0-9]+)))
            >start $push;

        tag = [a-zA-Z0-9_]+ 
            >start $push;

        #/* 34 is the double quote character, the only reason for writing it like this is to make Emacs happy */
        quote = 34;

        strchar_escape := 
            ( ('"'   ${ state.match += '"';  fret; }) |
              ('n'   ${ state.match += '\n'; fret; }) |
              ('\\'  ${ state.match += '\\'; fret; }) )
            ;

        strchar = ( (^ (quote | '\\') $push ) |
                    ('\\'             ${fcall strchar_escape;} ) );

        strdata = strchar*;

        string = '"' >start strdata '"';

        consume_line_char = 
            ( '\n' ${ fret; } ) |
            ( ^'\n' ) ;

        consume_line := consume_line_char*;

        comment = '#' ${fcall consume_line;};

        ###

        # locale = [Ll] 'ocale' ':'? (ws1 string %{ props.locale.push_back(state.match); })+;

        name        = [Nn] 'ame' ':'?             ws1 string %{ props.name = state.match; };
        version     = [Vv] 'ersion' ':'?          ws1 string %{ props.version = state.match; };
        release     = [Rr] 'elease' ':'?          ws1 string %{ props.release = state.match; };
        summary     = [Ss] 'ummary' ':'?          ws1 string %{ props.summary = state.match; };
        description = [Dd] 'escription' ':'?      ws1 string %{ props.description = state.match; };
        buildhost   = [Bb] 'uild' [Hh] 'ost' ':'? ws1 string %{ props.buildhost = state.match; };
        license     = [Ll] 'icense' ':'?          ws1 string %{ props.license = state.match; };
        packager    = [Pp] 'ackager' ':'?         ws1 string %{ props.packager = state.match; };
        group       = [Gg] 'roup' ':'?            ws1 string %{ props.group = state.match; };
        url         = [Uu] [Rr] [Ll] ':'?         ws1 string %{ props.url = state.match; };
        os          = [Oo] [Ss] ':'?              ws1 string %{ props.os = state.match; };
        arch        = [Aa] 'rch' ':'?             ws1 string %{ props.arch = state.match; };
        platform    = [Pp] 'latform' ':'?         ws1 string %{ props.platform = state.match; };
        optflags    = [Oo] 'pt' [Ff] 'lags' ':'?  ws1 string %{ props.optflags = state.match; };
        sourcerpm   = [Ss] 'ource' [Rr] [Pp] [Mm] ':'? ws1 string %{ props.sourcerpm = state.match; };

        rpmversion  = [Rr] [Pp] [Mm] [Vv] 'ersion' ':'? ws1 string %{ props.rpmversion = state.match; };

        prein = [Pp] 're' [Ii] 'n' ':'? ws1 
            ('shell' ws1 string %{ props.prein.prog = state.match; } ws1)?
            string %{ props.prein.code = state.match; };

        postin = [Pp] 'ost' [Ii] 'n' ':'? ws1 
            ('shell' ws1 string %{ props.postin.prog = state.match; } ws1)?
            string %{ props.postin.code = state.match; };

        preun = [Pp] 're' [Uu] 'n' ':'? ws1 
            ('shell' ws1 string %{ props.preun.prog = state.match; } ws1)?
            string %{ props.preun.code = state.match; };

        postun = [Pp] 'ost' [Uu] 'n' ':'? ws1 
            ('shell' ws1 string %{ props.postun.prog = state.match; } ws1)?
            string %{ props.postun.code = state.match; };

        ##

        forceusername  = [Ff] 'orce' [Uu] 'ser'  [Nn] 'ame' ':'? ws1 string %{ props.forceusername  = state.match; };
        forcegroupname = [Ff] 'orce' [Gg] 'roup' [Nn] 'ame' ':'? ws1 string %{ props.forcegroupname = state.match; };

        ##

        deps_tag_flag = 
            ('pre'       %{ deps.flags |= rpmprops_t::deps_t::DEPFLAG_SCRIPT_PRE; })       |
            ('post'      %{ deps.flags |= rpmprops_t::deps_t::DEPFLAG_SCRIPT_POST; })      |
            ('preun'     %{ deps.flags |= rpmprops_t::deps_t::DEPFLAG_SCRIPT_PREUN; })     | 
            ('postun'    %{ deps.flags |= rpmprops_t::deps_t::DEPFLAG_SCRIPT_POSTUN; })    |
            ('verify'    %{ deps.flags |= rpmprops_t::deps_t::DEPFLAG_SCRIPT_VERIFY; })    |
            ('interp'    %{ deps.flags |= rpmprops_t::deps_t::DEPFLAG_INTERP; })           |
            ('rpmlib'    %{ deps.flags |= rpmprops_t::deps_t::DEPFLAG_RPMLIB; })           |
            ('prereq'    %{ deps.flags |= rpmprops_t::deps_t::DEPFLAG_PREREQ; })           |
            ('pretrans'  %{ deps.flags |= rpmprops_t::deps_t::DEPFLAG_PRETRANS; })         |
            ('posttrans' %{ deps.flags |= rpmprops_t::deps_t::DEPFLAG_POSTTRANS; })        |
            ('config'    %{ deps.flags |= rpmprops_t::deps_t::DEPFLAG_CONFIG; })           |
            ('auto'      %{ deps.flags |= (rpmprops_t::deps_t::DEPFLAG_FIND_PROVIDES |
                                           rpmprops_t::deps_t::DEPFLAG_FIND_REQUIRES); }) 
            ;

        deps_tag_flags = deps_tag_flag (ws ',' ws deps_tag_flag)*;

        deps_tag = 
            (deps_tag_flags ws1 string %{ deps.name = state.match; })
            |
            (string %{ deps.name = state.match; })
            ;
        
        deps_type = 
            ('='  %{ deps.flags |= rpmprops_t::deps_t::DEPFLAG_EQUAL; }) |
            ('<'  %{ deps.flags |= rpmprops_t::deps_t::DEPFLAG_LESS; }) |
            ('>'  %{ deps.flags |= rpmprops_t::deps_t::DEPFLAG_GREATER; }) |
            ('<=' %{ deps.flags |= (rpmprops_t::deps_t::DEPFLAG_EQUAL | rpmprops_t::deps_t::DEPFLAG_LESS); }) |
            ('>=' %{ deps.flags |= (rpmprops_t::deps_t::DEPFLAG_EQUAL | rpmprops_t::deps_t::DEPFLAG_GREATER); })
            ;

        deps_cond =
            (deps_type ws string %{ deps.version = state.match; }) |
            ('any' | [ \t\r\n])
            ;

        deps = deps_tag ws deps_cond
            ;

        provides = [Pp] 'rovides' ':'? ws1 ${ deps = rpmprops_t::deps_t(); }
            deps :> '' 
            %{ deps.flags &= ~(rpmprops_t::deps_t::DEPFLAG_FIND_REQUIRES); props.provide.push_back(deps); }
            ;

        requires = [Rr] 'equires' ':'? ws1 ${ deps = rpmprops_t::deps_t(); }
            deps :> '' 
            %{ deps.flags &= ~(rpmprops_t::deps_t::DEPFLAG_FIND_PROVIDES); props.require.push_back(deps); }
            ;

        conflicts = [Cc] 'onflicts' ':'? ws1 ${ deps = rpmprops_t::deps_t(); }
            deps :> '' 
            %{ props.conflict.push_back(deps); }
            ;

        obsoletes = [Oo] 'bsoletes' ':'? ws1 ${ deps = rpmprops_t::deps_t(); }
            deps :> '' 
            %{ props.obsolete.push_back(deps); }
            ;

        entry = comment |
            name | version | release | summary | description | buildhost | license |
            packager | group | url | os | arch | platform | optflags | sourcerpm | rpmversion |
            forceusername | forcegroupname |
            prein | postin | preun | postun |
            provides | requires | conflicts | obsoletes 
            ;
            
      main := (ws entry)+ ws ;
        
    }%%
/*

*/

    %% write data;
    %% write init;

    state.p = (char*)input.addr;
    state.pe = (char*)input.addr + input.size;
    state.eof = state.pe;

    %% write exec;

    if (state.cs == PropsParser_error) {
        throw std::runtime_error("Parse error. Unconsumed input: " + std::string(state.p, state.pe));
    }
}

}

#endif
