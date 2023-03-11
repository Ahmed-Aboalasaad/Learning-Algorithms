#include <iostream>

using namespace std;

int main()
{
    int base, height, area;

    cout << "Base: ";
    cin >> base;
    cout << "Height: ";
    cin >> height;

    area = base * height;

    cout << "\nArea = base x height = " << base << " x " << height
        << " = " << area << endl;

    return (0);
}
