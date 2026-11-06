// C++ program to display the name of the day using switch
#include <iostream>
using namespace std;

// Driver Code
int main()
{
    // switch variable
    int hari;

    // take input from users
    cout << "Enter the day number (1-7): ";
    cin >> hari;

    // switch statements
    switch (hari) {
        case 1:
            cout << "MONDAY";
            break;
        case 2:
            cout << "TEUSDAY";
            break;
        case 3:
            cout << "WEDNESDAY";
            break;
        case 4:
            cout << "THURSDAY";
            break;
        case 5:
            cout << "FRIDAY";
            break;
        case 6:
            cout << "SATURDAY";
            break;
        case 7:
            cout << "SUNDAY";
            break;
        default:
            cout << "Number other than 1 to 7";
            break;
    }
    return 0;
}
