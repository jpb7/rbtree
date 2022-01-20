/*  Jacob Bentley
 *  2022-01-20
 *
 *  Project:            Implementing a red-black tree in C++.
 *  This iteration:     A simple binary tree with integer data.
 *  This file:          Testing functions.
 *
 */


//  TODO: use pointers, parameterize, add loops


/*  PREPROCESSOR  */

#include "test.h"


/*  NODE TESTS  */

//  Default constructor.

testnode::testnode(void) {}


//  Destructor.

testnode::~testnode(void) {

    passed = failed = 0;

}


//  Test: default constructor.

bool testnode::test_def_constr(void) {

    node test;

    if (test.data) {
        return false;
    }
    if (test.left || test.right) {
        return false;
    }
    
    return true;

}


//  Test: constructor with integer item.

bool testnode::test_item_constr(const int item) {

    node test(item);

    if (test.data != item) {
        return false;
    }

    return true;

}


//  Test: display data item.

bool testnode::test_display(const int item) {

    node test(item);

    if (!test.display()) {
        return false;
    }
    
    return true;

}
