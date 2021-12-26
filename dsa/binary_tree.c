#include <stdio.h>
#include <stdlib.h>

struct tree {

    int val;
    struct tree* left;
    struct tree* right;
};

typedef struct tree TreeNode;
TreeNode* newTree(int data)
{
    // Allocate memory for new node
    TreeNode* root = (TreeNode*)malloc(sizeof(TreeNode));

    // Assign data to this node val
    root->val = data;

    // Initialize left and right children as NULL
    root->left = NULL;
    root->right = NULL;
    return (root);
}

void inorder(TreeNode* root)
{
    //base case
    if (root == NULL)
        return;
    //traverse left sub tree first
    inorder(root->left);
    //traverse current node secondly
    printf("%d ", root->val);
    //traverse right sub tree finally
    inorder(root->right);
}
int main(void)
{
    //building the tree
    TreeNode* t = newTree(7);
    t->left = newTree(13);
    t->left->left = newTree(20);
    t->left->right = newTree(34);
    t->left->right->left = newTree(21);
    t->left->right->right = newTree(56);
    t->left->right->right->left = newTree(44);
    t->left->right->right->right = newTree(63);
    t->right = newTree(94);
    t->right->left = newTree(85);
    t->right->right = newTree(100);
    printf("Inorder traversal of the above tree is:\n");
    inorder(t);
    return 0;
}
