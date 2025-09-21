#include <iostream>
using namespace std;
int main () {
	int days;
	cout << "Enter a number(1-7):";
	cin >> days;
	
	if (days == 1) {
		cout << "Sunday" << endl;
	}
	
	else if (days == 2) {
		cout << "Monday" << endl;
	}
	
	else if (days == 3) {
		cout << "Tuesday" << endl;
	}
	
	else if (days == 4) {
		cout << "Wednesday" << endl;
	}
	
	else if (days == 5) {
		cout << "Thursday" << endl;
	}
	
	else if (days == 6) {
		cout << "Friday" << endl;
	}
	
	else if (days == 7) {
		cout << "Saturday" << endl;
	}
	
	else {
		cout << "Invalid day!" << endl;
	}
	
	return 0;
}
