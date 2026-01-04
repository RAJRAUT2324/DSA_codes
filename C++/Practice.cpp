        // practicle number one //

// #include <iostream>
// #include <vector>
// using namespace std;

// int main() {
//     //additon of element
// 	vector<int>arr ;
// 	arr.push_back(1);
// 	arr.push_back(4);
// 	arr.push_back(5);
// 	arr.push_back(6);
// 	arr.push_back(2);
//     arr.push_back(0);
// 	int n=arr.size()-1;
// 	int loc=2;
// 	int element=50;
// 	for(int i=n;i>loc;i--)
// 	{
// 	    arr[n]=arr[n-1];
// 	}
// 	arr[loc]=element;
// 	n=n+1;
// 	for(int i=0;i<arr.size();i++)
// 	{
// 	    cout<<arr[i]<<" ";
// 	}
//     //deletion of element
//     cout<<endl;
//     int dloc=3;
//     for(int i=dloc-1;i<arr.size()-1;i++)
//     {
//         arr[i]=arr[i+1];
//     }
//     arr.pop_back();
//     for(int i=0;i<arr.size();i++)
// 	{
// 	    cout<<arr[i]<<" ";
// 	}
    
// 	return 0;
// }


     // practicle number two //


// #include <iostream>
// #include <vector>
// using namespace std;

// int main() 
// {
//     vector<int> arr = {1, 4, 5, 6, 2};

//     int key = 5;
//     bool ans = false;
//     int ansloc = -1;

//     // Linear Search
//     for(int i = 0; i < (int)arr.size(); i++)
//     {
//         if(arr[i] == key)
//         {
//             ans = true;
//             ansloc = i;
//             break;
//         }
//     }

//     if(ans)
//         cout << "Linear Search: Found at index: " << ansloc << endl;
//     else
//         cout << "Linear Search: Not found" << endl;

//     // Sorted array for binary search
//     vector<int> arr1 = {1, 2, 3, 4, 5};

//     int start = 0;
//     int last = arr1.size() - 1;
//     int value = -1;

//     while(start <= last)
//     {
//         int mid = (start + last) / 2;

//         if(arr1[mid] == key)
//         {
//             value = mid;
//             break;
//         }
//         else if(arr1[mid] < key)
//         {
//             start = mid + 1;
//         }
//         else
//         {
//             last = mid - 1;
//         }
//     }

//     if(value != -1)
//         cout << "Binary Search: Found at index: " << value << endl;
//     else
//         cout << "Binary Search: Not found" << endl;

//     return 0;
// }


        // practicle number three //


// #include <iostream>
// #include <vector>
// using namespace std;
// class Node
// {
// public: int data;
// Node* next;
// Node(int data)
// {
//     this->data=data;
//     next=nullptr;
// }
// };
// int main()
// {
//     Node* arr=new Node(-1);
//     Node* tail=arr;
//     int i=0;
//     while(i<=3)
//     {
//     Node* newnode=new Node(i);
//     tail->next=newnode;
//     tail=newnode;
//     i++;
//     }
//  Node* temp=arr;
//  while(temp!=nullptr)
//  {
//     cout<<temp->data<<endl;
//     temp=temp->next;
//  }
// return 0;
// }


//practicle number 4 stack insert element in stack

// #include <iostream>
// using namespace std;
// int main()
// {
// int stack[5];
// int value;
// int top=-1;
// while(top!=4)
// {
//          cout<<"enter value to insert in stack"<<endl;
//          cin>>value;
//         if(top<4)
// {
//         top++;
//         stack[top]=value;
// }

// }

// for(int i=top;i>=0;i--)
// {
//         cout<<"Stack element "<<i<<" "<<stack[i]<<endl;

// }
// return 0;
// }


// Practicle number 5 quea


// #include <iostream>
// using namespace std;
// int main()
// {
//         int quea[5],value,rare=-1,front=-1;
//         while(rare!=4)
//         {
//         cout<<"enter element in the quea"<<endl;
//         cin>>value;
//                 if(rare==4)
//         {
//                 cout<<"Overflow and exit";
//                 break;
//         }
//         else if(front==-1 && rare==-1)
//         {
//          front++;
//          rare=rare+1;
//          quea[rare]=value;
//         }
//         else
//         {
//                 rare=rare+1;
//                 quea[rare]=value;
//         }
//         }
        
//         for(int i=front;i<=rare;i++)
//         {
//                 cout<<quea[i]<<endl;
//         }
//         return 0;

// }

//practicle number 6 factorial of a number //fibbonacci

// #include <iostream>
// using namespace std;
// int fact(int value)
// {
//         //base case
//         if(value==1 || value==0)
//         {
//                 return 1;
//         }
//         return value*fact(value-1);
// }
// int fibbnacci(int value)
// {
//         //base case 
//         if(value==0 || value==1)
//         {
//                 return value;
//         }
//         return fibbnacci(value-1)+fibbnacci(value-1);
// }
// int main()
// {
//         cout<<fact(5)<<endl;
//         cout<<"Fibbonacci series"<<endl;
//         cout<<fibbnacci(5)<<endl;
//         return 0;
// }


//practicle no 7 and 8 of creating and travarsing tree data structure


// #include <iostream>
// using namespace std;
// struct Node
// {
//         int data;
//         Node* left;
//         Node* right;

// };
// Node* createNode(int value)
// {
//         Node* newnode=new Node();
//         newnode->data=value;
//         newnode->left=NULL;
//         newnode->right=NULL;
//         return newnode;

// }
// void preorder(Node* root)
// {
//         if(root==NULL)
//         {
//                 return;
//         }
//         else
//         {
//       cout<<root->data<<endl;
//       preorder(root->left);
//       preorder(root->right);
//         }
// }
// int main()
// {
//         Node* root=createNode(10);
//         root->left=createNode(20);
//         root->right=createNode(30);
//         cout<<"Preorder Traversal :"<<endl;
//         preorder(root);
//         return 0;
// }


// Prcaticle number 9 & 10 //
// #include <iostream>
// using namespace std;
// int graph[3][3]={
//         {0,1,1},
//         {1,0,0},
//         {1,0,0}
// };
// bool visited[3];
// void DFS(int node)
// {
//         visited[node]=true;
//         cout<<node<<" ";
//         for(int i=0;i<3;i++)
//         {
//                 if(graph[node][i]==1 && !visited[i])
//                 {
//                         DFS(i);
//                 }
//         }
// }
// int main()
// {
//         cout<<"DFS : ";
//         DFS(0);
//         return 0;
// }