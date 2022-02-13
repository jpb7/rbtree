/*  Jacob Bentley
 *  2022-02-13
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

    testNode x;
    testTree y;

    std::cout << "\nNODE TESTING\n" << std::endl;

    if (x.test_def_constr()) {
        std::cout << "Default constructor: success!" << std::endl;
    }

    if (x.test_item_constr()) {
        std::cout << "Item constructor: success!" << std::endl;
    }

    if (x.test_display()) {
        std::cout << "Display: success!" << std::endl;
    }

    std::cout << "\nTREE TESTING\n" << std::endl;

    if (y.test_insert_array()) {
        std::cout << "Balanced insertion: success!" << std::endl;
    }

    std::cout << std::endl;
    return 0;

}


