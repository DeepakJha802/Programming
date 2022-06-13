#include <stdio.h>
#include <stdlib.h>

struct node 
{
   int data; 
   struct node *lc;
   struct node *rc;
};
struct node *root = NULL;
void insert(int data)
{
   struct node *tempNode = (struct node*) malloc(sizeof(struct node));
   struct node *current;
   struct node *parent;

   tempNode->data = data;
   tempNode->lc = NULL;
   tempNode->rc = NULL;
   //if tree is empty
   if(root == NULL)
   {
     root = tempNode;
   } 
   else
   {
      current = root;
      parent = NULL;
      while(1)
       { 
         parent = current;
         //go to left of the tree
         if(data < parent->data) 
        {
            current = current->lc;                
            //insert to the left
            if(current == NULL) 
            {
               parent->lc = tempNode;
               return;
            }
        }  //go to right of the tree
        else
        {
            current = current->rc;
            //insert to the right
            if(current == NULL) 
            {
               parent->rc = tempNode;
               return;
            }
        }
      }            
   }
}
struct node* search(int data)
 {
   struct node *current = root;
   printf("Visiting elements: ");
   while(current->data != data)
    {
      if(current != NULL)
        printf("%d ",current->data); 
      //go to left tree
      if(current->data > data)
       {
         current = current->lc;
       }
      //else go to right tree
      else
       {                
         current = current->rc;
       }
      //not found
      if(current == NULL) 
      {
         return NULL;
      }
   }
    return current;
}

void pre_order_traversal(struct node* root)
 {
   if(root != NULL) 
   {
      printf("%d ",root->data);
      pre_order_traversal(root->lc);
      pre_order_traversal(root->rc);
   }
}

void inorder_traversal(struct node* root)
 {
   if(root != NULL)
   {
      inorder_traversal(root->lc);
      printf("%d ",root->data);          
      inorder_traversal(root->rc);
    }
}

void post_order_traversal(struct node* root)
 {
   if(root != NULL) 
   {
      post_order_traversal(root->lc);
      post_order_traversal(root->rc);
      printf("%d ", root->data);
   }
}

int main(void)
{
   int i,n;
   printf("Enter the size of data : ");
   scanf("%d",&n);
   int array[n];
   printf("Enter The Elements : ");
   for(i=0;i<n;i++)
   scanf("%d",&array[i]);
   for(i = 0; i < n; i++)
   insert(array[i]);
   i = 31;
   struct node * temp = search(i);

   if(temp != NULL) 
   {
      printf("[%d] Element found.", temp->data);
      printf("\n");
   }else 
   {
      printf("[ x ] Element not found (%d).\n", i);
   }

   i = 15;
   temp = search(i);

   if(temp != NULL) 
   {
      printf("[%d] Element found.", temp->data);
      printf("\n");
   }else 
   {
      printf("[ x ] Element not found (%d).\n", i);
   }            

   printf("\nPreorder traversal: ");
   pre_order_traversal(root);

   printf("\nInorder traversal: ");
   inorder_traversal(root);

   printf("\nPost order traversal: ");
   post_order_traversal(root);       

   return 0;
}

