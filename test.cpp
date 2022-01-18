
/*  Jacob Bentley
 *  2022-01-13
 *
 *  Project:            Implementing a red-black tree in C++.
 *  This iteration:     A simple binary tree with integer data.
 *  This file:          Testing functions.
 *
 */

//  TODO: make testing classes, eg. testnode.default_const()
//  TODO: how to link additional functions in main without header/objects?

/*  PREPROCESSOR  */

#include "tree.h"


/*  CONSTANTS  */


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
