/*  Jacob Bentley
 *  2022-01-23
 *
 *  Project:            Implementing a red-black tree in C++.
 *  This iteration:     A simple binary tree with integer data.
 *  This file:          Testing class interface.
 *
 */

//  PREPROCESSOR

#include "tree.h"


//  CONSTANTS

#define MIN -100
#define MAX 101


/*  TEST INTERFACES  */

class testnode {

    public:

        testnode();
        ~testnode();

        bool test_def_constr(void);
        bool test_item_constr(void);
        bool test_display(void);

    protected:

        int passed, failed;

};
