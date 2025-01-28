// Tests for tictactoe.cc
//
// Author (starting point): Russ Tuck
// Authors (everything else): Aman and Tsion

#include <iostream>
using std::cout;
using std::endl;

#include "tictactoe.h"

bool tttb_winner_vertical_test() {
    TictactoeBoard b;
    b.set(0, 0, TictactoeXO::X);
    b.set(1, 0, TictactoeXO::X);
    if (TictactoeXO::X == b.winner()) {
        cout << "tttb_winner_vertical_test() failed for 2 in a row" << endl;
        return false;
    }
    b.set(2, 0, TictactoeXO::X);
    if (TictactoeXO::X != b.winner()) {
        cout << "tttb_winner_vertical_test() failed for 3 in a row" << endl;
        return false;
    }
    return true;
}

// Tests for tictactoe.cc
// Below authored by Tsion
// winner_diagonal_test for tictactoe


bool tttb_winner_diagonal_test() {
    TictactoeBoard b;

    // Setting up a diagonal win from top-left to bottom-right
    b.set(0, 0, TictactoeXO::X);  // First row, first column
    b.set(1, 1, TictactoeXO::X);  // Second row, second column

    if (TictactoeXO::X == b.winner()) {
        cout << "tttb_winner_diagonal_test() failed for 2 in a row" << endl;
        return false;
    }

    b.set(2, 2, TictactoeXO::X);  // Third row, third column
    if (TictactoeXO::X != b.winner()) {
        cout << "tttb_winner_diagonal_test() failed for 3 in a row" << endl;
        return false;
    }

    return true;
}

// Runs tests above, and prints a message if they all pass.
// If any fail, they print their own failure messages.
int main() {
    bool result = true;
    result &= tttb_winner_vertical_test();
    result &= tttb_winner_diagonal_test();
    if (result) {
        cout << "All tests passed." << endl;
        return(0);
    }
    return(-1);
}
