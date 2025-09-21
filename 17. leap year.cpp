#include <iostream>
using namespace std;
int main () {
	int startYear, endYear;
	
	cout << "Enter start year:";
	cin >> startYear;
	
	cout << "Enter end year:";
	cin >> endYear;
	
	cout << "Leap years between" << startYear << " and " << endYear << " are: " << endl;
	
	for(int year = startYear; year <= endYear; year++) {
		
		if((year % 400 == 0) || (year % 4 == 0 &&  year % 100 != 0)) {
			cout << year << " ";
		}
	}
	
	return 0;
}
