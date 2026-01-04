string replaceCharacter(string s, char c1, char c2) {
   for(int i=0;i<s.length();i++)
   {
    if(s[i]==c1)
    {
        s[i]=c2;
    }
   }
   return s;
}
// Input:

// s = "hello"
// c1 = 'l'
// c2 = 'x'
// Output:

// hexxo