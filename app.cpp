#include <iostream>
#include <cmath>
#include <math.h>


using namespace std;

int main() {
    // Prepare the variables
    float seconds, minutes, hours;

    // Get the input from user.
    cout << "Enter Seconds: ";
    cin >> seconds;

    // #include<math.h> library methods
    // round(5.7) = 6
    // floor(5.9) = 5
    // ceil(5.2) = 6

    // Get the minutes and remove the fractions
    //                130   / 60 = 2.xxx
    minutes = floor(seconds / 60);


    // Remove the minutes from seconds.
    //         130    - (60 *     2  ) = 10
    seconds = seconds - (60 * minutes);

    // Get the hours and remove the fractions
    //              2     / 60 = 0.03
    //      floor(0.03) = 0
    hours = floor(minutes / 60);

    //          2     - (60 *   0  ) = 2
    minutes = minutes - (60 * hours);

    // Print the results
    cout << endl << "Hours: " << hours << endl;
    cout << "Minutes: " << minutes << endl;
    cout << "Seconds: " << seconds << endl;

    // End the program.
    return 0;
}