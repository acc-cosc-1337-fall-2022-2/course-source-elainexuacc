//h
#include "tic_tac_toe.h"
#include <vector>
#include <string>

using std::unique_ptr;

#ifndef TicTacToeManager_H
#define TicTacToeManager_H

class TicTacToeManager {
    friend ostream& operator << (ostream& out, const TicTacToeManager& manager);

    public:
        void save_game(unique_ptr<TicTacToe>& b);
        void get_winner_total(int& o, int& w, int&t);

    private:
        vector <unique_ptr<TicTacToe>> games;
        int x_win;
        int o_win;
        int ties;

        void update_winner_count(string winner);
};