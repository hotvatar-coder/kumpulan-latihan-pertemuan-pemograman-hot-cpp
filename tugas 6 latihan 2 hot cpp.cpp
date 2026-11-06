// C++ program to determine pass or fail and grade using nested if else
#include <iostream>
using namespace std;

int main()
{
    // declaring the score
    int nilai;

    // take input from users
    cout << "Enter your score (0-100): ";
    cin >> nilai;

    // outermost if else
    if (nilai >= 0 && nilai <= 100) {

        // nested if else
        if (nilai >= 60) {
            cout << "You passed the exam." << endl;

            // second nested if else
            if (nilai >= 80) {
                cout << "Grade A";
            }
            else {
                cout << "Grade B";
            }
        }
        else {
            cout << "You failed the exam." << endl;

            // third nested if else
            if (nilai >= 40) {
                cout << "Grade C";
            }
            else {
                cout << "Grade D";
            }
        }
    }
    else {
        cout << "Score must be between 0 and 100";
    }
    return 0;
}
