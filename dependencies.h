#ifndef __dependencies_H_INCLUDED__
#define __dependencies_H_INCLUDED__
using namespace std;
//roll the dice
int rollDice(int diceType) {
  //var declaration 
  int diceSide = 0;
  //all the dice types
  if (diceType == 4) diceSide = round(rand() % (4));
  if (diceType == 6) diceSide = round(rand() % (6));
  if (diceType == 8) diceSide = round(rand() % (8));
  if (diceType == 10) diceSide = round(rand() % (10));
  if (diceType == 12) diceSide = round(rand() % (12));
  if (diceType == 20) diceSide = round(rand() % (20));
  //return the side the dice landed on
  return diceSide;
}

//player class
class Player {

  public:
  //variable declaration
  string name;
  string classType;
  int strength, endurance;
  int id, DT = 20; //DT is dice type by the way
	//get players health
  int getHP() {
    return (10 + ((strength + endurance) * 2));
  }
  //get players hit
  int getHit() {
      return rollDice(DT);
    } //get damage

};

//Enemies
class Enemy {
  public:
    //var declaration
    string name;
  double AC; //armor class ablity to resist hits
  int DT; //dice used to attack
  int eid; //id for Enemies (Enemy id)
  int HP = round(HP*(1+AC)); //should I have done this with the player class? Eh to late now
  int getHit() {
      return rollDice(DT);
    } //get damage

};

//Get context of the situation for enemy fight
string enemyContxt(int option) {
		//make random numbers so the fight stuff seems 'random'
	  int randNum1 = round(rand() % (9) + 1);
    int randNum2 = round(rand() % (9) + 1);
    int randNum3 = round(rand() % (9) + 1);
    int randNum4 = round(rand() % (9) + 1);
    int randNum5 = round(rand() % (9) + 1);
		//names for enemies
    string name1 = "\nBruneor the ";
    string name2 = "\nRichard the ";
    string name3 = "\nFilbert the ";
    string name4 = "\nLodric the ";
    string name5 = "\nRuuker the ";
    string name6 = "\nKruger the ";
    string name7 = "\nCharles the ";
    string name8 = "\nAaarl the " ;
    string name9 = "\nVasiilk the ";
    string name10 = "\nGubl the ";
		//introduction of situation strings
    string intro1 = " hits you with a blunt slinky ";
    string intro2 = " whacks you with a feather ";
    string intro3 = " pushes you into Tiny Tim ";
    string intro4 = " stabs you with a lamp ";
    string intro5 = " shoots you with an M16 catapult ";
    string intro6 = " summons a spirit to pester you ";
    string intro7 = " uses a rune-stothe enchantment ";
    string intro8 = " tries to curse you but explodes an unfourtunate chicken, due to a terrible mispronuncation of your name ";
    string intro9 = " simply does nothing ";
    string intro10 = " burps up a gnerm (a miniature knome) ";
		//strings to help transition to next statement
    string trans1 = "and says 'Die, filthy swine!' ";
    string trans2 = "then trips on a gruubliyth. ";
    string trans3 = "and then, snarls! ";
    string trans4 = "and then begins to mutter an ancient curse! ";
    string trans5 = "then yells 'You hit like a Kerbb hehe!' ";
    string trans6 = "and says 'Die, filthy swine!' ";
    string trans7 = "then trips on a gruubliyth. ";
    string trans8 = "and then, snarls! ";
    string trans9 = "and then begins to mutter an ancient curse! ";
    string trans10 = "then yells 'You hit like a Uerbb hehe!' ";

//check if user selected an option then use random number var to decide string and return that string
    if (option == 1) {

      if (randNum1 == 1) return name1;
      if (randNum1 == 2) return name2;
      if (randNum1 == 3) return name3;
      if (randNum1 == 4) return name4;
      if (randNum1 == 5) return name5;
      if (randNum1 == 6) return name6;
      if (randNum1 == 7) return name7;
      if (randNum1 == 8) return name8;
      if (randNum1 == 9) return name9;
      if (randNum1 == 10) return name10;
    }
    if (option == 2) {

      if (randNum2 == 1) return intro1;
      if (randNum2 == 2) return intro2;
      if (randNum2 == 3) return intro3;
      if (randNum2 == 4) return intro4;
      if (randNum2 == 5) return intro5;
      if (randNum2 == 6) return intro6;
      if (randNum2 == 7) return intro7;
      if (randNum2 == 8) return intro8;
      if (randNum2 == 9) return intro9;
      if (randNum2 == 10) return intro10;

    }
    if (option == 3) {

      if (randNum3 == 1) return trans1;
      if (randNum3 == 2) return trans2;
      if (randNum3 == 3) return trans3;
      if (randNum3 == 4) return trans4;
      if (randNum3 == 5) return trans5;
      if (randNum3 == 6) return trans6;
      if (randNum3 == 7) return trans7;
      if (randNum3 == 8) return trans8;
      if (randNum3 == 9) return trans9;
      if (randNum3 == 10) return trans10;
    }

  }

//Get context of the situation
string playerContxt(Player &player) {
    int randNum = round(rand() % (19) + 1);
//pretty much the same thing with the finction above
      string name = player.name;
      
      if (randNum == 1)  return "\n" + name + " strikes with an evil Urrgleumbeck ";
      if (randNum == 2)  return "\n" + name + " hits, but epicly fails and hits a wall causing a rupture in time itself ";
      if (randNum == 3)  return "\n" + name + " trips on an explosive turtle ";
      if (randNum == 4)  return "\n" + name + " lunges at his enemy ";
      if (randNum == 5)  return "\n" + name + " sneezes violently causing a worldwide pandemic ";
      if (randNum == 6)  return "\n" + name + " swiftly hacks at his enemy using a knerm ";
      if (randNum == 7)  return "\n" + name + " summons the almighty mega-knerm ";
      if (randNum == 8)  return "\n" + name + " summons a crude writhe-golem ";
      if (randNum == 9)  return "\n" + name + " casts an ancient curse";
      if (randNum == 10)  return "\n" + name + " yells 'AVADA CADABRA!' ";
      if (randNum == 11)  return "\n" + name + " falls painfully ";
      if (randNum == 12)  return "\n" + name + " throws a strauug gas grenade ";
      if (randNum == 13)  return "\n" + name + " fires a portable villkreek mortar ";
      if (randNum == 14)  return "\n" + name + " strikes with a pirated knerm sword ";
      if (randNum == 15)  return "\n" + name + " drinks a super-enchantment giving him the ability to eat apples 10 times faster than normal ";
      if (randNum == 16)  return "\n" + name + " summons Tiny Tim who calls upon his  liege ";
      if (randNum == 17)  return "\n" + name + " calls upon a skeleton to do his bidding";
      if (randNum == 18)  return "\n" + name + " strikes with a molten axe";
      if (randNum == 19)  return "\n" + name + " hits a tree with his head causing it to fall ";
      if (randNum == 20)  return "\n" + name + " calls upon the ancient curse of Ugaar ";
  }
  
  //fight an Enemy (option 1)
int fightEnemy(Player &player, Enemy &enemy) {
	//declare all of these variables 
  int eHit = enemy.getHit();
  int pHit = player.getHit();
  int eHP = enemy.HP;
  int pHP = player.getHP();
  int playerLastRoll = pHit;
  int enemyLastRoll = eHit;
  int counter = 0;
  string name = enemyContxt(1);
  //welcome the user to the arena!
  cout << "\n->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->\n";
  cout << "Welcome to the Arena!\n";
  cout << "Starting HP: \n" << player.name << "'s HP: " << pHP << "\n" << enemy.name << "'s HP: " << eHP << "\n";
  cout << "Begin Battle!\n";
  //for loop to fight until the death
for(;;) {
		//as long as both the hits are not the same and it isnt the first round we should be ok
    while(playerLastRoll == pHit || enemyLastRoll == eHit && counter != 0){
    	//if it is keep looping this until these variables are different
      eHit = enemy.getHit();
      pHit = player.getHit();

    }
    //pause for a second, give the user some xor_eqconst_cast
    sleep(1);
    //use contxt function and print out message of hit
    cout << name << enemy.name << enemyContxt(2) << enemyContxt(3) << " Dealing " << eHit << " Damage!\n";\
    //subtract damage from health
    pHP = pHP - eHit;
    //is the player dead if statement
    if (pHP <= 0) {
    	//if they are tell the user and break the loop
      cout << "\n" << player.name << " is Dead!\n";
      cout << enemy.name << "'s HP left: " << eHP << "\n";
      cout << player.name << "'s HP left: " << pHP << "\n";
      break;
    } else {
    	//else keep going 
      sleep(1);
      //the same as above just switched around really
      cout << "\n" << playerContxt(player) << " Dealing " << pHit << " Damage!\n";
      eHP = eHP - pHit;
      if (eHP <= 0) {
        cout << "\n" << enemy.name << " is Dead!\n";
        cout << enemy.name << "'s HP left: " << eHP << "\n";
        cout << player.name << "'s HP left: " << pHP << "\n";
        break;
      }
    }
    //make the last roll be the last roll so the while loop can know in the future
    playerLastRoll = pHit;
    enemyLastRoll = eHit;
    counter++;
  }
//return function presumably after someone has died (hopefully)
  return 0;
}

  //fight a Player (option 2)
int fightPlayer(Player &player1, Player &player2) {
	//variable declaration
  int pHit1 = player1.getHit();
  int pHit2 = player2.getHit();
  int pHP1 = player1.getHP();
  int pHP2 = player2.getHP();
  int playerLastRoll1 = pHit1;
  int playerLastRoll2 = pHit2;
  int counter = 0;
  //same thing as the function above just with two players
  cout << "\n->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->\n";
  cout << "Welcome to the Arena!\n";
  cout << "Starting HP: \n" << player1.name << "'s HP: " << pHP1 << "\n" << player2.name << "'s HP: " << pHP2 << "\n";
  cout << "Begin Battle!\n";
for(;;) {

    while(playerLastRoll1 == pHit1 || playerLastRoll2 == pHit2 && counter != 0){
      pHit1 = player1.getHit();
      pHit2 = player2.getHit();

    }
    sleep(1);
    cout << "\n" << playerContxt(player1) << " Dealing " << pHit1 << " Damage!\n";
    pHP2 = pHP2 - pHit1;
    if (pHP2 <= 0) {
      cout << "\n" << player2.name << " is Dead!\n";
      cout << player1.name << "'s HP left: " << pHP1 << "\n";
      cout << player2.name << "'s HP left: " << pHP2 << "\n";
      break;
    } else {
      sleep(1);
      cout << "\n" << playerContxt(player2) << " Dealing " << pHit2 << " Damage!\n";
      pHP1 = pHP1 - pHit2;
      if (pHP1 <= 0) {
      cout << "\n" << player1.name << " is Dead!\n";
      cout << player1.name << "'s HP left: " << pHP1 << "\n";
      cout << player2.name << "'s HP left: " << pHP2 << "\n";
      break;
      }
    }
    playerLastRoll1 = pHit1;
    playerLastRoll2 = pHit2;
    counter++;
  }
//kill the function before it becomes sentient!
  return 0;
}
//check for every possible combo in each of the vectors
int enemyComboCheck(int id1, int id2, vector<Player> &allPlayers, vector<Enemy> &allEnemies){
//declare iterators and booleans
vector<Player>::iterator player_iter = allPlayers.begin();                    
vector<Enemy>::iterator enemy_iter;
bool found = false;

// try to find player
while (player_iter != allPlayers.end() && !found) {
    if (player_iter->id == id1)
        found = true;
    else 
        player_iter++;
}

// when player has been found, try to find enemy
if (found) {
    found = false;
    enemy_iter = allEnemies.begin();

    while (enemy_iter != allEnemies.end() && !found) {
        if (enemy_iter->eid == id2)
            found = true;
        else 
            enemy_iter++;
}

// if both have been found call function fightEnemy
if (found)
    fightEnemy(*player_iter, *enemy_iter);
   return 0;
}
 return 0;
}
//same as the function above just for two players though
int playerComboCheck(int id1, int id2, vector<Player> &allPlayers){

vector<Player>::iterator player_iter1 = allPlayers.begin();                    
vector<Player>::iterator player_iter2;
bool found = false;

// try to find player 1
while (player_iter1 != allPlayers.end() && !found) {
    if (player_iter1->id == id1)
        found = true;
    else 
        player_iter1++;
}

// when player has been found, try to find player 2
if (found) {
    found = false;
    player_iter2 = allPlayers.begin();

    while (player_iter2 != allPlayers.end() && !found) {
        if (player_iter2->id == id2)
            found = true;
        else 
            player_iter2++;
}

// if both have been found call function fightPlayer
if (found)
    fightPlayer(*player_iter1, *player_iter2);
   return 0;
}
 return 0;
}
//end of header file!
#endif
