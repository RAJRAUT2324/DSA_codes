#include<iostream>
#include<stack>
using namespace std;
class Stack
{
    public:
    int *arr;
    int top;
    int size;
    Stack(int capacity)
    {
        arr=new int[capacity];
        size=capacity;
        top=-1;
    }
    //all functions having o(1) time complexity
    void push(int value)
    {
        if(top==size-1)
        {
            cout<<"overflow"<<endl;
        }
        else{
            top++;
            arr[top]=value;
        }
    }
    void pop()
    {
        if(top==-1)
        {
            cout<<"underflow"<<endl;
        }
        else{
            top--;
        }
    }
    int getSize()
    {
        if(top==-1)
        {
            cout<<"array is empty"<<endl;
            return -1;
        }
        else{
        return top+1;
        }
    }
    int getTop()
    {
        if(top==-1)
        {
            cout<<"Stack is empty"<<endl;
            return -1;
        }
        else
        {
            return arr[top];
        }
    }
};
int main()
{
    Stack s(100);
    s.push(10);
    s.push(20);
    s.push(30);
    cout<<s.getTop()<<endl;
    s.pop();
    cout<<s.getTop()<<endl;
    cout<<s.getSize()<<endl;


    // stack<int>s;
    // s.push(10);
    // s.push(20);
    // s.push(30);
    // cout<<s.size()<<endl;
    // cout<<s.top()<<endl;
    // s.pop();
    // cout<<s.top()<<endl;
    // if(s.empty())
    // {
    //     cout<<"stack is empty"<<endl;
    // }
    // else
    // {
    //     cout<<"stack is not empty"<<endl;
    // }
  return 0;
}
