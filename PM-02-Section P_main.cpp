#include <iostream>
using namespace std;

class Score {
public:
    int points;

    Score(int p) { points = p; }

    // Teaching what + means for Score
    Score operator+(Score other) {
        return Score(points + other.points);
    }
};

int main() {
    Score s1(10);
    Score s2(20);

    Score s3 = s1 + s2;  // Now this works!

    cout << s3.points;   // Prints: 30

    return 0;
}
