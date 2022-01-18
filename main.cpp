/*  Jacob Bentley
 *  2022-01-13
 *
 *  Project:            Implementing a red-black tree in C++.
 *  This iteration:     A simple binary tree with integer data.
 *  This file:          Main function, basic client.
 *
 */

//  PREPROCESSOR

#include "tree.h"

//  CONSTANTS

//  MAIN FUNCTION

int main(void) {

    node test(13);

    if (testnode_default_const()) {
        std::cout << "Default constructor: success!" << std::endl;
    }
    if (test.display()) {
        std::cout << "\nDisplay: success!" << std::endl;
    }

    return 0;

}
