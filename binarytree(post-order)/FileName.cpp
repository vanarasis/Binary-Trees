#include <iostream>  // it is input output statment 
using namespace std;  // standard command 

// Define a structure for a node in the binary tree
struct Node {
    int data;
    struct Node* left, * right;
};

// Function to create a new node with given data
Node* newNode(int data) {
    Node* temp = new Node; // Allocate memory for the new node
    temp->data = data; // Assign data to the new node
    temp->left = temp->right = NULL; // Initialize left and right children as NULL
    return temp; // Return the new node
}

// Function to print binary tree recursively in postorder
void printTreePostorder(Node* root) {
    if (root == NULL)
        return; // If the tree is empty, return
    printTreePostorder(root->left); // Recursively traverse left subtree
    printTreePostorder(root->right); // Recursively traverse right subtree
    cout << root->data << " "; // Print the data of the current node
}

int main() {
    // Construct the binary tree
    Node* root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
    root->left->left = newNode(4);
    root->left->right = newNode(5);
    root->left->right->left = newNode(9);
    root->right->left = newNode(6);
    root->right->right = newNode(7);
    root->right->right->left = newNode(15);

    // Print the binary tree using postorder traversal
    cout << "Binary Tree (Postorder traversal):" << endl;
    printTreePostorder(root);

    return 0; // Return 0 to indicate successful execution
}
