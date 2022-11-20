#include "tic_tac_toe.h"
#include "tic_tac_toe_manager.h"
#include "tic_tac_toe_3.h"
#include "tic_tac_toe_4.h"
#include <string>

using namespace::std;


int main() 
{
	unique_ptr<TicTacToe> ttt_game;
	TicTacToeManager ttt_manager;

	cout << "Do you want to start a new game? Enter 'Y' or 'N'. ";
	string response;
	cin >> response;

	while (response == "Y"){
		do {
			cout << "Enter 3 for 3*3 Tic Tac Toe game or 4 for 4*4 Tic Tac Toe game.";
			int size;
			cin >> size:
		}

		if(size == 3) {
			ttt_game = make_unique<TicTacToe3>();
		}
		else {
			ttt_game = make_unique<TicTacToe4>();
		}
		
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
		//ttt_game.display_board();
		cout << ttt_game;
		cout << "The winner is " << ttt_game.get_winner() << "\n";

		ttt_manager.save_game(ttt_game);

		int o, x, t;
		ttt_manager.get_winner_total(o, x, t);
		cout << "O wins " << o << "times \n";
		cout << "X wins " << x << "times \n";
		cout << "Ties " << t << "times \n";
	}
		
		cout << "Do you want to restart the game? Enter 'Y' or 'N'. ";
		string response;
		cin >> response;
	}

	return 0;
}