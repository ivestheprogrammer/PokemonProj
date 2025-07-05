#include <iostream>
using namespace std;

int main() {
    string playerName;

    cout << "What's your name? \n";
    cin >> playerName;

    cout << "\nWelcome " << playerName << "! Are you ready to start your adventure?" << endl;

    cout << "Well, you're not until you've got a Pokemon by your side! I've got three options for you:" << endl;
    cout << "1. Bulbasaur" << endl;
    cout << "2. Charmander" << endl;
    cout << "3. Squirtle" << endl;
    cout << "Choose wisely, for your companion will shape your journey! Enter 1, 2, or 3." << endl;

    int choice = 0;
    while (choice==0)
    {
        cin >> choice;
        if (choice == 1 || choice == 2 || choice == 3)
        {
            switch (choice) {
            case 1:
                cout << "You chose Bulbasaur! A wise choice." << endl;
                break;
            case 2:
                cout << "You chose Charmander! A fiery choice." << endl;
                break;
            case 3:
                cout << "You chose Squirtle! A cool choice." << endl;
                break;
            }
            cout << "Is this your final choice? (Y for Yes, N for No): " << endl;
            char finalChoice;
            while (true) {
                cin >> finalChoice;
                finalChoice = toupper(finalChoice);
                
                if (finalChoice == 'Y' || finalChoice == 'N')
                {
                    if (finalChoice == 'Y')
                    {
                        cout << "Great choice! Your adventure begins now!" << endl;
                        
                    }
                    else {
                       cout << "It's a hard choice. Which Pokemon would you like? 1, 2, or 3?" << endl;
                       choice = 0; //default back to 0 to continue outer loop
                    }
                    break; // Exit the inner loop to allow re-selection
                }
                else {
                    cout << "Invalid input. Please enter Y for Yes or N for No: " << endl;
                    cin.clear(); // Clear error flags
                    cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Discard invalid input
                }
            }
            
        }
        else {
            cout << "Invalid choice. Please enter 1, 2, or 3: " << endl;
            cin.clear(); // Clear error flags
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Discard invalid input
        }

        

        
    }
    return 0;
}