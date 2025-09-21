#include <iostream>
using namespace std;

int main() {
	
    int num, next, i;

    cout << "Enter a number: ";
    cin >> num;

    next = num + 1;

    while (true) {
        for (i = 2; i <= next / 2; i++) {
            if (next % i == 0)
                break;
        }

        if (i > next / 2) {
            cout << "Next prime number after " << num << " is " << next << endl;
            break;
        }

        next++;
    }

    return 0;
}

