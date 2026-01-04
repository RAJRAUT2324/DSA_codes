// gcd==hcf
// lcm*hcf=a*b;
class Solution {
public:
           int findGCD(int a, int b) {
        // Implement logic to find GCD of a and b
        while(a!=b){
        if(a>b)
        {
            a=a-b;
        }
        else
        {
           b=b-a;
        }
       
        }
         return a;
        
    }
    int findLCM(int a, int b) {
        // Implement logic to find LCM of a and b

    int gcd=findGCD(a,b);
    int ans=(a*b)/gcd;
        
    }
};