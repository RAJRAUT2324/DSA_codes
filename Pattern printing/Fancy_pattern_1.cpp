class Solution {
public:
    void printPattern(int N, char C) {

        int count = N;

        // upper inverted pyramid
        for (int i = 1; i <= (N / 2) + 1; i++) {

            // leading spaces
            for (int j = 1; j <= i - 1; j++) {
                cout << " ";
            }

            // characters
            for (int j = count; j >= 1; j--) {
                cout << C;
            }

            count -= 2;
            cout << endl;
        }

        // lower pyramid
        int inm = 3;   // start from 3 to avoid repeating middle line

        for (int i = 1; i <= N / 2; i++) {

            // leading spaces
            for (int j = 1; j <= (N / 2) - i; j++) {
                cout << " ";
            }

            // characters
            for (int j = 1; j <= inm; j++) {
                cout << C;
            }

            inm += 2;
            cout << endl;
        }
    }
};
