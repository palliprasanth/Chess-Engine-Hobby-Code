#include<array>
#include<iostream>
#include "definitions.hpp"

using namespace std;

// Counts number of ones in a bitboard
int count_bits(long long int num){
	int bits;
	for (bits = 0; num; bits++, num, num &= num-1);
	return r;
}

// Sets the index bit on the bitboard
void set_bit(long long int &num, int index){
	long long int mask = 0ULL;
	mask |= (1ULL << index);
	num |= mask;
	return;
}

// Clears the index bit on the bitboard
void clear_bit(long long int &num, int index){
	long long int mask = 0ULL;
	mask |= (1ULL << index);
	mask = ~mask;
	num &= mask;
	return;
}


void Board64to120(const array<int,64> &input, array<int,BOARD_SIZE> &output){

	int file, rank, square;
	int square64 = 0;

	for (rank = R_1; rank <= R_8; ++rank){
		for (file = F_A; file <= F_H; ++file){
			square = FR2SQ(file,rank);
			output[square] = square64;
			square64++;
		}
	}

	return;
}

void Board120to64(const array<int,BOARD_SIZE> &input, array<int,64> &output){

	int file, rank, square;
	int square64 = 0;

	for (rank = R_1; rank <= R_8; ++rank){
		for (file = F_A; file <= F_H; ++file){
			square = FR2SQ(file,rank);
			output[square64] = square;
			square64++;
		}
	}

	return;
}

void init_Boards(array<int,BOARD_SIZE> &input1, array<int,64> &input2){

	int index = 0;

	for (index = 0; index < BOARD_SIZE; ++index){
		input1[index] = 65;
	}

	for (index = 0; index < 64; ++index){
		input2[index] = 120;
	}

	Board120to64(input1, input2);
	Board64to120(input2, input1);

	return;
}


void print_bit_board(long long int num, const array<int,BOARD_SIZE> &square_120_to_64){

	int file, rank, square;

	for (rank = R_8; rank >= R_1; --rank){
		for (file = F_A; file <= F_H; ++file){
			square = square_120_to_64[FR2SQ(file,rank)];
			if ((1ULL << square) & (num)) // is non-zero
				cout << "X" ;
			else
				cout << "-";
		}
		cout << endl;
	}

	cout << endl << endl;
	return;
}