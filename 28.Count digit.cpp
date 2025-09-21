#include <iostream>
using namespace std;

int main() {
    int num;
    int count = 0;

    cout << "Enter a number: ";
    cin >> num;

    if (num == 0) {
        count = 1;
    } else {
        
        if (num < 0) {
            num = -num;
        }

        
        while (num > 0) {
            num = num / 10;  
            count++;         
        }
    }

    cout << "Number of digits: " << count << endl;

    return 0;
}

