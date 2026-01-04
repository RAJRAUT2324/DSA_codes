class Solution {
public:
    int twosComplement(int num) {
       int newNumm=~num;
        int ans=newNumm+1;
        return ans;
    }
};
// Find 2’s Complement of a Number
// Write a program to determine the 2's complement of an integer num. The 2’s complement of a binary number is the standard way of representing negative numbers in binary systems. To find the 2's complement:

// Invert all the bits of the number.
// Add 1 to the least significant bit (LSB) of the inverted binary number.
// This operation results in the negative binary representation of the number.

// Example
// Example 1:
// Input:


// num = 5
// Output:


// -5