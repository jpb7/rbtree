/*  Jacob Bentley
 *  2022-01-27
 *
 *  Project:            Implementing a red-black tree in C++.
 *  This iteration:     A simple binary tree with integer data.
 *  This file:          Function implementations for binary tree.
 *
 */

/*  PREPROCESSOR  */

#include "tree.h"


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

bool node::display(std::ostream &out) {

    if (out << data << " ") {
        return true;
    }
    return false;

}


/*  TREE FUNCTIONS  */

//  Constructor.

tree::tree(void): nodes(0), height(0), root(NULL) {}
tree::tree(const int item): nodes(1), height(1), root(new node(item)) {}
