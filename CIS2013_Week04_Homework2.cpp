// The purpose of the program is to make Black Jack game with functions.

#include <iostream>
#include <stdlib.h>
#include <time.h>

void hello();
void pl_1st_game (int player_total, int player_card);
void dl_1st_game (int dealer_total);
void question (char answer);
void pl_game (int player_card, int player_total);
void pl_lose (int player_total);
void pl_win (int player_total);
void dl_game (int dealer_card_card, int dealer_total);
void dl_lose (int dealer_total);

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
pl_1st_game (player_total, player_card);

	// cout << "your first card is " << player_total << endl;

	// cout << "your second card is " << player_card << endl;
	// cout << endl;
	// player_total = player_total + player_card;
	// cout << " The total value of your hand is " << player_total << endl;
	
	// cout << endl;
	
dl_1st_game (dealer_total);

	// cout << "the dealer's card is " << dealer_total << endl;

	// cout << endl;

question (answer);
	// cout << "Do you want to hit more? y/n" << endl;
	// cin >> question;

	// loop for the player.
	while (question == 'y') {
	
	pl_game (player_card, player_total);
	
	// int player_card = rand() % 10 + 1;
	
		// cout << "your card is " << player_card << endl;
		// player_total = player_total + player_card;
		// cout << " The total value of your hand is " << player_total << endl;
		
		pl_lose (player_total);
		
		// if (player_total > 21) {

			// cout << "You lose!" << endl;
			// return 0;
		// }
		
		pl_win (player_total);
		
		// else if (player_total == 21) {

			// cout << "You win!" << endl;
			// return 0;
		// }
		
		question (answer);
		// cout << "Do you want to hit more? y/n" << endl;
		// cin >> question;
	
	}

	// Loop for the dealer.
	
	do {
		
	dl_game (dealer_card_card, dealer_total);
	
	// int dealer_card = rand() % 10 + 1;
	// cout << endl;
	// cout << "the dealer's card is " << dealer_card << endl;
	// dealer_total = dealer_total + dealer_card;
	// cout << " The total value of dealer's hand is " << dealer_total << endl;
	
	// cout << endl;
	
	}
	while (dealer_total <= 16) ;
		
		dl_lose (dealer_total);
		
		// if (dealer_total > 21) {

			// cout << "Dealer loses!" << endl;
			// return 0;
		// }
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
	using namespace std;
	cout << endl;
	cout << "Hello!!! " << endl;
	cout << "Welcome to Black Jack!"<< endl;
	cout << endl;
	cout << "Take 2 cards" << endl;
	cout << endl;
}

void pl_1st_game (int player_total, int player_card) {
	using namespace std;
	int player_total = rand() % 10 + 1; 
	int player_card = rand() % 10 + 1;
	
	cout << "your first card is " << player_total << endl;

	cout << "your second card is " << player_card << endl;
	cout << endl;
	player_total = player_total + player_card;
	cout << " The total value of your hand is " << player_total << endl;
	
	cout << endl;
}
void dl_1st_game (int dealer_total) {
	using namespace std;
	int dealer_total = rand() % 10 + 1; 
	cout << "the dealer's card is " << dealer_total << endl;

	cout << endl;
}
void question (char answer) {
	using namespace std;
	cout << "Do you want to hit more? y/n" << endl;
	cin >> answer;
}
void pl_game (int player_card, int player_total) {
	using namespace std;
	int player_card = rand() % 10 + 1;
	cout << "your card is " << player_card << endl;
	player_total = player_total + player_card;
	cout << " The total value of your hand is " << player_total << endl;
}
void pl_lose (int player_total) {
	using namespace std;
	if (player_total > 21) {

			cout << "You lose!" << endl;
			return 0;
		}
}
void pl_win (int player_total) {
	using namespace std;
	if (player_total == 21) {

			cout << "You win!" << endl;
			return 0;
		}
}
void dl_game (int dealer_card_card, int dealer_total) {
	using namespace std;
	int dealer_card = rand() % 10 + 1;
	cout << endl;
	cout << "the dealer's card is " << dealer_card << endl;
	dealer_total = dealer_total + dealer_card;
	cout << " The total value of dealer's hand is " << dealer_total << endl;
	
	cout << endl;
}
void dl_lose (int dealer_total) {
	using namespace std;
	if (dealer_total > 21) {

			cout << "Dealer loses!" << endl;
			return 0;
		}
}