#include<iostream>
using namespace std;

char Lc(char ch)
{
    char ans=ch-'A'+'a'; 
    cout<<"Ans ="<<ans;
}
char Uc(char ch)
{
    char ans=ch-'a'+'A'; 
    cout<<"Ans ="<<ans;
}
int main()
{

    Lc('A');//lower case
    cout<<endl;
    Uc('a');//upper case
    return 0;
}