#include "chess.h"



//construtores:

table::table(){//posição inicial
    int i;
    strcpy(board[0],"RNBQKBNR");
    strcpy(board[1],"PPPPPPPP");
    strcpy(board[6],"pppppppp");
    strcpy(board[7],"rnbqkbnr");
    
    for(i=2;i<6;i++)
        strcpy(board[i],"        ");
}

//a partir de fenn



//exibição
void table::print(){
    int i;
    cout << "  ABCDEFGH\n";
    for(i=0;i<8;i++)
        cout << i + 1 << ' ' << board[i] << "\n";

}






