/*  Jacob Bentley
 *  2022-01-13
 *
 *  Project:            Implementing a red-black tree in C++.
 *  This iteration:     A simple binary tree with integer data.
 *  This file:          Function implementations for binary tree.
 *
 */

/*  PREPROCESSOR  */

#include "tree.h"


/*  CONSTANTS  */


/*  NODE FUNCTIONS  */

//  Constructors.

node::node(void): data(0), left(NULL), right(NULL) {}
node::node(const int item): data(item), left(NULL), right(NULL) {}


//  Destructor.

node::~node(void) {

    data = 0;
    left = right = NULL;

}


//  Display node's integer data using simple in-line formatting.

bool node::display(void) {

    if (std::cout << data << " ") {
        return true;
    }
    return false;

}
