#include <iostream>
#include <map>
using namespace std;

int main() {
 map<int,string>mapping;
 mapping[1]="Raj";
  mapping[2]="Gajanan";
   mapping[3]="Raut";
for(auto  i:mapping)
{
  cout<<i.first;
}
cout<<endl;
cout<<"This is  value"<<endl;
for(auto  i:mapping)
{
  cout<<i.second;
}
cout<<endl;
cout<<"This is  iterator"<<endl;
map<int,string>::iterator it;
for(auto it=mapping.begin();it!=mapping.end();it++)
{
  cout<<it->second<<endl;
}
  return 0;
}