//h
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

#ifndef TicTacToe_H
#define TicTacToe_H

class TicTacToe{
    friend ostream& operator << (ostream& out, const TicTacToe& game);
    friend istream& operator >> (istream& in, TicTacToe& game);

    public:
        bool game_over();
        void start_game(string first_player);
        void mark_board(int position);
        string get_player() const;
        //void display_board() const;
        string get_winner();
        TicTacToe(int size):pegs(size*size," "){}；
    
    protected:
        vector<string> pegs;
        virtual bool check_column_win();
        virtual bool check_row_win();
        virtual bool check_diagonal_win();

        
    private:
        string player;
        string winner;
        void set_winner();
        void set_next_player();
        bool check_board_full();
        void clear_board();
};

#endif