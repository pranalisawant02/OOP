#include <iostream>
#include <ctime>
#include <thread>   // For sleep_for
#include <chrono>   // For chrono literals

using namespace std;

void setAlarm(int alarmHour, int alarmMinute) {
    time_t currentTime;
    struct tm* currentTimeInfo;

    // Run the clock continuously
    while (true) {
        // Get the current system time
        time(&currentTime);
        currentTimeInfo = localtime(&currentTime);

        // Check if the current time matches the alarm time
        if (currentTimeInfo->tm_hour == alarmHour && currentTimeInfo->tm_min == alarmMinute) {
            // Trigger the alarm when times match
            cout << "\nALARM! Time to wake up!" << endl;
            break;  // Exit the loop after the alarm goes off
        }

        // Sleep for 60 seconds before checking again
        this_thread::sleep_for(chrono::seconds(60));
    }
}

int main() {
    int alarmHour, alarmMinute;

    // Ask the user to set the alarm time
    cout << "Set the alarm time:" << endl;
    cout << "Enter hour (0-23): ";
    cin >> alarmHour;
    cout << "Enter minute (0-59): ";
    cin >> alarmMinute;

    // Validate the time input
    if (alarmHour < 0 || alarmHour > 23 || alarmMinute < 0 || alarmMinute > 59) {
        cout << "Invalid time entered. Please try again." << endl;
        return 1;  // Exit the program if invalid input
    }

    // Confirm the alarm time
    cout << "Alarm set for " << alarmHour << ":" << (alarmMinute < 10 ? "0" : "") << alarmMinute << endl;

    // Call the setAlarm function to start checking for the alarm time
    setAlarm(alarmHour, alarmMinute);

    return 0;
}
