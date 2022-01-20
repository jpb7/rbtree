/*  Jacob Bentley
 *  2022-01-20
 *
 *  Project:            Implementing a red-black tree in C++.
 *  This iteration:     A simple binary tree with integer data.
 *  This file:          Testing class interface.
 *
 */

//  PREPROCESSOR

#include "tree.h"


/*  TEST INTERFACES  */

class testnode {

    public:

        testnode();
        ~testnode();

        bool test_def_constr(void);
        bool test_item_constr(const int item);
        bool test_display(const int item);

    protected:

        int passed, failed;

};
