/*  Jacob Bentley
 *  2022-01-25
 *
 *  Project:            Implementing a red-black tree in C++.
 *  This iteration:     A simple binary tree with integer data.
 *  This file:          Testing functions.
 *
 */


//  TODO: fix output redirect issues starting at 81.


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

bool testnode::test_item_constr(void) {

    int failed = 0;

    for (int i = MIN; i < MAX; ++i) {
        node test(i);
        if (test.data != i) {
            ++failed;
            std::cout << "Item constructor: failed for value " << i << "."
                      << std::endl;
        }
    }

    if (!failed) {
        return true;
    }

    return false;

}


//  TODO: fix output redirect issues.
//        goal: reconcile streambuffer with ostream (w/o overload)

//  Test: display data item.

bool testnode::test_display(void) {

    int failed = 0;
    std::streambuf *out = std::cout.rdbuf();

    for (int i = MIN; i < MAX; ++i) {
        std::cout.rdbuf(NULL);
        node test(i);
        if (!test.display()) {
            ++failed;
            std::cout.rdbuf(out);
            std::cout << "Display: failed for value " << i << "."
                      << std::endl;
        }
    }

    if (!failed) {
        std::cout << "\nDisplay: success!" << std::endl;
        return true;
    }

    return false;

}
