#include <iostream>
#include <map>
using namespace std;

int main() {
    string playerName;
    string chosenPokemon;

    // Introduction by the Professor
    cout << "Professor Oak: Hello there! Welcome to the world of Pokemon!" << endl;
    cout << "Professor Oak: My name is Oak. People call me the Pokemon Professor!" << endl;
    cout << "Professor Oak: But enough about me. Let's talk about you!" << endl;

    // Taking player name as input
    cout << "What's your name?" << endl;
    cin >> playerName;

    cout << "\nWelcome " << playerName << "! Are you ready to start your adventure?" << endl;

    // Presenting Pokemon choices
    cout << "Well, you're not until you've got a Pokemon by your side! I've got three options for you:" << endl;
    cout << "1. Bulbasaur" << endl;
    cout << "2. Charmander" << endl;
    cout << "3. Squirtle" << endl;
    cout << "Choose wisely, for your companion will shape your journey! Enter 1, 2, or 3." << endl;

    // Store the chosen Pokemon based on user input
    int choice = 0;
    std::map<int, std::string> pokemonChoices;
    pokemonChoices[1] = "Bulbasaur";
    pokemonChoices[2] = "Charmander";
    pokemonChoices[3] = "Squirtle";
	pokemonChoices[4] = "Pikachu"; // Default option if none of the above are chosen
	
    while (choice==0)
    {
        cin >> choice;
        //if (choice == 1 || choice == 2 || choice == 3)
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
			default:
				cout << "Hmm, none of these three interest you? How about Pikachu?" << endl;
				choice = 4; // Set choice to 4 for Pikachu no matter what input was given

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
						chosenPokemon = pokemonChoices[choice];
						cout << "You have chosen " << chosenPokemon << " as your first Pokemon!" << endl;
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
       /*else {
            cout << "Invalid choice. Please enter 1, 2, or 3: " << endl;
            cin.clear(); // Clear error flags
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Discard invalid input
        }*/

        

        
    }
    return 0;
}