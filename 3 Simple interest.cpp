#include <iostream>
using namespace std;

int main() {
    double length, width, height, volume;

    // Input dimensions of the cuboid
    cout << "Enter length of the cuboid: ";
    cin >> length;

    cout << "Enter width of the cuboid: ";
    cin >> width;

    cout << "Enter height of the cuboid: ";
    cin >> height;

    // Calculate volume
    volume = length * width * height;

    // Display result
    cout << "The volume of the cuboid is: " << volume << endl;

    return 0;
}

