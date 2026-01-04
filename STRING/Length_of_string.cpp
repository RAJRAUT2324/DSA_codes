// int findStringLength(const string& input) {
//     return input.length();
// }

//this is the function which are most importatnt for the to find the character and the substring.
#include<iostream>
using namespace std;
int main()
{
    string name="Raj Gajanan Raut";
    int ch=name.find('G'); //if element not exiest it will return -1.
    string ans=name.substr(12,16);
    cout<<ch<<endl;
    cout<<ans;
    return 0;
}