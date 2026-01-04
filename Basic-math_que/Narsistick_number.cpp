class Solution {
public:
  string isNarcissistic(int num) {
        // Implement logic to check if num is Narcissistic
        int temp=num;
        int digit=0;
       while(temp>0)
        {
        temp=temp/10;
        digit++;
        }

        temp=num;
        int sum=0;
        int num2;
        while(temp>0)
        {
            num2=temp%10;
            sum=sum+pow(num2,digit);
            temp=temp/10;
        }
        return (num==sum?"Yes":"No");
    }
};
// For example, consider the number 153. It has 3 digits, and the sum of its digits raised to the power of 3 is:

// [ 1^3 + 5^3 + 3^3 = 1 + 125 + 27 = 153 ]