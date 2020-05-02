#include<iostream>
using namespace std;
class Stack
{
public:
int top=0, n, stack[100], i, j;

public:
 
Stack() {
        cout<<"Stack is Empty"<<endl;

        }
        
void push ()  
    {  
        int val;      
        if (top == n )   
        cout<<"\n\aOverflow\n"<<endl;   
        else   
        {  
            cout<<" Enter the value:";  
            cin>>val;         
            top = top +1;   
            stack[top] = val;   
        }   
    }   
      
    void pop ()   
    {   
        if(top == 0)   
        cout<<"\aUnderflow\n";  
        else  
        top = top -1;   
    }   
    void show()  
    {  
        for (i=top;i>0;i--)  
        {  
            cout<<"Elements in Stack:"<<stack[i]<<endl;  
        }  
        if(top == 0)   
        {  
            cout<<"Stack is empty\n"<<endl;  
        }  
    }

    void setn(int nval){
        n=nval;
        
    }
};


 int main ()
    {  
       Stack s;
       int choice, n1;
          
        cout<<"Enter the number of elements in the stack : ";   
        cin>>n1;  
        s.setn(n1);
        cout<<"*********Stack operations using array*********"<<endl;  
      
    cout<<"\n----------------------------------------------\n";  
        while(choice != 4)  
        {  
            cout<<"\nChose one from the below options...\n";  
            cout<<"\n1.Push\n2.Pop\n3.Show\n4.Exit";  
            cout<<"\n Enter your choice : ";        
            cin>>choice;  
            switch(choice)  
            {  
                case 1:  
                {   
                    s.push();  
                    break;  
                }  
                case 2:  
                {  
                    s.pop();  
                    break;  
                }  
                case 3:  
                {  
                    s.show();  
                    break;  
                }  
                case 4:   
                {  
                    cout<<"Exiting....";  
                    break;   
                }  
                default:  
                {  
                    cout<<"Please Enter valid choice ";  
                }   
            };  
        }  
    }   
      
