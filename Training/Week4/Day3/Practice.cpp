#include <iostream>
using namespace std;

//Binary Search Tree 

class TNode
{
    public : 
        TNode()
        {
            val= 0;
            left=NULL;
            right=NULL;
        }
        TNode(int data)
        {
             val= data;
            left=NULL;
            right=NULL;
        }
TNode* InsertNode(TNode* root , int data)
{
        if(root==NULL)
        {
            return new TNode(data);
        }
        if(data>root->val)
        {
            root->right= InsertNode(root->right,data);
        }
        else{
        root->left= InsertNode(root->left,data);
        }
    return root;
}
void inorder(TNode* temp)
{
    if (temp==NULL) {
        return;
    }
    inorder(temp->left);
    cout << temp->val << " ";
    inorder(temp->right);
}

void preorder(TNode* temp)
{
     if (temp==NULL) {
        return;
    }
    cout << temp->val << " ";
    preorder(temp->left);
    preorder(temp->right);
}

void postOrder(TNode *temp)
{
     if (temp==NULL) {
        return;
    }
    preorder(temp->left);
    preorder(temp->right);
    cout << temp->val << " ";

}
    private : 
    int val ; 
    TNode *left ;
    TNode *right ;
};




int main()
{

TNode BST ;
TNode *root = NULL;
root=BST.InsertNode(root,10);
BST.InsertNode(root,30);
BST.InsertNode(root,20);
BST.InsertNode(root,50);
BST.InsertNode(root,60);
BST.InsertNode(root,60);
BST.InsertNode(root,80);
BST.inorder(root);
cout << endl;
BST.preorder(root);
cout << endl;
BST.postOrder(root);
}