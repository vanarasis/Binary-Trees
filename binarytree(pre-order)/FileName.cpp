#include <iostream>
using namespace std;

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

// Function to print binary tree recursively in preorder
void printTreePreorder(Node* root) {
    if (root == NULL)
        return; // If the tree is empty, return
    cout << root->data << " "; // Print the data of the current node
    printTreePreorder(root->left); // Recursively traverse left subtree
    printTreePreorder(root->right); // Recursively traverse right subtree
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

    // Print the binary tree using preorder traversal
    cout << "Binary Tree (Preorder traversal):" << endl;
    printTreePreorder(root);

    return 0; // Return 0 to indicate successful execution
}
