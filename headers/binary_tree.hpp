#ifndef BINARY_TREE
#define BINARY_TREE

/// @brief This class represents the Binary Tree data strucutre

class Node {
private:

    int data_ = 0;
    Node* left_child_ = nullptr;
    Node* right_child_ = nullptr;

public:
    Node();
    ~Node();    //destructure
    void set_data(int data);
    int get_data();

    void set_left_child(Node* new_node){left_child_ = new_node;};
    void set_right_child(Node* new_node){right_child_ = new_node;};
    
    Node* get_left_child();
    Node* get_right_child();


    //insertion method
    friend void insert_to(Node* root, int value);


};

#endif