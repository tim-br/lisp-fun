//
//  tokenizer_test.c
//  lisp-fun
//
//  Created by Timothy Williams on 2016-04-02.
//
//

#include <stdio.h>
#include "tokenizer.h"
#include <assert.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

int main() {
    
    /*
    //
    //  testing the peek function
    */
    char* s1;
    s1 = "hello world";
    assert(*s1 == 'h');
    char* c1;
    c1 = peek(s1, true);
    assert(*c1 == 'e');
    assert(*s1 == 'h');
    char* s2 = "e";
    char* c2 = peek(s2, true);
    assert(*c2 == '\0');
    assert(*s2 == 'e');
    char* s3 = "";
    char* c3 = peek(s3, true);
    //assert(*c3 == '\0');
    assert(*s3 == '\0');
    
    //testing the skipping spaces will work in the peek function
    s1 = "  fe";
    c1 = peek(s1, true);
    printf("%c", *c1);
    assert(*c1 == 'f');
    char* s5 = "h      ello world";
    char* c5 = peek(s5, true);
    assert(*c5 == 'e');
    s2 = "hello world";
    c2 = peek(s2, false);
    assert(*c2 == 'e');
    
    
    /*
     //
     //  testing the advance function
     */
    
    s1 = "     foo";
    advance(&s1, true);
    printf("%c\n", *s1);
    assert(*s1 == 'f');
    s1 = "     foo";
    advance(&s1, false);
    assert(*s1 == ' ');
    s1 = "foo";
    advance(&s1, true);
    assert(*s1 == 'o');
    s1 = "";
    assert(*s1 == '\0');
    advance(&s1, true);
    assert(*s1 == '\0');

    /*
     //
     //  testing the get_token function
     */

    s1 = "   fooo   ";
    char* token1 = get_token(s1);
    assert(strcmp(token1, "fooo"));
    char* s6 = "+ 32 2";
    char* token2 = get_token(s6);
    assert(strcmp, token2, "+");
     //printf("hello\n");

    
    printf("Test program for tokenizer.c completed.\n");
    return 0;
}