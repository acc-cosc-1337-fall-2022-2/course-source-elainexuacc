#include "tic_tac_toe.h"
#include <string>

using namespace::std;

int main() 
{
	TicTacToe ttt_game;

	cout << "Do you want to start a new game? Enter 'Y' or 'N'. ";
	string response;
	cin >> response;

	while (response == "Y"){
		string first_player;
		do {
			cout << "Please enter X or O.";
			cin >> first_player;
		} while (first_player != "X" and first_player != "O");

		ttt_game.start_game(first_player);
	
		do{
			cout << "Please choose a position from 1 to 9.";
			int position;
			cin >> position;
			ttt_game.mark_board(position);
		}
	
		while (ttt_game.game_over() == false);
		ttt_game.display_board();
		cout << "The winner is " << ttt_game.get_winner() << "\n";
		cout << "Do you want to restart the game? Enter 'Y' or 'N'. ";
		string response;
		cin >> response;
	}

	return 0;
}