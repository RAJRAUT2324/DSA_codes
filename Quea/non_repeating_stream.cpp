#include <unordered_map>
#include <deque>
class FirstNonRepeatingCharacterStream {
    unordered_map<char, int> freq;
    deque<char> dq;

public:
    void addChar(char ch) {
        freq[ch]++;
        dq.push_back(ch);

        // Remove repeating characters from front
        while (!dq.empty() && freq[dq.front()] > 1) {
            dq.pop_front();
        }
    }

    char getFirstNonRepeating() {
        if (dq.empty())
            return '_';
        return dq.front();
    }
};
541. First Non-Repeating Character in a Stream




Medium
0
You are tasked with designing a system that processes a continuous stream of characters. At any given point in the stream, your system must be able to efficiently identify and return the first character that has appeared only once so far. If all characters encountered up to that point have repeated, or if the stream is empty, your system should indicate that no such character exists (e.g., by returning a special placeholder character like _).

The system should expose a way to feed new characters into the stream and a way to query the current first non-repeating character.

Example 1:

Input stream: a b a c c d

Processing sequence and expected output:

Input: 'a': Current stream: a First non-repeating: a
Input: 'b': Current stream: a b First non-repeating: a
Input: 'a': Current stream: a b a First non-repeating: b (since 'a' has now repeated)
Input: 'c': Current stream: a b a c First non-repeating: b
Input: 'c': Current stream: a b a c c First non-repeating: b (since 'c' has now repeated)
Input: 'd': Current stream: a b a c c d First non-repeating: b
Example 2:

Input stream: m m s i s s i