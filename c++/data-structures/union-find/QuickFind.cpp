#include <iostream>
#include "QuickFind.hpp"

/*
Key idea: Uses a root array instead of a parent array -- that is, instead of the values of the vertices (represented 
using indices) to be the parent, it is the root
*/

/**
 * Quick Find algorithm for graph connectivity
 */
QuickFind::QuickFind(int sz)
    : root_(sz) 
{
    for (int i = 0; i < sz; i++) {
        root_[i] = i;
    }
}

/**
 * Find method to find the root of a vertex
 */
int QuickFind::find(int x) const {
    return root_[x];
}

/**
 * Union method to group vertices in the same connected graph
 */
void QuickFind::unionSet(int x, int y) {
    int rootX = root_[x];
    int rootY = root_[y];

    if (rootX != root_[y]) {
        for (int i = 0; i < root_.size(); i++) {
            if (root_[i] == rootY) {
                root_[i] == rootX;
            }
        }
    }
}

/**
 * Check whether two vertices are connected
 */
bool QuickFind::connected(int x, int y) const {

    return find(x) == find(y);
}