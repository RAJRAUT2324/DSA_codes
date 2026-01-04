#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

//this class is for the syntax of the comparator

class comparator{
public:
bool operator()(int a,int b)
{
   return a>b;
}
};
int main()
{
  vector<int>arr;
  arr.push_back(10);
    arr.push_back(20);
      arr.push_back(30);
        arr.push_back(40);
          arr.push_back(50);
    sort(arr.begin(),arr.end(),comparator());

    //for each loop how to use syntax
          for(int a : arr )
          {
            cout<<a<<endl;
          }
          return 0;
}


