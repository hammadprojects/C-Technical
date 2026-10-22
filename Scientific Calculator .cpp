#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int choice;
    double x;

    cout << "1. Square\n";
    cout << "2. Square Root\n";
    cout << "3. Power\n";
    cout << "4. Sin\n";
    cout << "5. Cos\n";
    cout << "6. Log\n";

    cout << "Enter your choice: ";
    cin >> choice;

    cout << "Enter number: ";
    cin >> x;

    switch(choice) {
        case 1:
            cout << "Square = " << x * x;
            break;
        case 2:
            cout << "Square Root = " << sqrt(x);
            break;
        case 3: {
            double y;
            cout << "Enter power: ";
            cin >> y;
            cout << "Result = " << pow(x, y);
            break;
        }
        case 4:
            cout << "Sin = " << sin(x);
            break;
        case 5:
            cout << "Cos = " << cos(x);
            break;
        case 6:
            cout << "Log = " << log(x);
            break;
        default:
            cout << "Invalid choice";
    }

    return 0;
}