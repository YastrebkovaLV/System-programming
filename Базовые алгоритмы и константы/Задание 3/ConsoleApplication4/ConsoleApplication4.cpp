#include <iostream>
#include <vector>
#include "constants.h"

using namespace std;

double calculateHeight(double initialHeight, int seconds) {
    double height = initialHeight - (myConstants::GRAVITY * seconds * seconds) / 2;
    return height < 0 ? 0 : height;
}

int main() {
    double initialHeight;
    cout << "Enter the initial height of the tower in meters: " << endl;
    cin >> initialHeight;

    for (int seconds = 0; seconds <= 5; ++seconds) {
        double height = calculateHeight(initialHeight, seconds);
        if (height > 0) {
            cout << "At " << seconds << " seconds, the ball is at height: " << height << " meters" << endl;
        }
        else {
            cout << "At " << seconds << " seconds, the ball is on the ground." << endl;
        }
    }
    return 0;
}

