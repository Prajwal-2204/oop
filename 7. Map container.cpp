#include <iostream>
#include <map>
#include <string>
using namespace std;

int main() {
    string state;
    int population;
    char ans = 'y'; // Fixed invalid single quote character
    int choice;
    map<string, int> m;
    map<string, int>::iterator i;

    do {
        cout << "\nMain Menu";
        cout << "\n1. Insert an element";
        cout << "\n2. Display";
        cout << "\n3. Search a state";
        cout << "\nEnter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "\nEnter the name of the state: ";
                cin.ignore(); // To handle previous input buffer issues
                getline(cin, state);
                cout << "Enter the population (in Cr): ";
                cin >> population;
                m.insert(pair<string, int>(state, population));
                break;

            case 2:
                cout << "States and Populations are: ";
                for (i = m.begin(); i != m.end(); i++) // Using iterator
                    cout << "[" << (*i).first << ", " << (*i).second << " Cr] ";
                cout << endl;
                break;

            case 3:
                cout << "\nEnter the name of the state to search its population: ";
                cin.ignore();
                getline(cin, state);
                if (m.count(state) != 0) // Check if state exists
                    cout << "Population is " << m.find(state)->second << " Cr" << endl;
                else
                    cout << "State is not present in the list" << endl;
                break;

            default:
                cout << "Invalid choice! Please try again." << endl;
        }

        cout << "\nDo you want to continue? (y/n): ";
        cin >> ans;
    } while (ans == 'y' || ans == 'Y');

    return 0;
}

