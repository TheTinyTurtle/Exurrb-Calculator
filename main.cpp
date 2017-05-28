/*
Exurbla Battle Simulator
Copyright 2017 Exurbla Studios
Peter Naumoff
All Rights Reserved
Personal use allowed with written permission of writer
*/

// all the libraries
#include <iostream>
#include <string>
#include <time.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <math.h>
#include <vector>
#include <iterator>
#include <sstream>
#include <fstream>
#include "DEPENDENCIES.h"

// main function
int main2() {
	std::vector<Player> allPlayers(getPlayers());
  std::vector<Enemy> allEnemies(getEnemies());

  // core
  int choice = 0;
  std::cout << "Please select a function: \n";
  std::cout << "1) Fight Against an Enemy\n";
  std::cout << "2) Fight Against Another Player\n";
  std::cout << "Response: ";
  std::cin >> choice;

  switch (choice) {
    case 1:
      int uid1;
      int uid2;

      std::cout << "\nEnter your Id (1-5): ";
      std::cin >> uid1;
      std::cout << "\nEnter your Enemies Id (1-18): ";
      std::cin >> uid2;
      entityComboCheck(uid1, uid2, allPlayers, allEnemies, 1);
      break;

    case 2:
      std::cout << "\nEnter Player 1's Id (1-5): ";
      std::cin >> uid1;
      std::cout << "\nEnter Player 2's Id (1-5): ";
      std::cin >> uid2;

      entityComboCheck(uid1, uid2, allPlayers, allEnemies, 2);
      break;

    default:
      std::cout << "Input invalid. Bye!\n";
      return 0;
      break;
  }
  return 0;
}

int main() {
  srand(time(nullptr));
  main2();
  // ask user if they want to run the program again
  std::string endornot;
  sleep(1);
  std::cout << "\nRun again y/n: ";
  std::cin >> endornot;
  if (endornot == "y" || endornot == "Y") return main2();
  if (endornot == "n" || endornot == "N") std::cout << "Shutting Down...\n";
}



