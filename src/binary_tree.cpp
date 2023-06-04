#include <iostream>
#include "../headers/binary_tree.hpp"

Node::Node(){std::cout << "Binary tree node is created" <<std::endl;}
Node::~Node(){
    delete left_child_;
    delete right_child_;
}

void Node::set_data(int data){
    data_ = data;
}

int Node::get_data(){return data_;}


Node* Node::get_left_child(){
    return left_child_;
}

Node* Node::get_right_child(){
    return right_child_;
}


void insert_to(Node* root, int value){
    if(root == nullptr){
        //root is null, so create a root
        root = new Node();
        root->set_data(value);
        return;
    }

    
    if(root->get_data() >= value){
        if(root->get_left_child() == nullptr ){
            auto new_node = new Node();
            new_node->set_data(value);
            root->set_left_child(new_node);
        }else{
            insert_to(root->get_left_child(), value);
        }
        
        
    }else if(root->get_data() < value ){
        if(root->get_right_child() ==  nullptr){
            auto new_node = new Node();
            new_node->set_data(value);
            root->set_right_child(new_node);
        }else{
            insert_to(root->get_right_child(), value);
        }
          
    }
}
