// all the libraries
#include <iostream>
#include <string>
#include <time.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <math.h>
#include <vector>
#include "dependencies.h"

using std::cout;
using std::cin;
using std::vector;
using std::string;

// main function
int main() {
  srand(time(NULL));
  vector<Player> allPlayers;
  vector<Enemy> allEnemies;

  // player declaration
  allPlayers.push_back(Player("Peter", "Scribe", 3, 6, 1));
  allPlayers.push_back(Player("Cole", "Cursed", 3, 3, 2));
  allPlayers.push_back(Player("Mason", "Thief", 3, 1, 3));
  allPlayers.push_back(Player("Miles", "Paladin", 9, 5, 4));
  allPlayers.push_back(Player("Ashton", "Hobo", 3, 7, 4));

  // Enemy declaration below
  allEnemies.push_back(Enemy("Amatuer Guard", 10, 0.05, 4, 1));
  allEnemies.push_back(Enemy("Mediocre Guard", 15, 0.1, 8, 2));
  allEnemies.push_back(Enemy("Knight", 20, 0.2, 12, 3));
  allEnemies.push_back(Enemy("Okachi Raider", 10, 0.15, 6, 4));
  allEnemies.push_back(Enemy("Okachi Paladin", 25, 0.1, 10, 5));
  allEnemies.push_back(Enemy("Okachi Mage", 15, 0, 20, 6));
  allEnemies.push_back(Enemy("Frost Giant", 30, 0.2, 10, 7));
  allEnemies.push_back(Enemy("Dune Viper", 10, 0.15, 10, 8));
  allEnemies.push_back(Enemy("Burrowurm", 10, 0.25, 8, 9));
  allEnemies.push_back(Enemy("Behemoth", 65, 0.25, 6, 10));
  allEnemies.push_back(Enemy("Rabid Squirrel", 10, 0, 20, 11));
  allEnemies.push_back(Enemy("Wolf", 15, 0.2, 8, 12));
  allEnemies.push_back(Enemy("Dire Wolf", 20, 0.2, 12, 13));
  allEnemies.push_back(Enemy("Insane Hobo", 10, 0.05, 12, 14));
  allEnemies.push_back(Enemy("Forest Archer", 15, 0.15, 10, 15));
  allEnemies.push_back(Enemy("Forest Knight", 20, 0.1, 8, 16));
  allEnemies.push_back(Enemy("Forest Mage", 10, 0.15, 10, 17));
  allEnemies.push_back(Enemy("Murder Of Crows", 10, 0.1, 10, 18));

  // core
  int choice = 0;
  cout << "Please select a function: \n";
  cout << "1) Fight Against an Enemy\n";
  cout << "2) Fight Against Another Player\n";
  cout << "Response: ";
  cin >> choice;

  switch (choice) {
    case 1:
      int uid1;
      int uid2;

      cout << "\nEnter your Id (1-5): ";
      cin >> uid1;
      cout << "\nEnter your Enemies Id (1-18): ";
      cin >> uid2;
      enemyComboCheck(uid1, uid2, allPlayers, allEnemies);
      break;

    case 2:
      cout << "\nEnter Player 1's Id (1-5): ";
      cin >> uid1;
      cout << "\nEnter Player 2's Id (1-5): ";
      cin >> uid2;

      playerComboCheck(uid1, uid2, allPlayers);
      break;

    default:
      cout << "Input invalid. Bye!\n";
      return 0;
      break;
  }
  // ask user if they want to run the program again
  string endornot;
  sleep(1);
  cout << "\nRun again y/n: ";
  cin >> endornot;
  if (endornot == "y" || endornot == "Y") return main();
  if (endornot == "n" || endornot == "N") cout << "Shutting Down...\n";
  return 0;
}
