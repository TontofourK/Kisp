#include <stdio.h>
#include<magic.h>
#include "mpc.h"

mpc_parser_t* Adjective = mpc_new("adjective");
mpc_parser_t* Noun = mpc_new("noun");
mpc_parser_t* Phrase = mpc_new("prase");
mpc_parser_t* Doge = mpc_new("doge");

mpca_lang(MPCA_LANG_DEFAULT,
"
    adjectitive : \"wow\" | \"many\"
")