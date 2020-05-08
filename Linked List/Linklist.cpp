 #include<iostream>
 using namespace std;  
class Linklist
{
public:
    struct node   
    {  
        int data;  
        struct node *next;   
    };  
    struct node *head;  

private:
void beginsert_private()  
    {  
              struct node *ptr;  
        int item;  
        ptr = (struct node *) malloc(sizeof(struct node *));  
        if(ptr == NULL)  
        {  
           cout<<"\nOVERFLOW";  
        }  
        else  
        {  
            cout<<"\nEnter value\n";    
           cin>>item;    
            ptr->data = item;  
            ptr->next = head;  
            head = ptr;  
          cout<<"\nNode inserted";  
        }  
    
    }  

public:
    
   void beginsert(){
       beginsert_private();
   }
   
   void lastinsert()  
    {  
        struct node *ptr,*temp;  
        int item;     
        ptr = (struct node*)malloc(sizeof(struct node));      
        if(ptr == NULL)  
        {  
          cout<<"\nOVERFLOW";     
        }  
        else  
        {  
            cout<<"\nEnter value?\n";  
           cin>>item;  
            ptr->data = item;  
            if(head == NULL)  
            {  
                ptr -> next = NULL;  
                head = ptr;  
               cout<<"\nNode inserted";  
            }  
            else  
            {  
                temp = head;  
                while (temp -> next != NULL)  
                {  
                    temp = temp -> next;  
                }   
                temp->next = ptr;  
                ptr->next = NULL;  
               cout<<"\nNode inserted";  
              
            }  
        }  
    }  
    void randominsert()  
    {  
        int i,loc,item;   
        struct node *ptr, *temp;  
        ptr = (struct node *) malloc (sizeof(struct node));  
        if(ptr == NULL)  
        {  
            cout<<"\nOVERFLOW";  
        }  
        else  
        {  
            cout<<"\nEnter element value";  
            cin>>item;  
            ptr->data = item;  
           cout<<"\nEnter the location after which you want to insert";  
            cin>>loc;  
            temp=head;  
            for(i=0;i<loc;i++)  
            {  
                temp = temp->next;  
                if(temp == NULL)  
                {  
                    cout<<"\ncan't insert\n";  
                    return;  
                }  
              
            }  
            ptr ->next = temp ->next;   
            temp ->next = ptr;   
         cout<<"\nNode inserted";  
        }  
    }  
    void begin_delete()  
    {  
        struct node *ptr;  
        if(head == NULL)  
        {  
           cout<<"\nList is empty\n";  
        }  
        else   
        {  
            ptr = head;  
            head = ptr->next;  
            free(ptr);  
            cout<<"\nNode deleted from the begining ...\n";  
        }  
    }  
    void last_delete()  
    {  
        struct node *ptr,*ptr1;  
        if(head == NULL)  
        {  
            cout<<"\nlist is empty";  
        }  
        else if(head -> next == NULL)  
        {  
            head = NULL;  
            free(head);  
           cout<<"\nOnly node of the list deleted ...\n";  
        }  
              
        else  
        {  
            ptr = head;   
            while(ptr->next != NULL)  
            {  
                ptr1 = ptr;  
                ptr = ptr ->next;  
            }  
            ptr1->next = NULL;  
            free(ptr);  
           cout<<"\nDeleted Node from the last ...\n";  
        }     
    }  
    void random_delete()  
    {  
        struct node *ptr,*ptr1;  
        int loc,i;    
        cout<<"\n Enter the location of the node after which you want to perform deletion \n";  
        cin>>loc;  
        ptr=head;  
        for(i=0;i<loc;i++)  
        {  
            ptr1 = ptr;       
            ptr = ptr->next;  
                  
            if(ptr == NULL)  
            {  
              cout<<"\nCan't delete";  
                return;  
            }  
        }  
        ptr1 ->next = ptr ->next;  
        free(ptr);  
        cout<<"\nDeleted node : "<<loc+1;  
    }  
    void search()  
    {  
        struct node *ptr;  
        int item,i=0,flag;  
        ptr = head;   
        if(ptr == NULL)  
        {  
            cout<<"\nEmpty List\n";  
        }  
        else  
        {   
            cout<<"\nEnter item which you want to search?\n";   
           cin>>item;  
            while (ptr!=NULL)  
            {  
                if(ptr->data == item)  
                {  
                   cout<<"\nItem found at location :  "<<i+1;  
                    flag=0;  
                }   
                else  
                {  
                    flag=1;  
                }  
                i++;  
                ptr = ptr -> next;  
            }  
            if(flag==1)  
            {  
                cout<<"Item not found\n";  
            }  
        }     
              
    }  
      
    void display()  
    {  
        struct node *ptr;  
        ptr = head;   
        if(ptr == NULL)  
        {  
            cout<<"Nothing to print";  
        }  
        else  
        {  
            cout<<"\nPrinting values . . . . .\n";   
            while (ptr!=NULL)  
            {  
                cout<<ptr->data;  
                ptr = ptr -> next;  
            }  
        }  
    } 
};

int main()  
    {  
        Linklist l;
        int choice =0;  
            cout<<"\n\t\t\t=========================================================================";
            cout<<"\n\t\t\t\t\t\t\tLinked List";  
            cout<<"\n\t\t\t=========================================================================\n";
        while(choice != 9)   
        {  
            cout<<"\nChoose one option from the following list ...\n";  
            cout<<"\n1.Insert in begining\n2.Insert at last\n3.Insert at any random location\n4.Delete from Beginning\n  5.Delete from last\n6.Delete node after specified location\n7.Search for an element\n8.Show\n9.Exit\n";  
            cout<<"\nEnter your choice?\n";         
            cin>>choice;  
            switch(choice)  
            {  
                case 1:  
                l.beginsert();      
                break;  
                case 2:  
                l.lastinsert();         
                break;  
                case 3:  
                l.randominsert();       
                break;  
                case 4:  
                l.begin_delete();       
                case 5:  
                l.last_delete();        
                break;  
                case 6:
                l.random_delete();          
                break;  
                case 7:
                l.search();  
                break; 
                case 8:  
                l.display();        
                break;  
                case 9:  
                exit(0);  
                break;  
                default:  
                cout<<"Please enter valid choice..";  
            }  
        }  
        return 0;
    }  
      