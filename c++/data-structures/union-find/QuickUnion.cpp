#include <iostream>
#include "QuickUnion.hpp"

/*
Key idea: Uses a parent array instead of a root array -- that is, instead of the values of the vertices (represented 
using indices) to be the root, it is the parent
*/

/**
 * Constructor
 */
QuickUnion::QuickUnion(int sz)
    : root_(sz) {
        for (int i = 0; i < sz; i++) {
            root_[i] = i;
        }
    }


