#include <iostream>

int main() {

    using namespace std;

    cout << "Enter a latitude in degrees, minutes, and seconds:" << endl;

    cout << "First, enter the degrees: ___\b\b\b";
    int degrees {};
    cin >> degrees;

    cout << "Next, enter the minutes of arc: ___\b\b\b";
    int minutes {};
    cin >> minutes;

    cout << "Finally, enter the seconds of arc: ___\b\b\b";
    int seconds {};
    cin >> seconds;

    const double secondsInMinute {60.0};
    const double minutesInDegree {60.0};

    cout.setf(ios_base::fixed, ios_base::floatfield);
    cout.precision(4);

    cout << degrees << " degrees, " << minutes << " minutes, " << seconds << " seconds = "
         << degrees + (minutes + seconds / secondsInMinute) / minutesInDegree;


    return 0;
}
