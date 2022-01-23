/*  Jacob Bentley
 *  2022-01-23
 *
 *  Project:            Implementing a red-black tree in C++.
 *  This iteration:     A simple binary tree with integer data.
 *  This file:          Main function, basic client.
 *
 */

//  PREPROCESSOR

#include "test.h"


//  MAIN FUNCTION

int main(void) {

    testnode x;

    if (x.test_def_constr()) {
        std::cout << "Default constructor: success!" << std::endl;
    }

    if (x.test_item_constr()) {
        std::cout << "Item constructor: success!" << std::endl;
    }

   return 0;

}
