//
//  tokenizer.c
//  lisp-fun
//
//  Created by Timothy Williams on 2016-04-02.
//
//

#include "tokenizer.h"

//char* peek(char* input_string, bool skipWhiteSpace){
//    if(input_string == '\0'){
//        return input_string;
//    }
//    printf("gnh\n");
//    printf("%c\n", *input_string);
//        
//    input_string++;
//    if(input_string != (char*) 32){
//        return input_string;
//    } else{
//        peek(input_string, skipWhiteSpace);
//    }
//}

char* peek(char* input_string, bool skipWhiteSpace){
    if(*input_string == '\0'){
        return input_string;
    } else{
        input_string++;
        while((*input_string == ' ') && (skipWhiteSpace == true)){
            input_string++;
        }
        return input_string;
    }
}

//void advance(char** input_string, bool skipWhiteSpace){
//    (*input_string)++;
//    if(skipWhiteSpace == false) return;
//    if(**input_string == (char*) 32){
//        advance(input_string, skipWhiteSpace);
//    }
//}

void advance(char** input_string, bool skipWhiteSpace){
    if(*(*input_string) == '\0'){
        return;
    }
    (*input_string)++;
    while(*(*input_string) == ' ' && skipWhiteSpace){
        printf("check\n");
        (*input_string)++;
    }
}

char* get_token(char* input_string){
    advance(&input_string, true);
    printf("%s\n", input_string);
    return input_string;
//    char* return_token = input_string;
//    while(*input_string && *input_string != ' '){
//        *return_token++ = *input_string++;
//    }
//    return return_token;
}