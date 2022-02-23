/*  Jacob Bentley
 *  2022-02-23
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

    /*
    tree z;
    int arr[RANGE];

    std::cout << "Building array..." << std::endl;

    for (int i = 0, value = MIN; i < RANGE; ++i, ++value) {
        arr[i] = value;
        std::cout << value << ' ';
    }

    std::cout << "\n... array complete." << std::endl;

    std::cout << "\nInserting array..." << std::endl;

    if (z.insert_array(arr, RANGE - 1)) {
        std::cout << "... insertion complete." << std::endl;
    }

    std::cout << "\nDisplaying tree..." << std::endl;

    if (z.display_all()) {
        std::cout << "\n... display complete." << std::endl;
    }
    */

    std::cout << std::endl;

    return 0;

}


