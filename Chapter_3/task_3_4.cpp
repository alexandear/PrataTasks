#include <iostream>

int main() {

    using namespace std;

    cout << "Enter the number of seconds: ";
    long long inputSeconds{};
    cin >> inputSeconds;

    const int SecondsInMinute {60};
    const int MinutesInHour {60};
    const int HoursInDay {24};

    long long days {inputSeconds / HoursInDay / MinutesInHour / SecondsInMinute};
    long long hours {(inputSeconds / MinutesInHour / SecondsInMinute) % HoursInDay};
    long long minutes {(inputSeconds / SecondsInMinute) % MinutesInHour};
    long long seconds {inputSeconds % SecondsInMinute};

    cout << inputSeconds << " seconds = " << days << " days, " << hours << " hours, "
         << minutes << " minutes, " << seconds << " seconds";

    return 0;
}
