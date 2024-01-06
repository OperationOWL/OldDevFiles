#include<iostream>

struct node{
    int data {NULL};
    struct node* left {NULL};
    struct node* right {NULL};
};

void insert(struct node* root, int data){
    struct node* temp = new node;
    temp->data = data;
    if(data>root->data){
        if(root->right!=NULL){
            insert(root->right, data);
        }
        else{
            root->right = temp;
        }
    }

    else if(data<root->data){
        if(root->left!=NULL){
            insert(root->left, data);
        }
        else{
            root->left = temp;
        }
    }
}

struct node* smallest(struct node* node){
    struct node* current = node;
    while (current != NULL && current->left != NULL)
        current = current->left;
    return current;
}

struct node* greatestLeft(struct node* node){
    struct node* current = node;
    while (current->left->right != NULL && current->left->right->right != NULL)
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
        struct node* temp = smallest(root->right);
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
    root->data = 45;
    insert(root, 20);
    insert(root, 30);
    insert(root, 33);
    insert(root, 50);
    insert(root, 19);
    deleteNode(root, 30);
    insert(root, 52);
    insert(root, 10);
    insert(root, 15);
    insert(root, 55);
    insert(root, 5);
    deleteNode(root, 15);
    insert(root, 34);
    insert(root, 25);
    insert(root, 29);
    insert(root, 31);
    insert(root, 55);
    deleteNode(root, 29);
    insert(root, 90);
    insert(root, 80);

    std::cout<<"preorder: ";
    printPreorder(root);
    std::cout<<std::endl;
    std::cout<<"inorder: ";
    printInorder(root);
    std::cout<<std::endl;
    return 0;
}