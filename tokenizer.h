//
//  tokenizer.h
//  lisp-fun
//
//  Created by Timothy Williams on 2016-04-02.
//
//

#ifndef tokenizer_h
#define tokenizer_h
#include <stdbool.h>
#include <stdio.h>

void advance(char** input_string, bool skipWhiteSpace);
char* peek(char* input_string, bool skipWhiteSpace);
char* get_token(char* input_string);

#endif /* tokenizer_h */
