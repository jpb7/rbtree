/*  Jacob Bentley
 *  2022-01-23
 *
 *  Project:            Implementing a red-black tree in C++.
 *  This iteration:     A simple binary tree with integer data.
 *  This file:          Class interface for ADT `tree`.
 *
 */

//  PREPROCESSOR

#include <iostream>


//  INTERFACES

//  Holds integer value and child pointers; belongs to `tree`.

struct node {

    node(void);
    node(const int n);
    ~node(void);

    //  Print integer value with trailing space.
    bool display(std::ostream &out = std::cout);

    int data;
    node *left, *right;

};


//  Abstract data type: binary search tree with nodes defined above.

class tree {

    public:

        tree(void);
        tree(const int item);
        ~tree(void);

        //  Add value `n` to tree in sorted order.
        bool insert(const int n);

        //  Remove first value `n` found in tree.
        bool remove(const int n);

        //  Return value `n` if found in tree, 0 otherwise.
        int  retrieve(const int n) const;

        //  Print value `n` if found in tree, return success or failure.
        bool display(const int n) const;

        //  Display all values, return number of nodes.
        int  display_all(void) const;

        //  Remove every node in the tree, deallocate memory.
        int  remove_all(void);

    protected:

        int nodes, height;
        node *root;

    private:

        //  Recursively traverse tree and insert value `n`.
        bool insert(node *&root, const int n);

        //  Recursively remove `n`; return `false` if not found.
        bool remove(node *&root, const int n);

        //  Recursively find and return `n`; return `false` if not found.
        bool retrieve(node *root, const int n) const;

        //  Recursively find and display `n`; return `false` if not found.
        bool display(node *root, const int n) const;

        //  Recursively display all values in tree, return nodes displayed.
        int  display_all(node *root) const;

        //  Recursively remove all nodes and deallocate tree's memory.
        int  remove_all(node *& root);

};
