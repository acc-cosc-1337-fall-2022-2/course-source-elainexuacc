#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "tic_tac_toe.h"

using namespace std;
TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Verify TicTacToe") {
	TicTacToe ttt_game;
	string first_player = "X";
	vector<int> positions = {1,2,3,4,5,7,6,9,8};
	for (auto & pos : positions) {
		ttt_game.mark_board(pos);
		ttt_game.display_board();
		cout << "board displayed \n";
		cout << ttt_game.game_over();
	}
}