//cpp
#include "tic_tac_toe.h"

bool TicTacToe::game_over()
{
    if (check_row_win() or check_column_win() or check_diagonal_win()) {
        set_winner();
        return true;
    }
    else if (check_board_full()){
        winner = "C";
        return true;
    }
    else{
        return false;
    }
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

string TicTacToe::get_winner() {
    return winner;
}

//private functions
bool TicTacToe::check_column_win(){
    if(pegs[0] == "O" && pegs[3] == "O" && pegs[6] == "O"){
        return true;
    }
    if(pegs[0] == "X" && pegs[3] == "X" && pegs[6] == "X"){
        return true;
    }
    if(pegs[1] == "O" && pegs[4] == "O" && pegs[7] == "O"){
        return true;
    }
    if(pegs[1] == "X" && pegs[4] == "X" && pegs[7] == "X"){
        return true;
    }
    if(pegs[2] == "O" && pegs[5] == "O" && pegs[8] == "O"){
        return true;
    }
    if(pegs[2] == "X" && pegs[5] == "X" && pegs[8] == "X"){
        return true;
    }

    return false;
}

bool TicTacToe::check_row_win(){
    if(pegs[0] == "O" && pegs[1] == "O" && pegs[2] == "O"){
        return true;
    }
    if(pegs[0] == "X" && pegs[1] == "X" && pegs[2] == "X"){
        return true;
    }
    if(pegs[3] == "O" && pegs[4] == "O" && pegs[5] == "O"){
        return true;
    }
    if(pegs[3] == "X" && pegs[4] == "X" && pegs[5] == "X"){
        return true;
    }
    if(pegs[6] == "O" && pegs[7] == "O" && pegs[8] == "O"){
        return true;
    }
    if(pegs[6] == "X" && pegs[7] == "X" && pegs[8] == "X"){
        return true;
    }
    
    return false;
}

bool TicTacToe::check_diagonal_win(){
    if(pegs[0] == "O" && pegs[4] == "O" && pegs[8] == "O"){
        return true;
    }
    if(pegs[0] == "X" && pegs[4] == "X" && pegs[8] == "X"){
        return true;
    }
    if(pegs[6] == "O" && pegs[4] == "O" && pegs[2] == "O"){
        return true;
    }
    if(pegs[6] == "X" && pegs[4] == "X" && pegs[2] == "X"){
        return true;
    }

    return false;
}

void TicTacToe::set_winner(){
    winner = (player == "O" ? "X" : "O");
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

