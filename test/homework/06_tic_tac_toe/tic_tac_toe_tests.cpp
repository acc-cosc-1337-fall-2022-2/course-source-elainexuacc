#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "tic_tac_toe.h"
#include "tic_tac_toe_manager.h"

using namespace std;
TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Verify TicTacToe first player set to X") {
	TicTacToe ttt_game;
	ttt_game.start_game("X");
	REQUIRE(ttt_game.get_player() == "X");
}

TEST_CASE("Verify TicTacToe first player set to O") {
	TicTacToe ttt_game;
	ttt_game.start_game("O");
	REQUIRE(ttt_game.get_player() == "O");
}

TEST_CASE("Verify TicTacToe") {
	TicTacToe ttt_game;
	string first_player = "X";
	ttt_game.start_game(first_player);
	vector<int> positions = {1,2,3,4,5,7,6,9,8};
	for (auto & pos : positions) {
		ttt_game.mark_board(pos);
		//ttt_game.display_board();
		cout << "board displayed \n";
		if(ttt_game.game_over()) {
			break;
		}
	}
	REQUIRE(ttt_game.get_winner() == "C");
}


TEST_CASE("Verify TicTacToe Win By First Column") {
	TicTacToe ttt_game;
	string first_player = "X";
	ttt_game.start_game(first_player);
	vector<int> positions = {1,2,4,5,7,8};
	for (auto & pos : positions) {
		ttt_game.mark_board(pos);
		//ttt_game.display_board();
		cout << "board displayed \n";
		if(ttt_game.game_over()) {
			break;
		}
	}

	string winner = ttt_game.get_winner();

	REQUIRE(ttt_game.game_over() == true);
	REQUIRE(winner == "X");
}

TEST_CASE("Verify TicTacToe Win By Second Column") {
	TicTacToe ttt_game;
	string first_player = "X";
	ttt_game.start_game(first_player);
	vector<int> positions = {2,3,5,6,8,9};
	for (auto & pos : positions) {
		ttt_game.mark_board(pos);
		//ttt_game.display_board();
		cout << "board displayed \n";
		if(ttt_game.game_over()) {
			break;
		}
	}
	string winner = ttt_game.get_winner();

	REQUIRE(ttt_game.game_over() == true);
	REQUIRE(winner == "X");
}


TEST_CASE("Verify TicTacToe Win By Third Column") {
	TicTacToe ttt_game;
	string first_player = "X";
	ttt_game.start_game(first_player);
	vector<int> positions = {3,4,6,7,9,2};
	for (auto & pos : positions) {
		ttt_game.mark_board(pos);
		//ttt_game.display_board();
		cout << "board displayed \n";
		if(ttt_game.game_over()) {
			break;
		}
	}
	string winner = ttt_game.get_winner();

	REQUIRE(ttt_game.game_over() == true);
	REQUIRE(winner == "X");
}

TEST_CASE("Verify TicTacToe Win By First Row") {
	TicTacToe ttt_game;
	string first_player = "X";
	ttt_game.start_game(first_player);
	vector<int> positions = {1,4,2,5,3};
	for (auto & pos : positions) {
		ttt_game.mark_board(pos);
		//ttt_game.display_board();
		cout << "board displayed \n";
		if(ttt_game.game_over()) {
			break;
		}
	}
	string winner = ttt_game.get_winner();

	REQUIRE(ttt_game.game_over() == true);
	REQUIRE(winner == "X");
}

TEST_CASE("Verify TicTacToe Win By Second Row") {
	TicTacToe ttt_game;
	string first_player = "X";
	ttt_game.start_game(first_player);
	vector<int> positions = {1,4,2,5,7,6};
	for (auto & pos : positions) {
		ttt_game.mark_board(pos);
		//ttt_game.display_board();
		cout << "board displayed \n";
		if(ttt_game.game_over()) {
			break;
		}
	}
	string winner = ttt_game.get_winner();

	REQUIRE(ttt_game.game_over() == true);
	REQUIRE(winner == "X");
}

TEST_CASE("Verify TicTacToe Win By Third Row") {
	TicTacToe ttt_game;
	string first_player = "X";
	ttt_game.start_game(first_player);
	vector<int> positions = {1,7,2,8,4,9};
	for (auto & pos : positions) {
		ttt_game.mark_board(pos);
		//ttt_game.display_board();
		cout << "board displayed \n";
		if(ttt_game.game_over()) {
			break;
		}
	}
	string winner = ttt_game.get_winner();

	REQUIRE(ttt_game.game_over() == true);
	REQUIRE(winner == "X");
}

TEST_CASE("Verify TicTacToe Win Diagonally from top left") {
	TicTacToe ttt_game;
	string first_player = "X";
	ttt_game.start_game(first_player);
	vector<int> positions = {1,2,5,6,9};
	for (auto & pos : positions) {
		ttt_game.mark_board(pos);
		//ttt_game.display_board();
		cout << "board displayed \n";
		if(ttt_game.game_over()) {
			break;
		}
	}
	string winner = ttt_game.get_winner();

	REQUIRE(ttt_game.game_over() == true);
	REQUIRE(winner == "X");
}

TEST_CASE("Verify TicTacToe Win Diagonally from bottom left") {
	TicTacToe ttt_game;
	string first_player = "X";
	ttt_game.start_game(first_player);
	vector<int> positions = {7,6,5,4,3};
	for (auto & pos : positions) {
		ttt_game.mark_board(pos);
		//ttt_game.display_board();
		cout << "board displayed \n";
		if(ttt_game.game_over()) {
			break;
		}
	}
	string winner = ttt_game.get_winner();

	REQUIRE(ttt_game.game_over() == true);
	REQUIRE(winner == "X");
}

TEST_CASE("Verify TicTacToe Manager") {
	TicTacToe ttt_game;
	TicTacToeManager ttt_manager;

	int o, x, t;

	string first_player = "X";
	ttt_game.start_game(first_player);
	vector<int> positions = {7,6,5,4,3};
	for (auto & pos : positions) {
		ttt_game.mark_board(pos);
		//ttt_game.display_board();
		cout << "board displayed \n";
		if(ttt_game.game_over()) {
			break;
		}
	}
	ttt_manager.save_game(ttt_game);

	string first_player = "O";
	ttt_game.start_game(first_player);
	vector<int> positions = {1,2,5,6,9};
	for (auto & pos : positions) {
		ttt_game.mark_board(pos);
		//ttt_game.display_board();
		cout << "board displayed \n";
		if(ttt_game.game_over()) {
			break;
		}
	}
	ttt_manager.save_game(ttt_game);

	string first_player = "O";
	ttt_game.start_game(first_player);
	vector<int> positions = {1,2,3,4,5,6,8,7,9};
	for (auto & pos : positions) {
		ttt_game.mark_board(pos);
		//ttt_game.display_board();
		cout << "board displayed \n";
		if(ttt_game.game_over()) {
			break;
		}
	}
	ttt_manager.save_game(ttt_game);

	ttt_manager.get_winner_total(o, x, t);

	REQUIRE(ttt_game.game_over() == true);
	REQUIRE(x == 1);
	REQUIRE(o == 1);
	REQUIRE(t == 1);
}