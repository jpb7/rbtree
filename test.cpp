/*  Jacob Bentley
 *  2022-02-01
 *
 *  Project:            Implementing a red-black tree in C++.
 *  This iteration:     A simple binary tree with integer data.
 *  This file:          Testing functions.
 *
 */

//  TODO: implement test_insert at L105.

/*  PREPROCESSOR  */

#include "test.h"


/*  NODE TESTS  */

//  Default constructor.

testNode::testNode(void) {}


//  Destructor.

testNode::~testNode(void) {

    passed = failed = 0;

}


//  Test: default constructor.

bool testNode::test_def_constr(void) {

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

bool testNode::test_item_constr(void) {

    //  TODO: field or local variable?
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


//  Test: display data item.

bool testNode::test_display(void) {

    std::stringstream ss;   //  suppress output in node.display()

    //  TODO: field or local variable?
    int failed = 0;

    for (int i = MIN; i < MAX; ++i) {
        node test(i);
        if (!test.display(ss)) {
            ++failed;
            std::cout << "Display: failed for value " << i << "."
                      << std::endl;
        }
    }

    if (!failed) {
        return true;
    }

    return false;

}


//  Test: insert in balanced order.

bool testTree::test_insert(void) {

    //tree test;
    //int failed = 0;
    //  TODO: algorithm for balanced insertion.
    return false;

}


