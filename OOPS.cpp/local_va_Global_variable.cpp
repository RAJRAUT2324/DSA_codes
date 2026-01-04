#include <iostream>
using namespace std;
int x=10;
int main()
{
    int x=5;
    cout<<"X of local "<<x<<endl;
    cout<<"X of local "<<::x<<endl;

    ::x=20;
     cout<<"X of local "<<::x<<endl;
    return 0;
}