#include <iostream>
using namespace std;

class Node{
    public:
    int info;
    Node *leftchild;
    Node *rightchild;

    // Constructor for the Node class
    Node(){
        leftchild = nullptr; // Initialize left child to null
        rightchild = nullptr; // Initialize right child to null
    }
};

class BinaryTree{
    public:
    Node *ROOT;

    BinaryTree(){
        ROOT = nullptr; // Initializing ROOT to null
    }

    void insert(){
        int x;
        cout << "Masukkan nilai : ";
        cin >> x;

        //Step 1 : Allocate memory for a new node
        Node *newNode = new Node();

        //Step 2 : Assign the value to the data field of new Node
        newNode->info = x;

        //Step 3 : Make the left and right child of new Node point to NULL
        newNode->leftchild = nullptr;
        newNode->rightchild = nullptr;

        //Step 4 : Locate the node which will be the parent of the node to be inserted
        Node *parent = nullptr;
        Node *currentNode = nullptr;
        search (x, parent, currentNode);

        //Step 5 : if parent is NULL(tree is empty)
        if (parent == nullptr) {
            //5a : Mark the new node as ROOT
            ROOT = newNode;

            //5b : Exit
            return; 
        }
    
       
    }

};