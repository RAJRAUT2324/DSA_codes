class Solution {
public:
void solve(string& s, string& part)
{
   int found=s.find(part);
   if(found!=string::npos)
   {
    string l=s.substr(0,found);
    string r=s.substr(found+part.size(),s.size());
    s=l+r;
    solve(s,part);
   }
   else
   {
    return;
   }
}
    string removeOccurrences(string s, string part) {
    solve(s,part);
    return s;
    }
};