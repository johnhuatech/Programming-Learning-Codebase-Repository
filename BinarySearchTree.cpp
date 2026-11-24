#include <iostream>
#include <set> 
#include <map> 
#include <algorithm> 
#include "binarySearchTree.h"

int main()
{
    bSearchTreeType<int> tree;
    int values[] = {40, 50, 70, 30, 53, 80, 35, 57, 75, 48, 45};

    for (int val : values) {
        tree.insert(val);
        std::cout << val << " ";
    }
    std::cout << std::endl;

    std::cout << "In order traversal: ";
    tree.inOrderTraversal();
    std::cout << std::endl;

    std::cout << "Pre order traversal: ";
    tree.preOrderTraversal();
    std::cout << std::endl;

    std::cout << "Post order traversal: ";
    tree.postOrderTraversal();
    std::cout << std::endl;

    std::cout << "Tree height: " << tree.treeHeight() << std::endl;

    return 0;
}
