/*  Jacob Bentley
 *  2022-01-18
 *
 *  Project:            Implementing a red-black tree in C++.
 *  This iteration:     A simple binary tree with integer data.
 *  This file:          Testing functions.
 *
 */

//  TODO: make testing classes

/*  PREPROCESSOR  */

#include "tree.h"


/*  PROTOTYPES  */

bool testnode_default_const(void); 


/*  NODE TESTS  */

//  Test: default constructor.

bool testnode_default_const(void) {

    node testnode;

    if (testnode.data) {
        return false;
    }
    if (testnode.left || testnode.right) {
        return false;
    }
    
    return true;

}
