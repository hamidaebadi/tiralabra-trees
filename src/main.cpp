#include <iostream>
#include "../headers/binary_tree.hpp"

int main(){
    std::cout << "Creating a node" << std::endl;

    Node* root = new Node();
    root->set_data(10);
    

    std::cout << "Inserting value 5 into the left child of root " << std::endl; 
    insert_to(root, 5);

    Node *left_child = root->get_left_child();

    if(left_child == nullptr){
        std::cout << "left_child is null" << std::endl;
        return 0;
    }
    std::cout << "The value of left child of root node is: " << left_child->get_data() << std::endl;
    
    return 0;
}