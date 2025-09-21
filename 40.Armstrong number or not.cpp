#include <iostream>
using namespace std;

int main() {
	
    int num, sum = 0, temp;

    cout << "Enter a 3-digit number: ";
    cin >> num;

    temp = num;

    while (temp > 0) {
        int digit = temp % 10;
        sum = sum + digit * digit * digit;
        temp = temp / 10;
    }

    if (sum == num)
        cout << num << " is an Armstrong number." << endl;
    else
        cout << num << " is NOT an Armstrong number." << endl;

    return 0;
}

