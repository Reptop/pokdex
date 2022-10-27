/******************************************************
** Program: pokemon.cpp
** Author: Raed Kabir
** Date: 10/30/2022
** Description:
** Input: txt file name 
** Output:
******************************************************/

#include <iostream>
#include <fstream>
#include <cstring>
#include <vector>
#include <stdio.h>
#include "pokemon.h"

using namespace std;

int main() {
  ifstream dex;
  Pokedex * pokedex = new Pokedex(); 
  string fileName;

  for(;;) {
  cout << "Example input: <fileName.txt>" << endl;
  cout << "Enter the PokeDex file name: ";
  cin >> fileName;

  dex.open(fileName);
  if (dex.is_open()) { //file exists
    readFile(fileName, dex);
  }

  else { //doesnt exist
    cout << "Error: File not found." << endl;
    }
  }
}

