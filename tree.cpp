/*  Jacob Bentley
 *  2022-02-13
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


//  Constructors.

tree::tree(void): nodes(0), height(0), root(NULL) {}
tree::tree(const int item): nodes(1), height(1), root(new node(item)) {}


//  Destructor.

tree::~tree(void) {

    nodes = height = 0;
    if (root) {
        remove_all(root);
    }

}


//  Wrapper function: insert node according to data item.

bool tree::insert(const int n) {

    return insert(root, n);

}


//  Insert node in sorted order.

bool tree::insert(node *&root, const int n) {

    if (!root) {
        root = new node(n);
        ++nodes;
        return true;
    }

    else if (n < root->data) {
        return insert(root->left, n);
    }

    return insert(root->right, n);

}


//  Wrapper function: recursively insert sorted array in balanced order.
//  Finds length of array, inserts values, returns number of nodes inserted.

int tree::insert_array(int arr[]) {

    //  TODO: make this more readable and/or efficient.

    int start = arr[0], stop;
    for (stop = 0; arr[stop]; ++stop);
    return insert_array(root, arr, start, stop);

}


//  Insert sorted array of integers in balanced order.

int tree::insert_array(node *&root, int arr[], int start, int stop) {

    if (start > stop) {
        root = NULL;
        return 0;
    }

    int mid = floor((start + stop) / 2);
    int count = 1;

    root = new node(arr[mid]);
    count += insert_array(root->left, arr, start, mid - 1);
    count += insert_array(root->right, arr, mid + 1, stop);

    return count;

}


//  Wrapper function to recursively remove every node in the tree.
//  Returns number of nodes removed.

int tree::remove_all(void) {

    return remove_all(root);

}


//  Use head recursion to remove every node in the tree, starting at leaves.
//  Returns number of nodes removed.

int tree::remove_all(node *&root) {

    if (!root) {
        return 0;
    }

    int removed = remove_all(root->left);
    removed += remove_all(root->right);

    delete root;
    root = NULL;

    return ++removed;

}


