// The purpose of the program is to make Black Jack game with functions.

#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;
// Greeting
void hello();
// Printing card value
int print_card_value(int card);
// question to continue the game
void question (char& answer);
//Player's game and total value
void pl_game (int player_card, int& player_total);
//Player loses
void pl_lose (int& player_total);
// Player wins
void pl_win (int& player_total);
// Dealer's game and total value
void dl_game (int dealer_card, int& dealer_total);
// Dealer loses
void dl_lose (int& dealer_total);
// Dealer wins
void dl_win (int& dealer_total);
// Comparing points for the winner
void compare (int& player_total, int& dealer_total);

int main (){

srand(time(NULL));
	char answer;
	
	int player_total = rand() % 13 + 1; 
	int player_card = rand() % 13 + 1;
	int dealer_total = rand() % 13 + 1; 
	int dealer_card = rand() % 13 + 1;
	
	
hello();

player_total = print_card_value(player_total);
player_card = print_card_value(player_card);
pl_game (player_card, player_total);
cout << endl;
cout << " dealer's turn: " ;
dealer_total = print_card_value(dealer_total);
question (answer);


	 while (answer == 'y') {
	int player_card = rand() % 13 + 1;
	player_card = print_card_value(player_card);	
	pl_game (player_card, player_total);
		pl_lose (player_total);
	
		pl_win (player_total);
		
		question (answer);
		
	} 
	
	do {
	cout << endl;
	cout << " dealer's turn: " ;
	int dealer_card = rand() % 13 + 1;
	dealer_card = print_card_value(dealer_card);	
	dl_game (dealer_card, dealer_total);
	
	}
	while (dealer_total <= 16) ;
		
		dl_lose (dealer_total);
		
		dl_win (dealer_total);
		
compare (player_total, dealer_total);
	
	
return 0;

}

void hello() {
	using namespace std;
	cout << endl;
	cout << "Hello!!! " << endl;
	cout << "Welcome to Black Jack!"<< endl;
	cout << endl;
	cout << "Take 2 cards" << endl;
	cout << endl;
}
int print_card_value(int card){
	using namespace std;
	switch(card){
	 case 1:
		cout << "You got an Ace" << endl; 
		return 1;
		break;
	 case 11:
		cout << "You got a Jack" << endl;
		return 10;
		break;
	 case 12:
		cout << "You got a Queen" << endl;
		return 10;
		break;
	 case 13:
		cout << "You got a King" << endl;
		return 10;
		break;
	 default:
		cout << "You got a " << card << endl;
		return card;
		break;
		
	}
}


void question (char& answer) {
	
	cout << "Do you want to hit more? y/n" << endl;
	cin >> answer;
}
void pl_game (int player_card, int& player_total) {
	
	
	player_total = player_total + player_card;
	cout << " The total value of your hand is " << player_total << endl;
}
void pl_lose (int& player_total) {
	
	if (player_total > 21) {

			cout << "You lose!" << endl;
		std::exit(0);	
		}
		
}
void pl_win (int& player_total) {

	if (player_total == 21) {

			cout << "You win!" << endl;
		std::exit(0);	
		}
		
}
void dl_game (int dealer_card, int& dealer_total) {
	
	dealer_total = dealer_total + dealer_card;
	cout << " The total value of dealer's hand is " << dealer_total << endl;
	
	cout << endl;
}
void dl_lose (int& dealer_total) {
	
	if (dealer_total > 21) {

			cout << "Dealer loses!" << endl;
		std::exit(0);
		}
		
}
void dl_win (int& dealer_total) {
	
	if (dealer_total == 21) {

			cout << "Dealer wins!" << endl;
		std::exit(0);
		}
		
}
void compare (int& player_total, int& dealer_total) {
	
	if (player_total > dealer_total)
		cout << " You win! " << endl;
	else
		cout << " You lose! " << endl;
	
}