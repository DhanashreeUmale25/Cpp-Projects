#include<iostream>
using namespace std;
  
class BinaryTree
 {
 public:
 struct node  
 {  
    int data;  
    struct node *left;   
    struct node *right;   
 };

 struct node *root = NULL;
     
 public:  
 void insert()  
 {  
    struct node *ptr, *parentptr , *nodeptr;  
    ptr = (struct node *) malloc(sizeof (struct node));  
    int item;
    if(ptr == NULL)  
    {  
        cout<<"can't insert";  
    }  
    else   
    { 
    cout<<"\nEnter the item which you want to insert?\n";  
    cin>>item; 
    ptr -> data = item;  
    ptr -> left = NULL;  
    ptr -> right = NULL;   
    if(root == NULL)  
    {  
        root = ptr;  
        root -> left = NULL;  
        root -> right = NULL;  
    }  
    else   
    {  
        parentptr = NULL;  
        nodeptr = root;   
        while(nodeptr != NULL)  
        {  
            parentptr = nodeptr;   
            if(item < nodeptr->data)  
            {  
                nodeptr = nodeptr -> left;   
            }   
            else   
            {  
                nodeptr = nodeptr -> right;  
            }  
        }  
        if(item < parentptr -> data)  
        {  
            parentptr -> left = ptr;   
        }  
        else   
        {  
            parentptr -> right = ptr;   
        }  
    }  
    cout<<"Node Inserted";  
    }  
   }
void preorder(struct node *ptr)
  {
  if(ptr!=NULL)
  {
   cin>>ptr->data;
    preorder(ptr->left);
    preorder(ptr->right);
  }
  }
void inorder(struct node *ptr)
{
  if(ptr!=NULL)
  {
    inorder(ptr->left);
    cin>>ptr->data;
    inorder(ptr->right);
  }
}
void postorder(struct node *ptr)
{
  if(ptr!=NULL)
  {
    postorder(ptr->left);
    postorder(ptr->right);
    cin>>ptr->data;
  }
}
};
 
int main ()  
{  
    BinaryTree b;
    
    int choice =0;  
           cout<<"\n\t\t\t=========================================================================";
           cout<<"\n\t\t\t\t\t\t\tBinary Tree Opretions";  
            cout<<"\n\t\t\t=========================================================================\n";
           // root=insert();
        while(choice != 5)   
        {  
           cout<<"\nChoose one option from the following list ...\n";  
           cout<<"\n1.Insert Node\n2.Inorder\n3.Preorder\n4.Postorder\n5.Exit\n";  
            cout<<"\nEnter your choice?\n";         
            cin>>choice;  
            switch(choice)  
            {  
                case 1:  
                b.insert(); 
                break;  
                case 2:  
                cout<<"\nThe inorder traversal of tree is: ";
                b.inorder(b.root);
                break;  
                case 3:
                cout<<"\nThe preorder traversal of tree is: ";
                b.preorder(b.root);
                break;  
                case 4:  
                cout<<"\nThe postorder traversal of tree is: ";
                b.postorder(b.root);
                break;  
                case 5:  
                exit(0);  
                break;  
                default:  
                cout<<"Please enter valid choice..";  
            }  
        }  
        return 0;
}  
