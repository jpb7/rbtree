/*  Jacob Bentley
 *  2022-01-20
 *
 *  Project:            Implementing a red-black tree in C++.
 *  This iteration:     A simple binary tree with integer data.
 *  This file:          Main function, basic client.
 *
 */

//  PREPROCESSOR

#include "test.h"


//  CONSTANTS

#define MIN -100
#define MAX 101


//  MAIN FUNCTION

int main(void) {

    testnode x;
    int failed = 0;

    if (x.test_def_constr()) {
        std::cout << "Default constructor: success!" << std::endl;
    }

    //  TODO: make this part of test_item_constr()

    for (int i = MIN; i < MAX; ++i) {
        if (!x.test_item_constr(i)) {
            ++failed;
            std::cout << "Item constructor: failed for value " << i << "."
                      << std::endl;
        }
    }

    if (!failed) {
        std::cout << "Item constructor: success!" << std::endl;
    }

    //  TODO: make this part of test_display()
    //  TODO: suppress output of node.display()

    for (int i = MIN; i < MAX; ++i) {
        if (!x.test_display(i)) {
            ++failed;
            std::cout << "Display: failed for value " << i << "."
                      << std::endl;
        }
    }

    if (!failed) {
        std::cout << "\nDisplay: success!" << std::endl;
    }

    return 0;

}
