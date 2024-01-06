#include<iostream>

struct node{
    char data {NULL};
    struct node* left {NULL};
    struct node* right {NULL};
};

void insertChar(struct node* root, int data){
    struct node* temp = new node;
    temp->data = data;
    if(data>root->data){
        if(root->right!=NULL){
            insertChar(root->right, data);
        }
        else{
            root->right = temp;
        }
    }

    else if(data<root->data){
        if(root->left!=NULL){
            insertChar(root->left, data);
        }
        else{
            root->left = temp;
        }
    }
}

struct node* smallestChar(struct node* node){
    struct node* current = node;
    while (current != NULL && current->left != NULL)
        current = current->left;
    return current;
}

struct node* biggestChar(struct node* node){
    struct node* current = node;
    while (current!= NULL && current->right != NULL)
        current = current->right;
    return current;
}

struct node* deleteNode(struct node* root, int data){
    if (root == NULL){
        std::cout<<("data does not exist in the binary tree")<<std::endl;
        return root;
    }
    if (data < root->data){
        root->left = deleteNode(root->left, data);
    }    
    else if (data > root->data){
        root->right = deleteNode(root->right, data);
    }
    else {
        if (root->left==NULL and root->right==NULL){
            return NULL;
        }    
        else if (root->left == NULL) {
            struct node* temp = root->right;
            free(root);
            return temp;
        }
        else if (root->right == NULL) {
            struct node* temp = root->left;
            free(root);
            return temp;
        }
        struct node* temp = smallestChar(root->right);
        root->data = temp->data;
        root->right = deleteNode(root->right, temp->data);
    }
    return root;
}


void printInorder(struct node* root){
    if (root == NULL)
        return;
    printInorder(root->left);
    std::cout<<root->data<< " ";
    printInorder(root->right);
}

void printPreorder(struct node* root){
    if (root == NULL)
        return;
    std::cout<<root->data<<" ";
    printPreorder(root->left);
    printPreorder(root->right);
}

int main(){
    struct node* root = new node;
    root->data = 'E';
    insertChar(root, 'N');
    insertChar(root, 'G');
    insertChar(root, 'I');
    insertChar(root, 'T');
    insertChar(root, 'K');
    insertChar(root, 'D');
    insertChar(root, 'B');
    insertChar(root, 'O');
    insertChar(root, 'C');
    insertChar(root, 'W');
    insertChar(root, 'M');
    insertChar(root, 'P');
    insertChar(root, 'F');
    deleteNode(root, 'P');
    deleteNode(root, 'K');
    deleteNode(root, 'I');
    std::cout<<"preorder - ";
    printPreorder(root);
    std::cout<<std::endl;
    std::cout<<"inorder - ";
    printInorder(root);
    std::cout<<std::endl;
    return 0;
}