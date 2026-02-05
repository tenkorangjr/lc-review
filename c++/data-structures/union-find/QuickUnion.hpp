#pragma once

#include <iostream>
#include "UnionFind.hpp"

class QuickUnion : public UnionFind {
    public:
        explicit QuickUnion(int sz);

        int find(int x) const;
        void unionSet(int x, int y);
        bool connected(int x, int y) const;

    private:
        std::vector<int> root_; 
};
