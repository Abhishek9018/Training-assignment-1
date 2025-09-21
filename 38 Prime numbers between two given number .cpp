#include <iostream>
using namespace std;

int main() {
	
    int start, end, i, j;

    cout << "Enter two numbers: ";
    cin >> start >> end;

    cout << "Prime numbers between " << start << " and " << end << " are: " << endl;


    for (i = start; i <= end; i++) {
        if (i < 2)
            i = 2; 


        for (j = 2; j <= i / 2; j++) {
            if (i % j == 0)
                break;
        }

        if (j > i / 2)
            cout << i << " ";
    }

    return 0;
}

