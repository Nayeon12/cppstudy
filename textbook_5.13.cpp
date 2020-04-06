#include <iostream>
using namespace std;

int main() {
	const int SECONDS_PER_MINUTE = 60,
		SECONDS_PER_HOUR = 60 * SECONDS_PER_MINUTE;
	int hours, minutes, seconds;
	cout << "Please enter the number of seconds : ";
	cin >> seconds;

	hours = seconds / SECONDS_PER_HOUR;
	seconds = seconds % SECONDS_PER_HOUR;
	minutes = seconds / SECONDS_PER_MINUTE;
	seconds = seconds % SECONDS_PER_MINUTE;
	
	if (hours > 0) {
		cout << hours;
		if (hours == 1)
			cout << " hour ";
		else
			cout << " hours ";
	}

	if (minutes > 0) {
		cout << minutes;
		if (minutes == 1)
			cout << " minute ";
		else
			cout << " minutes";
	}
	
	if (seconds > 0) {
		cout << seconds;
		if (seconds == 1)
			cout << " second";
		else
			cout << " seconds";
	}

	return 0;
}