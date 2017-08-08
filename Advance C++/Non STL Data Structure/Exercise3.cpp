#include <iostream>

class Node{
    public:
        std::string data;
        Node *left;
        Node *right;
        Node (std::string d){
            data = d;    
            left = NULL;
            right = NULL;
        }
};

class BST{
    private: 
        Node *root;
        void Insert(std::string data, Node *aNode); 
        Node *Search(std::string, Node *aNode);
        void preOrder(Node *aNode);
        void inOrder(Node *aNode);
        void postOrder(Node *aNode);

    public: 
        BST();
        void Insert(std::string data);
        Node *Search(std::string data);
        void preOrder();
        void inOrder();
        void postOrder();
};
 
BST::BST(){
    root = NULL;
}

void BST::Insert(std::string data, Node *aNode){
    if(data < aNode->data){
        if(aNode->left != NULL){
            Insert(data, aNode->left);
        }else{
            aNode->left = new Node(data);
            aNode->left->left = NULL;
            aNode->left->right = NULL;
        }
    }else if(data >= aNode->data){
        if(aNode->right != NULL){
            Insert(data, aNode->right);
        }else{
            aNode->right = new Node(data);
            aNode->right->left = NULL;
            aNode->right->right = NULL;
        }
    }
}

void BST::Insert(std::string data){
    if(root != NULL){
        Insert(data, root);
    }else{
        root = new Node(data);
        root->left = NULL;
        root->right = NULL;
    }
}


Node* BST::Search(std::string data, Node *aNode){
    if(aNode != NULL){
        if(data == aNode->data){
            return aNode;
        }

        if(data < aNode->data){
            return Search(data, aNode->left);
        }else{
            return Search(data, aNode->right);
        }
    }else{
        return NULL;
    }
}

Node* BST::Search(std::string data){
    return Search(data, root);
}

void BST::preOrder(){
    preOrder(root);
}


void BST::preOrder(Node *aNode){
    if(aNode != NULL){
        std::cout << aNode->data << " ";
        preOrder(aNode->left);
        preOrder(aNode->right);
    }
}

void BST::inOrder(){
    inOrder(root);
}

void BST::inOrder(Node *aNode){ 
    if(aNode != NULL){
        inOrder(aNode->left);
        std::cout << aNode->data<< " ";
        inOrder(aNode->right);
    }
}

void BST::postOrder(){
    postOrder(root);
}

void BST::postOrder(Node *aNode){
    if(aNode != NULL){
        postOrder(aNode->left);
        postOrder(aNode->right);
        std::cout << aNode->data << " ";
    }
}

int main(){
    BST *btree = new BST;
    btree->Insert("Mike");
    btree->Insert("David");
    btree->Insert("Jim");
    btree->Insert("Tom");
    btree->Insert("Brian");
    btree->Insert("Eric");
    btree->Insert("Will");
    btree->Insert("Terrace");
    btree->Insert("John");
    btree->Insert("Ben");
    btree->inOrder();
    std::cout << std::endl;
    btree->preOrder();
    std::cout << std::endl;
    btree->postOrder();
    return 0;
}