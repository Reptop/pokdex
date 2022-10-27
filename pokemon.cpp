#include "pokemon.h"
#include <fstream>
#include <vector>
#include <iostream>

using namespace std; 


Pokemon* create_pokemons(int) {

  Pokemon * pokemon = new Pokemon();
  cout << "Enter Dex Number: ";
  cin >> pokemon->dex_num;
  cout << "Enter Pokemon name: ";
  cin >> pokemon->name;
}

void readFile(string fileName, ifstream & dex) {
   int num_pokemon;
   Pokedex * pokedex = new Pokedex();
   dex >> num_pokemon;

   Pokemon *list[num_pokemon];

   vector<Pokemon*> * pokemonList = new vector<Pokemon*>();

   pokedex->num_pokemon = num_pokemon;

   for (int i = 0; i < num_pokemon; ++i) {
      pokedex->dex = new Pokemon();

      dex >> pokedex->dex->dex_num;
      dex >> pokedex->dex->name;
      dex >> pokedex->dex->type;
      dex >> pokedex->dex->num_moves;

      pokemonList->push_back(pokedex->dex);
      string * moveList[pokedex->dex->num_moves];
   }

  for (vector<Pokemon*>::iterator iter = pokemonList->begin(); iter != pokemonList->end(); ++iter) {
      cout << "DEX NUMBER: " << (*iter)->dex_num << endl;
      cout << "NAME: " << (*iter)->name << endl;
      cout << "TYPE: " << (*iter)->type << endl;
      cout << "# OF MOVES: " << (*iter)->num_moves << endl;
      cout << '\n';
   }
}

void populate_pokedex_data(Pokedex & , ifstream &) {

}

string* create_moves(int) {

  
}

void populate_pokemon(Pokemon &, ifstream &) {

}

void delete_info(Pokemon &) {

}
