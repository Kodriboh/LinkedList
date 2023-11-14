#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include "Node.h"

template <typename T>
class LinkedList {
  public:
    LinkedList(): _head(nullptr) {};
    LinkedList(const T& value): _head(std::make_unique<Node<T>>(value)) {};

    void insert(const T& value) {
      std::unique_ptr<Node<T>> newNode = std::make_unique<Node<T>>(value);
      newNode->_next = std::move(_head);
      _head = std::move(newNode);
    };
    void display() const {
      Node<T>* current = _head.get();
      while (current != nullptr) {
        std::cout << current->_data << " ";
        current = current->_next.get();
      }
      std::cout << std::endl;
    };

  private:
    std::unique_ptr<Node<T>> _head;

};

#endif
