#include <iostream>  // it is an input output statments 
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

// Function to print binary tree recursively
void printTreeRecursive(Node* root, int level = 0) {
    if (root == NULL)
        return; // If the tree is empty, return

    // Print right subtree
    printTreeRecursive(root->right, level + 1);

    // Print current node
    for (int i = 0; i < level; ++i)
        cout << "  "; // Print spaces based on the level to represent the tree structure
    cout << root->data << endl; // Print data of the current node

    // Print left subtree
    printTreeRecursive(root->left, level + 1);
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

    // Print the binary tree
    cout << "Binary Tree:" << endl;
    printTreeRecursive(root);

    return 0; // Return 0 to indicate successful execution
}
