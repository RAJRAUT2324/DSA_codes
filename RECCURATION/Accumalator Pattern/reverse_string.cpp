#include <iostream>
#include <string>

using namespace std;

// The function takes the current string and the 'box' (accumulator)
string reverseWithAccumulator(string s, string acc) {
    // BASE CASE: If the string is empty, we are done!
    // Return the 'box' we've been carrying.
    if (s.length() == 0) {
        return acc;
    }

    // RECURSIVE STEP:
    // 1. Take the first character: s[0]
    // 2. Put it at the BEGINNING of our accumulator box: s[0] + acc
    // 3. Send the rest of the string to the next function: s.substr(1)
    return reverseWithAccumulator(s.substr(1), s[0] + acc);
}

int main() {
    string word = "HELLO";
    // We start with an empty 'box' (accumulator)
    string result = reverseWithAccumulator(word, "");
    
    cout << "Original: " << word << endl;
    cout << "Reversed: " << result << endl;
    
    return 0;
}