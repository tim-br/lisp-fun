//
//  main.c
//  lisp-fun
//
//  Created by Timothy Williams on 2016-03-31.
//
//

#include "main.h"

int contains_paren(char *input){
    int counter = 0;
    while(*input != '\0'){
        if(*input == (char*)40){
            counter++;
        }
        if(*input == (char*) 41){
            counter--;
        }
        ++input;
    }
    return counter == 0 ? 1 : 0;
}

void mutate(char **input)
{
    char* tmp = *input;
    tmp++;
    (*input)++;
    printf("%c\n", *tmp);
    printf("%c\n", **input);
    printf("%s\n", "yolo world");

    return;
}

int main(){
    char* str = "   + 32 892";
    parse(str);

    return 1;
}


//    //*str = 'h';
//
//    char *tse = "tsr    h    ";
//    char* s = peek(tse, true);
//
//    printf("%c\n", *tse);
//    printf("%c\n", *s);
//
//    char **yo = &tse;
//    (*yo)++;
//
//    printf("%c\n", *tse); // expect this to print s, how would I do this
//
//
////    char *tse = "tsreant  h    ";
////    mutate(&tse);
////    printf("%c\n", *tse);
////    printf("%s\n", "yolo world");
//
////    char **yo = &tse;
////    char *ch = yo;
////    ch++;
////    printf("%c\n", *tse); // expect this to print s, how would I do this
//
//    advance(&tse, false);
//    advance(&tse, true);
//    printf("%d\n", 4132);
//    printf("%c\n", *tse);
//    str = tse;
//    str = "yolo";
//    int f = contains_paren("hello ( wolrd)");
//    //int yo = strcmp("hello", "wolrd");
//    printf("%d\n", f);
//    //char_array[0] = 't';
//    //int foo = boo();
//    //printf("%c\n", char_array[0]);
//    //printf("%d\n", foo);