/*  Jacob Bentley
 *  2022-01-13
 *
 *  Project:            Implementing a red-black tree in C++.
 *  This iteration:     A simple binary tree with integer data.
 *
 */

//  PREPROCESSOR

#include <iostream>

//  CONSTANTS


//  PROTOTYPES

struct node {

    node(void);
    node(const int n);
    ~node(void);

    bool display(void);

    int data;
    node *left, *right;

};


class tree {

    public:

        tree(void);
        ~tree(void);

        bool insert(const int n);
        bool remove(const int n);
        bool retrieve(const int n) const;
        bool display(const int n) const;
        int  display_all(void) const;
        int  remove_all(void);

    protected:

        int height;
        node *root;

    private:

        bool insert(node *&root, const int n);
        bool remove(node *&root, const int n);
        bool retrieve(node *root, const int n) const;
        bool display(node *root, const int n) const;
        int  display_all(node *root) const;
        int  remove_all(node *& root);

};
