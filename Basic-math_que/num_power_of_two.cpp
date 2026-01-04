 #include <iostream>
using namespace std;
int main()
{ int num=8;
 (num > 0 && (num & (num - 1)) == 0) ? cout<<"Yes" : cout<<"No";
} //logic for the 2 res to the power element