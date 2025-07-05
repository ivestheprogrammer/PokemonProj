#include <iostream>
#include <string>
#include <iostream>  
#include <string>  
using namespace std;
using std::cout;
using std::cin;
using std::endl;
using namespace std;

// Define an enum for Pokemon choices
enum class PokemonChoice {
    Charmander,
    Bulbasaur,
    Squirtle,
    InvalidChoice
};

enum class PokemonType {
    Fire,
	Electric,
    Grass,
    Water,
    Normal
};

class Pokemon {
    public:
    PokemonType type;
    string name;
	int health = 100; // Default health value
	//int level = 1; // Default level value

    Pokemon() {

    }

    Pokemon(string p_name, PokemonType p_type, int p_health) {
        name = p_name;
        type = p_type;
        health = p_health;
	}

    void attack()
    {
		cout << name << " attacks with a powerful move!\n";
    }
};

class Player {
    public:
    string name;
    Pokemon pokemon;
    Player(string p_name, Pokemon p_pokemon) {
        name = p_name;
        pokemon = p_pokemon;
    }
    void choosePokemon(int choice) 
    {
		switch ((PokemonChoice)choice) 
        {
        case PokemonChoice::Charmander:
            pokemon = Pokemon("Charmander", PokemonType::Fire, 100);
            cout << "You chose Charmander!\n";
            break;
        case PokemonChoice::Bulbasaur:
            pokemon = Pokemon("Bulbasaur", PokemonType::Grass, 100);
            cout << "You chose Bulbasaur!\n";
            break;
        case PokemonChoice::Squirtle:
            pokemon = Pokemon("Squirtle", PokemonType::Water, 100);
            cout << "You chose Squirtle!\n";
            break;
        default:
            pokemon = Pokemon("Pikachu", PokemonType::Electric, 100);
            break;
        }
        cout << "Player " << name << " chose " << pokemon.name << "!\n";
};;

    class ProfessorOak {
    public:
        string name;

        void greetPlayer(Player& player) {
            // Introduction by the Professor
            cout << "Professor Oak: Hello there! Welcome to the world of Pokemon!\n";
            cout << "Professor Oak: My name is Oak. People call me the Pokemon Professor!\n";
            cout << "Professor Oak: But enough about me. Let's talk about you!\n";
        }
        void offerPokemonChoices(Player& player) {
            // Taking player name as input
            cout << "Professor Oak: First, tell me, what’s your name?\n";
            getline(cin, player.name);

            cout << "Professor Oak: Ah, " << player.name << "! What a fantastic name!\n";
            cout << "Professor Oak: You must be eager to start your adventure. But first, you’ll need a Pokemon of your own!\n";

            // Presenting Pokemon choices
            cout << "Professor Oak: I have three Pokemon here with me. They’re all quite feisty!\n";
            cout << "Professor Oak: Choose wisely...\n";
            cout << "1. Charmander - The fire type. A real hothead!\n";
            cout << "2. Bulbasaur - The grass type. Calm and collected!\n";
            cout << "3. Squirtle - The water type. Cool as a cucumber!\n";

            int choice;
            cout << "Professor Oak: So, which one will it be? Enter the number of your choice: ";
            cin >> choice;
            player.choosePokemon(choice);
        }
    };

// function to get type enum as string
string GetPokemonTypeString(PokemonType type) {
    switch (type) {
    case PokemonType::Fire:
        return "Fire";
    case PokemonType::Electric:
        return "Electric";
    case PokemonType::Grass:
        return "Grass";
    case PokemonType::Water:
        return "Water";
    case PokemonType::Normal:
        return "Normal";
    default:
        return "Unknown";
    }
}


int main() {
	ProfessorOak professorOak("Professor Oak");
	Pokemon placeholderPokemon("Pikachu", PokemonType::Electric, 40);
    Player player("Trainer", placeholderPokemon);
    // Professor Oak greets the player
    professorOak.greetPlayer(player);
    // Professor Oak offers Pokemon choices to the player
    professorOak.offerPokemonChoices(player);
    // Display chosen Pokemon details
    cout << "You," << player.name << ", have chosen: " << player.pokemon.name << ", the " << GetPokemonTypeString(player.pokemon.type) << " type with health " << player.pokemon.health << ".\n";
    // Example of attacking with the chosen Pokemon
    //player.pokemon.attack();

    return 0;
}