#include <iostream>

#include "LinkedList.h"

int main(int argc, char **argv) {

  LinkedList<int> myList;

  myList.insert(1);
  myList.insert(2);
  myList.insert(3);

  myList.display();

  return 0;
}
