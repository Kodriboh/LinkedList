#ifndef NODE_H
#define NODE_H

#include <iostream>
#include <memory>

template <typename T>
class Node {
  public:
    std::unique_ptr<Node> _next;
    T _data;

    Node() {
      std::cout << "Initialising Node..." << std::endl;
    };

    Node(const T &value): _data(value), _next(nullptr) {
     std::cout << "Initialising Node..." << std::endl;
    }
};

#endif
