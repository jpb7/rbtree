/*  Jacob Bentley
 *  2022-02-13
 *
 *  Project:            Implementing a red-black tree in C++.
 *  This iteration:     A simple binary tree with integer data.
 *  This file:          Testing class interface.
 *
 */

//  PREPROCESSOR

#include <sstream>
#include "tree.h"


//  CONSTANTS

#define MIN   -101
#define MAX    101
#define RANGE  203


/*  TEST INTERFACES  */


//  Node testing class.

class testNode {

    public:

        testNode();
        ~testNode();

        bool test_def_constr(void);
        bool test_item_constr(void);
        bool test_display(void);

    protected:

        int passed, failed;

};


//  Tree testing class.

class testTree {

    public:

        testTree();
        ~testTree();

        bool test_def_constr(void);
        bool test_item_constr(void);
        bool test_insert(void);
        bool test_insert_array(void);
        bool test_remove(void);
        bool test_retrieve(void);
        bool test_display(void);
        bool test_display_all(void);
        bool test_remove_all(void);

    protected:

        int passed, failed;

};


