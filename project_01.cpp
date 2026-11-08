
#include <iostream>
using namespace std;

int main()
{
    int choice;
    double value;

//    cout << "===== LENGTH UNIT CONVERTER =====" << endl;

    cout << "1. Kilometer (km)" << endl;
    cout << "2. Meter (m)" << endl;
    cout << "3. Centimeter (cm)" << endl;
    cout << "4. Millimeter (mm)" << endl;

    cout << "Enter your choice: ";
    cin >> choice;

    cout << "Enter the value: ";
    cin >> value;

    switch (choice)
    {
        case 1: // Kilometer
            cout << "Meters = " << value * 1000 << " m" << endl;
            cout << "Centimeters = " << value * 100000 << " cm" << endl;
            cout << "Millimeters = " << value * 1000000 << " mm" << endl;
            break;

        case 2: // Meter
            cout << "Kilometers = " << value / 1000 << " km" << endl;
            cout << "Centimeters = " << value * 100 << " cm" << endl;
            cout << "Millimeters = " << value * 1000 << " mm" << endl;
            break;

        case 3: // Centimeter
            cout << "Kilometers = " << value / 100000 << " km" << endl;
            cout << "Meters = " << value / 100 << " m" << endl;
            cout << "Millimeters = " << value * 10 << " mm" << endl;
            break;

        case 4: // Millimeter
            cout << "Kilometers = " << value / 1000000 << " km" << endl;
            cout << "Meters = " << value / 1000 << " m" << endl;
            cout << "Centimeters = " << value / 10 << " cm" << endl;
            break;

        default:
            cout << "Invalid choice!" << endl;
    }

    return 0;
}
