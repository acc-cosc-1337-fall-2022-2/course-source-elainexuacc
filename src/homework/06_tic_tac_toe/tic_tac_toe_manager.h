//h
#include "tic_tac_toe.h"
#include <vector>
#include <string>

#ifndef TicTacToeManager_H
#define TicTacToeManager_H

class TicTacToeManager {
    friend ostream& operator << (ostream& out, const TicTacToeManager& manager);

    public:
        void save_game(TicTacToe b);
        void get_winner_total(int& o, int& w, int&t);

    private:
        vector <TicTacToe> games;
        int x_win;
        int o_win;
        int ties;

        void update_winner_count(string winner);
};