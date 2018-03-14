#ifndef HELPER_FUNCTIONS
#define HELPER_FUNCTIONS

int count_bits(long long int num);
void set_bit(long long int &num, int index);
void clear_bit(long long int &num, int index);

void Board64to120(const array<int,64> &input, array<int,BOARD_SIZE> &output);
void Board120to64(const array<int,BOARD_SIZE> &input, array<int,64> &output);
void init_Boards(array<int,BOARD_SIZE> &input1, array<int,64> &input2);

void print_bit_board(long long int num, const array<int,BOARD_SIZE> &square_120_to_64);

#endif