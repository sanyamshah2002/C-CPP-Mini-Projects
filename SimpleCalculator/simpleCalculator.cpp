#include <iostream>
using namespace std;

int main()
{
    int choice;
    float a, b;

    do
    {
        cout << "\n===== SIMPLE CALCULATOR =====\n";
        cout << "1. Addition\n";
        cout << "2. Subtraction\n";
        cout << "3. Multiplication\n";
        cout << "4. Division\n";
        cout << "5. Modulus\n";
        cout << "6. Exit\n";

        cout << "\nEnter your choice: ";
        cin >> choice;

        if (choice >= 1 && choice <= 5)
        {
            cout << "Enter two numbers: ";
            cin >> a >> b;
        }

        switch (choice)
        {
            case 1:
                cout << "Result: " << a + b << endl;
                break;

            case 2:
                cout << "Result: " << a - b << endl;
                break;

            case 3:
                cout << "Result: " << a * b << endl;
                break;

            case 4:
                if (b != 0)
                    cout << "Result: " << a / b << endl;
                else
                    cout << "Cannot divide by zero!" << endl;
                break;

            case 5:
                cout << "Result: " << (int)a % (int)b << endl;
                break;

            case 6:
                cout << "Exiting calculator..." << endl;
                break;

            default:
                cout << "Invalid choice!" << endl;
        }

    } while (choice != 6);

    return 0;
}