#ifndef CHESS_BOARD_HEADER
#define CHESS_BOARD_HEADER

#include <array>
#include "definitions.hpp"

using namespace std;

// Data needed to go back by one move
class History{
public:
	// The move applied
	int move;

	// en Passant square index (if active) before the move
	int enPas;

	// Status of fifty move rule. Keeping track of number of moves without capture before the move was made
	int fiftycount;

	// Castling moves possible for the configuration before the move was made
	int castling;

	 // Unique identifier for the configuration before the move was made
	long long int position; 
};


class ChessBoard{
public:
	array<int,BOARD_SIZE> configuration;

 	// Storing the pawn configurations as a 64-bit number for white, black and both
	array<long long int, 3> pawns; 

 	// Position of the king's
	array<int, 2> kings;

	// Current side to move
	int side;

	// en Passant square index (if active)
	int enPas;

	// Status of fifty move rule. Keeping track of number of moves without capture
	int fiftycount;

 	// Number of half moves in current search
	int ply;

 	// Number of half moves in total search
	int historyply; 

	// Castling moves possible for the configuration
	int castling;

 	// Unique identifier for the configuration
	long long int position; 

 	// Number of pieces on the board
	array<int, 13> pieceNum;

 	// Number of pieces on the board by color
	array<int, 3> bigPiece; // All pieces except pawns for White, Black and Both
	array<int, 3> majorPiece; // Rooks and Queens
	array<int, 3> minorPiece; // Bishop and Knights

	// Stores the history of the entire game
	array<History,MAXGAMEMOVES> history;

	// Stores the list of pieces of the current configuration. In the worst possible case two rooks and 8 pawns can be substituting rooks
	array<array<int, 13>, 10> piece_list;

	

	ChessBoard();
	~ChessBoard();
}; 

#endif CHESS_BOARD_HEADER