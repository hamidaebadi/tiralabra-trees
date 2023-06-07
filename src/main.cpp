#include <iostream>
#include "../headers/binary_tree.hpp"

int main(){
    std::cout << "Creating a node" << std::endl;

    BSTNode* root = new BSTNode(10);
    

    bst_insert_to(root, 5);
    bst_insert_to(root, 15);
    bst_insert_to(root, 8);
    bst_insert_to(root, 4);
    bst_insert_to(root, 3);

    bst_search(root, 8);
    delete root;
    return 0;
}