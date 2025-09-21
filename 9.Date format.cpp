#include <iostream>
using namespace std;

int main() {
    int d, m, y;
    char c;

    cout << "Enter date (DD/MM/YYYY): ";
    cin >> d >> c >> m >> c >> y;

    cout << "Day – " << d << ", Month – " << m << ", Year – " << y << endl;

    return 0;
}

