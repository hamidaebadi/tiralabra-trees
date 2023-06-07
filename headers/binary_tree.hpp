#ifndef BINARY_TREE
#define BINARY_TREE




/// @brief This class represents the Binary Tree data strucutre

class BSTNode {
private:

    int data_ = 0;
    BSTNode* left_child_ = nullptr;
    BSTNode* right_child_ = nullptr;

public:
    BSTNode(int value): data_(value) {};
    ~BSTNode();    //destructure
    void set_data(int data);
    int get_data(){return data_;};

    void set_left_child(BSTNode* new_node){left_child_ = new_node;};
    void set_right_child(BSTNode* new_node){right_child_ = new_node;};
    
    BSTNode* get_left_child(){return left_child_;};
    BSTNode* get_right_child(){return right_child_;};


    //insertion method
    friend void bst_insert_to(BSTNode* root, int value);

    //searching method
    friend bool bst_search(BSTNode* root, int value);


};


#endif