// The purpose of the program is to make Black Jack game with functions.

#include <iostream>
#include <stdlib.h>
#include <time.h>

void hello();



int main (){

using namespace std;
srand(time(NULL));
	char question = 'y';
	
	int player_total = rand() % 10 + 1; 
	int player_card = rand() % 10 + 1;
	
	int dealer_total = rand() % 10 + 1; 
	int dealer_card = rand() % 10 + 1;
 	
	// cout << endl;
	// cout << "Hello!!! " << endl;
	// cout << "Welcome to Black Jack!"<< endl;
	// cout << endl;
	// cout << "Take 2 cards" << endl;
	// cout << endl;
hello();

	// cout << "your first card is " << player_total << endl;

	// cout << "your second card is " << player_card << endl;
	// cout << endl;
	// player_total = player_total + player_card;
	// cout << " The total value of your hand is " << player_total << endl;
	
	// cout << endl;
	cout << "the dealer's card is " << dealer_total << endl;

	cout << endl;

	cout << "Do you want to hit more? y/n" << endl;
	cin >> question;

	// loop for the player.
	while (question == 'y') {
	int player_card = rand() % 10 + 1;
	
		cout << "your card is " << player_card << endl;
		player_total = player_total + player_card;
		cout << " The total value of your hand is " << player_total << endl;
		
		if (player_total > 21) {

			cout << "You lose!" << endl;
			return 0;
		}
		else if (player_total == 21) {

			cout << "You win!" << endl;
			return 0;
		}
		
		cout << "Do you want to hit more? y/n" << endl;
		cin >> question;
	
	}

	// Loop for the dealer.
	
	do {
	int dealer_card = rand() % 10 + 1;
	cout << endl;
	cout << "the dealer's card is " << dealer_card << endl;
	dealer_total = dealer_total + dealer_card;
	cout << " The total value of dealer's hand is " << dealer_total << endl;
	
	cout << endl;
	
	}
	while (dealer_total <= 16) ;
		
		if (dealer_total > 21) {

			cout << "Dealer loses!" << endl;
			return 0;
		}
		else if (dealer_total == 21) {

			cout << "Dealer wins!" << endl;
			return 0;
		}
		
	if (player_total > dealer_total)
		cout << " You win! " << endl;
	else
		cout << " You lose! " << endl;
		
	
return 0;

}

void hello() {
	cout << endl;
	cout << "Hello!!! " << endl;
	cout << "Welcome to Black Jack!"<< endl;
	cout << endl;
	cout << "Take 2 cards" << endl;
	cout << endl;
}

void pl_1st_game (int player_total, int player_card) {
	
	int player_total = rand() % 10 + 1; 
	int player_card = rand() % 10 + 1;
	
	cout << "your first card is " << player_total << endl;

	cout << "your second card is " << player_card << endl;
	cout << endl;
	player_total = player_total + player_card;
	cout << " The total value of your hand is " << player_total << endl;
	
	cout << endl;
}