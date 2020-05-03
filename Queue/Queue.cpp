#include<iostream>
using namespace std;
#define maxsize 5
class Queue
{ 
    private:
    int front = -1, rear = -1;  
    int queue[maxsize];
    
    public:
    
    Queue()    //Constructor
    {
        cout<<"\n\tQueue is Empty........."<<endl;
    }
    void insert()  
    {  
        int item;  
        cout<<"\nEnter the element: ";  
        cin>>item;      
        if(rear == maxsize-1)  
        {  
            cout<<"\n\aOVERFLOW\n";  
            return;  
        }  
        if(front == -1 && rear == -1)  
        {  
            front = 0;  
            rear = 0;  
        }  
        else   
        {  
            rear = rear+1;  
        }  
        queue[rear] = item;  
        cout<<"\n\aValue inserted...................... \n";  
          
    }  
    
    void delete1()  
    {  
        int item;   
        if (front == -1 || front > rear)  
        {  
            cout<<"\n\aUNDERFLOW\n";  
            return;  
                  
        }  
        else  
        {  
            item = queue[front];  
            if(front == rear)  
            {  
                front = -1;  
                rear = -1 ;  
            }  
            else   
            {  
                front = front + 1;  
            }  
            cout<<"\n\avalue deleted........................... "<<endl;  
        }  
          
          
    }  
          
    void display()  
    {  
        int i;  
        if(rear == -1)  
        {  
            cout<<"\n\aEmpty queue\n";  
        }  
        else  
        {   cout<<"\nQueue elements.....\n";  
            for(i=front;i<=rear;i++)  
            {  
                cout<<" "<<queue[i];  
            }     
        }  
    }
};

    int main ()  
    {  
            cout<<"\n\t\t\t=================================================================\n";
            cout<<"\t\t\t*************************Queue Operations************************\n";  
            cout<<"\t\t\t=================================================================\n";  
        Queue q;
        int choice;
        
            
        while(choice != 4)   
        {   
              
            cout<<"\n1.Insert an element\n2.Delete an element\n3.Display the queue\n4.Exit\n";  
            cout<<"\nEnter your choice : ";  
            cin>>choice;  
            switch(choice)  
            {  
                case 1:  
                q.insert();  
                break;  
                case 2:  
                q.delete1();  
                break;  
                case 3:  
                q.display();  
                break;  
                case 4:  
                exit(0);  
                break;  
                default:   
                cout<<"\nEnter valid choice??\n";  
            }  
        }  
       return 0;
    }  