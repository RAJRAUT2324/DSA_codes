#include <iostream>
#include<map>
using namespace std;

int main() {
  string name="RajGajananRaut";
  map<char,int>mapping;
  for(auto it: name)
  {
    mapping[it]++;
  }
  for(auto a: mapping)
  {
    cout<<a.first<<"->"<<a.second<<endl;
  }
  return 0;
 
}
//G->1
// R->2
// a->5
// j->2
// n->2
// t->1
// u->1