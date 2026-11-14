#include <iostream>

using namespace std;

double knotsToKmh(double kn)
{
    return kn * 1.852;
}

double kmhToKnots(double v)
{
    return v / 1.852;
}

int main()
{
    int choice;
    double speed;

    do
    {
        cout << "Pi52 KALKULATOR 75!!!";
        cout << "\nHello my teacher\n";
        cout << "Sir\n";
        cout << "\n=== Variant 75: Speed converter ===\n";
        cout << "1. Knots -> km/h\n";
        cout << "2. Km/h -> knots\n";
        cout << "0. Exit\n";
        cout << "Choose an option: ";

        cin >> choice;

        if (!cin)
        {
            cout << "Error: please enter a number!\n";
            return 1;
        }

        switch (choice)
        {
            case 1:
                cout << "Enter speed in knots: ";
                cin >> speed;

                if (!cin)
                {
                    cout << "Sir\n";
                    cout << "Error: please enter a number.\n";
                    return 1;
                }

                if (speed < 0)
                {
                    cout << "Speed cannot be negative.\n";
                }
                else
                {
                    cout << "Result: "
                         << knotsToKmh(speed)
                         << " km/h\n";
                }

                break;

            case 2:
                cout << "Enter speed in km/h: ";
                cin >> speed;

                if (!cin)
                {
                    cout << "Error: please enter a number.\n";
                    return 1;
                }

                if (speed < 0)
                {
                    cout << "Speed cannot be negative.\n";
                }
                else
                {
                    cout << "Result: "
                         << kmhToKnots(speed)
                         << " knots\n";
                }

                break;

            case 0:
                cout << "Program finished.\n";
                break;

            default:
                cout << "Invalid option. Try again.\n";
                break;
        }

    } while (choice != 0);

    return 0;
}