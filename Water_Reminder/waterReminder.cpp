#include <iostream>
using namespace std;

int main() {
    int glasses, goal = 8;

    cout << "Enter how many glasses of water you drank today: ";
    cin >> glasses;

    cout << "\n--- Water Intake Report ---\n";

    if (glasses >= goal) {
        cout << "Great job! You reached your daily goal.\n";
        cout << "You drank " << glasses << " glasses of water today!";
    } 
    else {
        int remaining = goal - glasses;
        cout << "You drank " << glasses << " glasses today.\n";
        cout << "You still need " << remaining << " more glasses to reach your goal.\n";

        if (remaining >= 4)
            cout << "Try to keep a water bottle with you!\n";
        else if (remaining >= 2)
            cout << "Almost there, drink a little more!\n";
        else
            cout << "Just a little more to complete your goal!\n";
    }

    return 0;
}