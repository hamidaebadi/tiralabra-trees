## Implementation Document

### General view of the program

The general structure of the proram consists of four tree data strucutres with the same operations to be compared
with each other.

### Binary Search Tree

 **Definition**: A binary search tree or BST is a tree data strucutre used for
 efficient data insertion and searching. Each node can have at most two child-nodes.
 Left-child value is less than the root's value and the right-child value should be
 greater than the root.

 #### Operations ####
  
  **Insertion**: A new node is added by searching from the root node, untill found the appropriate leafe-node
  and the new node as the leaf-node. The time-complexity of this operation is O(n) where n is the number of 
  nodes in the tree.

  **Inorder traversal**: In a BST, inorder-traversal gives the nodes in the tree in non-decreasing node.
  The visiting order is left-->root-->right.
  Time-complexity of this operation is O(n) where n is the number of nodes.

  **Deletion of node**: 

  