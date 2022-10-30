//cpp
#include "tic_tac_toe.h"

bool TicTacToe::game_over()
{
    return check_board_full();
}

void TicTacToe::start_game(string first_player){
    if (first_player != "X" and first_player != "O") {
        cout << "first player value must be X or O";
        return;
    }
    player = first_player;
    clear_board();
}

void TicTacToe::mark_board(int position){
    pegs[position-1] = player;
    set_next_player();
}

string TicTacToe::get_player() const {
    return player;
}

void TicTacToe::display_board() const{
    int row_len = 3;
    for (int i = 0; i < pegs.size(); i++){
        if (i % 3 == 0) {
            cout << "|";
        }
        cout << pegs[i] << "|";
        if ((i + 1) % 3 == 0) {
            cout << "\n";
        }
    }
}

void TicTacToe::set_next_player(){
    player = (player == "O" ? "X" : "O");
}

bool TicTacToe::check_board_full(){
    for (auto & peg : pegs) {
        if (peg == " ") {
            return false;
        }
    }
    return true;
}

void TicTacToe::clear_board() {
    for (auto & peg : pegs) {
        peg = " ";
    }
}

