#ifndef POKEMON_H
#define POKEMON_H

#include <iostream>
#include <fstream>
using namespace std; 

struct Pokemon { 
  int dex_num; 
  string name; 
  string type; 
  int num_moves; 
  string* moves;
};

struct Pokedex {
  string trainer;
  int num_pokemon;
  Pokemon* dex;
};

Pokemon* create_pokemons(int);
void readFile(string fileName, ifstream & ); 
void populate_pokedex_data(Pokedex & , ifstream &);
string* create_moves(int);
void populate_pokemon(Pokemon &, ifstream &);
void delete_info(Pokemon &);

#endif
