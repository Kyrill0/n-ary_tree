#ifndef LAST_LIBRARY_H
#define LAST_LIBRARY_H
#include <iostream>
#include <vector>
struct Node{

    bool operator==(const Node &rhs) const {
        return n == rhs.n &&
               svyaz == rhs.svyaz;
    }

    bool operator!=(const Node &rhs) const {
        return !(rhs == *this);
    }

    int n;
    std::vector<int> svyaz;
};
std::vector<Node> insert(std::vector <Node> vecn);
void print(std::vector<Node> v);
std::vector<Node> eject(std::vector<Node> v,int n);
#endif //LAST_LIBRARY_H
