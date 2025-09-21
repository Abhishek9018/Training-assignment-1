#include <iostream>
using namespace std;
int main () {
	int a, b, c;
	cout << "Enter three number:";
	cin >> a >> b >> c;
	
	int middle;
	
	if ((a>=c && a<=c) || (a<=c && a>=c)) {
		middle = a;
	}
	
	else if ((b>=a && b<=a) || (b<=a && b>=a)) {
		middle = b;
	}
	
	else {
		middle =c;
	}
	
	cout << " The middle (second largest) number is: " << middle << endl;
	
	return 0;
	
}
	
	
