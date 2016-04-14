//
//  eval.h
//  lisp-fun
//
//  Created by Timothy Williams on 2016-04-13.
//
//

#ifndef eval_h
#define eval_h

#include <stdio.h>

int apply_int_function(int (*functionPtr)(int), int input_val);

#endif /* eval_h */
