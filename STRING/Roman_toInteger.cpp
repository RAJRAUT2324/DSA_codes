class Solution {
public:
    int romanToInt(string s) {
        int num=0;
        int i=s.size()-1; 
        while(i>=0)
        {
            if((i>=1 && s[i]=='V' && s[i-1]=='I') )
            {
                num+=4;
                i=i-2;
            }
            else if((i>=1 && s[i]=='X' && s[i-1]=='I'))
            {
                num+=9;
                i=i-2;
            }
            else if((i>=1 && s[i]=='L' && s[i-1]=='X'))
            {
                num+=40;
                i=i-2;
            }
            else if((i>=1 && s[i]=='C' && s[i-1]=='X'))
            {
                num+=90;
                i=i-2;
            }
            else if((i>=1 && s[i]=='D' && s[i-1]=='C'))
            {
                num+=400;
                i=i-2;
            }
            else if((i>=1 && s[i]=='M' && s[i-1]=='C'))
            {
                num+=900;
                i=i-2;
            }
            else if(s[i]=='I')
            {
                num+=1;
                i--;
            }
            else if(s[i]=='V')
            {
                num+=5;
                i--;
            }
            else if(s[i]=='X')
            {
                num+=10;
                i--;
            }
            else if(s[i]=='L')
            {
                num+=50;
                i--;
            }
            else if(s[i]=='C')
            {
                num+=100;
                i--;
            }
            else if(s[i]=='D')
            {
                num+=500;
                i--;
            }
            else if(s[i]=='M')
            {
                num+=1000;
                i--;
            }
        }
        return num;
    }
};