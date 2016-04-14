//
//  eval.c
//  lisp-fun
//
//  Created by Timothy Williams on 2016-04-13.
//
//

#include "eval.h"


// applies a single argument that is a standard c int to a function that takes an int and returns
// an int
int apply_int_function(int (*functionPtr)(int), int input_val){
    return (*functionPtr)(input_val);
}
