//
//  eval_test.c
//  lisp-fun
//
//  Created by Timothy Williams on 2016-04-13.
//
//

#include <stdio.h>
#include "eval.h"
#include <assert.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

int add1(int foo){
    return foo + 1;
};

int main() {
    
    int bar = 42;
    
    //simple sanity check
    assert(add1(bar) == 43);
    
    int (*functionPtr)(int) = &add1;
    
    //passes the function pointer of add1 to apply_int_function along with bar
    // the result should be 43
    int return_test_value = apply_int_function(functionPtr, bar);
    assert(return_test_value == 43);
    return 0;
}