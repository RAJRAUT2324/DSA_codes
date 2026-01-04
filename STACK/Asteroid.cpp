class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        vector<int> st;

        for (int a : asteroids) {
            bool destroyed = false;

            // Collision only when last is +ve and current is -ve
            while (!st.empty() && a < 0 && st.back() > 0) {
                if (abs(a) > st.back()) {
                    st.pop_back();      // left asteroid destroyed
                }
                else if (abs(a) == st.back()) {
                    st.pop_back();      // both destroyed
                    destroyed = true;
                    break;
                }
                else {
                    destroyed = true;   // current destroyed
                    break;
                }
            }

            if (!destroyed) {
                st.push_back(a);
            }
        }

        return st;
    }
};
um
Topics
premium lock icon
Companies
Hint
We are given an array asteroids of integers representing asteroids in a row. The indices of the asteroid in the array represent their relative position in space.

For each asteroid, the absolute value represents its size, and the sign represents its direction (positive meaning right, negative meaning left). Each asteroid moves at the same speed.

Find out the state of the asteroids after all collisions. If two asteroids meet, the smaller one will explode. If both are the same size, both will explode. Two asteroids moving in the same direction will never meet.

 

Example 1:

Input: asteroids = [5,10,-5]
Output: [5,10]
Explanation: The 10 and -5 collide resulting in 10. The 5 and 10 never collide.
Example 2:

Input: asteroids = [8,-8]
Output: []
Explanation: The 8 and -8 collide exploding each other.