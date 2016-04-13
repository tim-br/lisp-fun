//
//  expression_parser.c
//  lisp-fun
//
//  Created by Timothy Williams on 2016-04-03.
//
//

#include "expression_parser.h"

void parse(char* token){
    if(*(peek(token, true)) == '+'){
        advance(&token, true);
    }
};
