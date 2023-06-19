#include <iostream>
#include "../headers/binary_tree.hpp"

BSTNode::~BSTNode(){
    if(left_child_ != nullptr) delete left_child_;
    if(right_child_ != nullptr) delete right_child_;
}

void BSTNode::set_data(int data){
    data_ = data;
}

void bst_insert_to(BSTNode* root, int value){
    if(root == nullptr){
        //root is null, so create a root
        root = new BSTNode(value);
        return;
    }

    
    if(root->get_data() >= value){
        if(root->get_left_child() == nullptr ){
            auto new_node = new BSTNode(value);
            root->set_left_child(new_node);
        }else{
            bst_insert_to(root->get_left_child(), value);
        }
        
        
    }else{
        if(root->get_right_child() ==  nullptr){
            auto new_node = new BSTNode(value);
            root->set_right_child(new_node);
        }else{
            bst_insert_to(root->get_right_child(), value);
        }
          
    }
}

bool bst_search(BSTNode* root, int value){
    if(root == nullptr){
        std::cout << "Empty tree or value not found" << std::endl;
        return false;
    }

    if(root->get_data() == value){
        std::cout << "Value found" << std::endl;
        return true;
    }else if(root->get_data() > value){
        bst_search(root->get_left_child(), value);
    }else{
        bst_search(root->get_right_child(), value);
    }
}

void bst_inorder_traversal(BSTNode* root){
    if(root != nullptr){
        bst_inorder_traversal(root->get_left_child());
        std::cout << root->get_data() << " " <<std::flush;
        bst_inorder_traversal(root->get_right_child());
    }
}