#ifndef BOARD_H
#define BOARD_H

//Special characters
//▴▾◂▸◾♒╔ ╗╚ ╝║═
struct Cell
{
	size_t row;
	size_t col;
};

class Board
{
	private:
		size_t rows;
		size_t cols;
		char * board;
	public:
		Board(size_t r, size_t c) : rows{r}, cols{c}{board = new char [rows*cols];}
		~Board(){delete board;}
};

#endif