#include <iostream>
#include "definitions.hpp"
#include "chess_board.hpp"
#include "helper_functions.hpp" 

using namespace std;

void main(){

	ChessBoard my_chessboard;

	array<int,BOARD_SIZE> square_120_to_64;
	array<int,64> square_64_to_120;
	init_Boards(square_120_to_64, square_64_to_120);

	// Checking bitboard pawn addition and deletion
	// long long int temp= 0ULL;
	// cout << "Start" << endl;
	// print_bit_board(temp, square_120_to_64);

	// set_bit(temp, square_120_to_64[E5]);
	// cout << "Mid" << endl;
	// print_bit_board(temp, square_120_to_64);

	// clear_bit(temp, square_120_to_64[E5]);
	// cout << "End" << endl;
	// print_bit_board(temp, square_120_to_64);


	// Checking 120 and 64 indexing
	// for (int index = 0; index < BOARD_SIZE; ++index){
	// 	if(index%10 == 0)
	// 		cout << endl;
	// 	cout << square_120_to_64[index] << " ";
	// }

	// cout << endl << endl;

	// for (int index = 0; index < 64; ++index){
	// 	if(index%8 == 0)
	// 		cout << endl;
	// 	cout << square_64_to_120[index] << " ";
	// }

	// cout << endl;

	return;
}