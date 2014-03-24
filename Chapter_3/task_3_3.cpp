#include <iostream>

int main() {

    using namespace std;

    cout << "Enter a latitude in degrees, minutes, and seconds:\n";

    cout << "First, enter the degrees: ___\b\b\b";
    int degrees {};
    cin >> degrees;

    cout << "Next, enter the minutes of arc: ___\b\b\b";
    int minutes {};
    cin >> minutes;

    cout << "Finally, enter the seconds of arc: ___\b\b\b";
    int seconds {};
    cin >> seconds;

    const double SecondsInMinute {60.0};
    const double MinutesInDegree {60.0};

    cout.setf(ios_base::fixed, ios_base::floatfield);
    cout.precision(4);

    cout << degrees << " degrees, " << minutes << " minutes, " << seconds << " seconds = "
         << degrees + (minutes + seconds / SecondsInMinute) / MinutesInDegree << endl;

    return 0;
}
