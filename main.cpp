/*
Exurbla Battle Simulator
Copyright 2017 Exurbla Studios
Peter Naumoff
All Rights Reserved 
Personal use allowed with written permission of writer
*/

//all the libraries 
#include <iostream> 
#include <string> 
#include <time.h> 
//#include <stdlib.h> 
#include <stdio.h> 
#include <unistd.h>
#include <math.h>
#include <vector>
#include "dependencies.h"

//so I dont have to type a million std prefixes
using namespace std;

//main function
int main() {
	//set a random seed based on the time
  srand(time(NULL));
  //vector to add all the players and enemies for scanning later on
  vector<Player> allPlayers;
  vector<Enemy> allEnemies;
  //player declaration below
  //peter
  Player peter;
  peter.name = "Peter";
  peter.classType = "Scribe";
  peter.strength = 3;
  peter.endurance = 6;
  peter.id = 1;
  //push back this player to the vector
  allPlayers.push_back(peter);
  //------------------------------------------
  //cole
  Player cole;
  cole.name = "Cole";
  cole.classType = "Cursed";
  cole.strength = 3;
  cole.endurance = 3;
  cole.id = 2;
  //push back this player to the vector
  allPlayers.push_back(cole);
  //------------------------------------------
  //mason
  Player mason;
  mason.name = "Mason";
  mason.classType = "Thief";
  mason.strength = 3;
  mason.endurance = 1;
  mason.id = 3;
  //push back this player to the vector
  allPlayers.push_back(mason);
  //------------------------------------------
  //miles
  Player miles;
  miles.name = "Miles";
  miles.classType = "Paladin";
  miles.strength = 9;
  miles.endurance = 5;
  miles.id = 4;
  //push back this player to the vector
  allPlayers.push_back(miles);
  //------------------------------------------
  //ashton
  Player ashton;
  ashton.name = "Ashton";
  ashton.classType = "Hobo";
  ashton.strength = 3;
  ashton.endurance = 7;
  ashton.id = 5;
  //push back this player to the vector
  allPlayers.push_back(ashton);
  //------------------------------------------
  //Enemy declaration below
  //AmatuerGuard
  Enemy AmatuerGuard;
  AmatuerGuard.name = "Amatuer Guard";
  AmatuerGuard.HP = 10;
  AmatuerGuard.AC = 0.05;
  AmatuerGuard.DT = 4;
  AmatuerGuard.eid = 1;
  //push back this enemy to the vector
  allEnemies.push_back(AmatuerGuard);
  //MediocreGuard
  Enemy MediocreGuard;
  MediocreGuard.name = "Mediocre Guard";
  MediocreGuard.HP = 15;
  MediocreGuard.AC = 0.1;
  MediocreGuard.DT = 8;
  MediocreGuard.eid = 2;
  //push back this enemy to the vector
  allEnemies.push_back(MediocreGuard);
  //Knight
  Enemy Knight;
  Knight.name = "Knight";
  Knight.HP = 20;
  Knight.AC = 0.2;
  Knight.DT = 12;
  Knight.eid = 3;
  //push back this enemy to the vector
  allEnemies.push_back(Knight);
  //OkachiRaider
  Enemy OkachiRaider;
  OkachiRaider.name = "Okachi Raider";
  OkachiRaider.HP = 10;
  OkachiRaider.AC = 0.15;
  OkachiRaider.DT = 6;
  OkachiRaider.eid = 4;
  //push back this enemy to the vector
  allEnemies.push_back(OkachiRaider);
  //OkachiPaladin
  Enemy OkachiPaladin;
  OkachiPaladin.name = "Okachi Paladin";
  OkachiPaladin.HP = 25;
  OkachiPaladin.AC = 0.1;
  OkachiPaladin.DT = 10;
  OkachiPaladin.eid = 5;
  //push back this enemy to the vector
  allEnemies.push_back(OkachiPaladin);
  //OkachiMage
  Enemy OkachiMage;
  OkachiMage.name = "Okachi Mage";
  OkachiMage.HP = 15;
  OkachiMage.AC = 0;
  OkachiMage.DT = 20;
  OkachiMage.eid = 6;
  //push back this enemy to the vector
  allEnemies.push_back(OkachiMage);
  //FrostGiant
  Enemy FrostGiant;
  FrostGiant.name = "Frost Giant";
  FrostGiant.HP = 30;
  FrostGiant.AC = 0.2;
  FrostGiant.DT = 10;
  FrostGiant.eid = 7;
  //push back this enemy to the vector
  allEnemies.push_back(FrostGiant);
  //DuneViper
  Enemy DuneViper; 
  DuneViper.name = "Dune Viper";
  DuneViper.HP = 10;
  DuneViper.AC = 0.15;
  DuneViper.DT = 10;
  DuneViper.eid = 8;
  //push back this enemy to the vector
  allEnemies.push_back(DuneViper);
  //Burrowurm
  Enemy Burrowurm;
  Burrowurm.name = "Burrowurm";
  Burrowurm.HP = 10;
  Burrowurm.AC = 0.25;
  Burrowurm.DT = 8;
  Burrowurm.eid = 9;
  //push back this enemy to the vector
  allEnemies.push_back(Burrowurm);
  //Behemoth
  Enemy Behemoth;
  Behemoth.name = "Behemoth";
  Behemoth.HP = 65;
  Behemoth.AC = 0.25;
  Behemoth.DT = 6;
  Behemoth.eid = 10;
  //push back this enemy to the vector
  allEnemies.push_back(Behemoth);
  //RabidSquirrel
  Enemy RabidSquirrel;
  RabidSquirrel.name = "Rabid Squirrel";
  RabidSquirrel.HP = 10;
  RabidSquirrel.AC = 0;
  RabidSquirrel.DT = 20;
  RabidSquirrel.eid = 11;
  //push back this enemy to the vector;
  allEnemies.push_back(RabidSquirrel);
  //Wolf
  Enemy Wolf;
  Wolf.name = "Wolf";
  Wolf.HP = 15;
  Wolf.AC = 0.2;
  Wolf.DT = 8;
  Wolf.eid = 12;
  //push back this enemy to the vector
  allEnemies.push_back(Wolf);
  //DireWolf
  Enemy DireWolf;
  DireWolf.name = "Dire Wolf";
  DireWolf.HP = 20;
  DireWolf.AC = 0.2;
  DireWolf.DT = 12;
  DireWolf.eid = 13;
  //push back this enemy to the vector
  allEnemies.push_back(DireWolf);
  //InsaneHobo
  Enemy InsaneHobo;
  InsaneHobo.name = "Insane Hobo";
  InsaneHobo.HP = 10;
  InsaneHobo.AC = 0.05;
  InsaneHobo.DT = 12;
  InsaneHobo.eid = 14;
  //push back this enemy to the vector
  allEnemies.push_back(InsaneHobo);
  //ForestArcher
  Enemy ForestArcher;
  ForestArcher.name = "Forest Archer";
  ForestArcher.HP = 15;
  ForestArcher.AC = 0.15;
  ForestArcher.DT = 10;
  ForestArcher.eid = 15;
  //push back this enemy to the vector
  allEnemies.push_back(ForestArcher);
  //ForestKnight
  Enemy ForestKnight;
  ForestKnight.name = "Forest Knight";
  ForestKnight.HP = 20;
  ForestKnight.AC = 0.1;
  ForestKnight.DT = 8;
  ForestKnight.eid = 16;
  //push back this enemy to the vector
  allEnemies.push_back(ForestKnight);
  //ForestKnight
  Enemy ForestMage;
  ForestMage.name = "Forest Mage";
  ForestMage.HP = 10;
  ForestMage.AC = 0.15;
  ForestMage.DT = 10;
  ForestMage.eid = 17;
  //push back this enemy to the vector
  allEnemies.push_back(ForestMage);
  //MurderOfCrows
  Enemy MurderOfCrows;
  MurderOfCrows.name = "Murder Of Crows";
  MurderOfCrows.HP = 10;
  MurderOfCrows.AC = 0.1;
  MurderOfCrows.DT = 10;
  MurderOfCrows.eid = 18;
  //push back this enemy to the vector
  allEnemies.push_back(MurderOfCrows);
  //core
  //variable declaration
  int choice = 0; 
  //ask user to select function
  cout << "Please select a function: \n";
  cout << "1) Fight Against an Enemy\n";
  cout << "2) Fight Against Another Player\n";
  cout << "Response: ";
  cin >> choice; //take in the response to the choice variable
	//not sure why I didn't just use an if statement for these
  switch (choice) {
  //check if choice is 1
  case 1:
  	//uid stands for user input id
    int uid1;
    int uid2;
		//ask for player id
    cout << "\nEnter your Id (1-5): ";
    cin >> uid1; //take it in to uid1
    //ask for enemy id
    cout << "\nEnter your Enemies Id (1-18): ";
    cin >> uid2; //take it in to uid2
    //call the ingenious function to check all possiblilities of enemies and players
    enemyComboCheck(uid1, uid2, allPlayers, allEnemies);
    break;

  case 2:
  //same thing as above but just with another player instead of an enemy
    cout << "\nEnter Player 1's Id (1-5): ";
    cin >> uid1;
    cout << "\nEnter Player 2's Id (1-5): ";
    cin >> uid2;
    //different function too
    playerComboCheck(uid1, uid2, allPlayers);
    break;
//if you didn't do anything right resort to this 
  default:
    cout << "Input invalid. Bye!\n";
    return 0;
    break;

  }
  //ask user if they want to run the program again
  string endornot;
  sleep(1);
  cout << "\nRun again y/n: ";
  cin >> endornot;
  if (endornot == "y" || endornot == "Y") return main();
  if (endornot == "n" || endornot == "N") cout << "Shutting Down...\n"; return 0;
}
