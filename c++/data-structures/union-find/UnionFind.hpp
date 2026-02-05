#pragma once

class UnionFind {
public:
    virtual ~UnionFind() = default;        

    virtual int find(int x) const = 0;
    virtual void unionSet(int x, int y) = 0;
    virtual bool connected(int x, int y) const = 0;
};