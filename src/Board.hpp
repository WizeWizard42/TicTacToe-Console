#pragma once
#include <ostream>
#include <array>

class Board 
{
    public:
        Board();
    
        char getTile(int, int);
        int setTile(int, int, char);
        
        std::array<std::array<char, 3>, 3> getBoard();
        
        friend std::ostream& operator<<(std::ostream&, const Board&);
        bool checkWin(char);
    private:
        std::array<std::array<char, 3>, 3> board_;
};

std::ostream& operator<<(std::ostream&, const Board&);