#include <iostream>
#include "definitions.hpp"
#include "chess_board.hpp"
#include "helper_functions.hpp" 

using namespace std;

// #define FEN1 "8/3q1p2/8/5P2/4Q3/8/8/8 w - - 0 2 "

int main(){

	ChessBoard my_chessboard;
	PieceHashKeys my_hash_keys;

	// Initializations
	init_Boards();
	init_file_rank();
	my_hash_keys.init_Hash_Keys();
	parse_configuration(my_chessboard, START_CONFIGURATION, my_hash_keys);
	
	my_chessboard.print_board();

	print_bit_board(my_chessboard.pawns[WHITE]);
	print_bit_board(my_chessboard.pawns[BLACK]);
	print_bit_board(my_chessboard.pawns[BOTH]);
	return 0;
}