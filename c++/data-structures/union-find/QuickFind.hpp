#pragma once

#include <iostream>
#include "UnionFind.hpp"

class QuickFind : public UnionFind {
    public:
        explicit QuickFind(int sz);

        int find(int x) const;
        void unionSet(int x, int y);
        bool connected(int x, int y) const;

    private:
        std::vector<int> root_; 
};
