// This file includes the definitions of the pieces and the chess board

#ifndef DEFINITION_HEADER
#define DEFINITION_HEADER

#define BOARD_SIZE 120 
// Includes two levels of padding on top and bottom and one level of padding on the sides

#define MAXGAMEMOVES 2048
// Maximum number of half-moves in a game

#define FR2SQ(f,r) ((21 + f) + (r*10))
// Converts file and rank to square number

// Piece definitions
enum{e, P, N, B, R, Q, K, p, n, b, r, q, k};
// e - empty
// P - White Pawn
// N - White Knight
// B - White Bishop
// R - White Rook
// Q - White Queen
// K - White King
// p - Black Pawn
// n - Black Knight
// b - Black Bishop
// r - Black Rook
// q - Black Queen
// k - Black King

// Rank definitions
enum{R_1, R_2, R_3, R_4, R_5, R_6, R_7, R_8, R_NONE};

// File definitions
enum{F_A, F_B, F_C, F_D, F_E, F_F, F_G, F_H, F_NONE};

// Colors
enum{BLACK, WHITE, BOTH};

// Value for each chess configuration
enum{A1 = 21, B1, C1, D1, E1, F1, G1, H1, // B1 takes 22, C1 takes 23 and so on
	A2 = 31, B2, C2, D2, E2, F2, G2, H2,
	A3 = 41, B3, C3, D3, E3, F3, G3, H3,
	A4 = 51, B4, C4, D4, E4, F4, G4, H4,
	A5 = 61, B5, C5, D5, E5, F5, G5, H5,
	A6 = 71, B6, C6, D6, E6, F6, G6, H6,
	A7 = 81, B7, C7, D7, E7, F7, G7, H7,
	A8 = 91, B8, C8, D8, E8, F8, G8, H8, NOT_SQUARE};

// Castling Moves
// Using the bit-representation to check the possible castling moves
enum{WK_c = 1, WQ_c = 2, BK_c = 4, BQ_c = 8};	

#endif