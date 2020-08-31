#include<stdio.h>

typedef struct node1
{
  int data;
  struct node1 *left;
  struct node1 *right;
  int height;
} node;
 node* root = NULL; 

node *newnode(int d) 
{ 
    
 node *temp =  (node *)malloc(sizeof(node)); 
    temp->data=d; 
    temp->left = temp->right = NULL;
    temp->height=1;
    return temp; 
} 


int height ( node *n)
{
  if (n == NULL)
    return 0;
  return n->height;
}

int maxno (int a, int b)
{
  if (a > b)
    return a;
  else
    return b;
}

node* rotateright (node * y)
{
  node *x = y->left;
  node *t = x->right;
  x->right = y;
  y->left = t;
  x->height = (maxno (height (x->left), height (x->right)) + 1);
  y->height = (maxno (height (y->left), height (y->right)) + 1);
  return x;
}

node *rotateleft (node * y)
{
  node *x = y->right;
  node *t = x->left;
  x->left = y;
  y->right = t;
  x->height = maxno (height (x->left), height (x->right)) + 1;
  y->height = maxno (height (y->left), height (y->right)) + 1;

  return x;
}

int balancefactor (node * n)
{
  if (n == NULL)
    return 0;
  return height (n->left) - height (n->right);
}

node *insert (node *n, int data)
{
  if (n == NULL)
  {
      
  node*temp1= newnode(data);
 return temp1;
  }
   
  if (data < n->data)
    n->left = insert (n->left, data);
  else if (data > n->data)
    n->right = insert (n->right, data);
  else
    return n;


  n->height = 1 + maxno (height (n->left), height (n->right));


  int balance = balancefactor (n);

  if (balance > 1 && data < n->left->data)
    return rotateright (n);
  if (balance < -1 && data > n->right->data)
    return rotateleft (n);
  if (balance > 1 && data > n->left->data)
    {
      n->left = rotateleft (n->left);
      return rotateright (n);
    }
  if (balance < -1 && data < n->right->data)
    {
      n->right = rotateright (n->right);
      return rotateleft (n);
    }
  return n;
}

void preordertraversal (node *root)
{
  if(root!=NULL){ 
    printf("%d",root->data);
      preordertraversal (root->left);
      preordertraversal (root->right);
  }
}

void main()
{ int n; int i,j;
  printf("enter the number of elements to insert");
    scanf("%d",&n);
    printf("enter the elements");
    for(i=0;i<n;i++)
    {
        scanf("%d",&j);  
    root=insert(root,j);
        
    }
    printf("the avl tree is \n in preorder traversal \n");
    preordertraversal(root);
    
    
}
