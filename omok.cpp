#include<iostream>
using namespace std;

const int Empty = 0;
const int Omok = 5;
const int Max = 19;
int board[19][19];

void Result(int y, int x){
    cout << board[y][x] << "\n";
    cout << y + 1 << " " << x + 1;
    exit(0);
}

void Row(void){
    for(int y = 0; y < Max; y++){
        for(int x = 0; x <= Max - Omok; x++){
            if(board[y][x] == Empty){ continue; } 
            int cnt; 
            for(cnt = 1; cnt < Omok; cnt++){
                if(board[y][x] != board[y][x + cnt]){ break; } 
            } 
            if(cnt != Omok){ continue; } 
            if((x == Max - Omok || board[y][x + Omok] != board[y][x])
                && (x == 0 || board[y][x - 1] != board[y][x])){ Result(y, x); }  // 6목 방지
        } 
    } 
}

void Column(void){
    for(int x = 0; x < Max; x++){
        for(int y = 0; y <= Max - Omok; y++){
            if(board[y][x] == Empty){ continue; } 
            int cnt; 
            for(cnt = 1; cnt < Omok; cnt++){
                if(board[y][x] != board[y + cnt][x]){ break; } 
            } 
            if(cnt != Omok){ continue; } 
            if((y == Max - Omok || board[y + Omok][x] != board[y][x])
                && (y == 0 || board[y - 1][x] != board[y][x])){ Result(y, x); } 
        } 
    } 
}

void Upper(void){
    for(int x = 0; x <= Max - Omok; x++){
        for(int y = Omok - 1; y < Max; y++){
            if(board[y][x] == Empty){ continue; } 
            int cnt; 
            for(cnt = 1; cnt < Omok; cnt++){
                if(board[y][x] != board[y - cnt][x + cnt]){ break; } 
            } 
            if(cnt != Omok){ continue; } 
            if((y == Omok - 1 || x == Max - Omok || board[y - Omok][x + Omok] != board[y][x]) 
                && (y == Max - Omok || x == 0 || board[y + 1][x - 1] != board[y][x])){ Result(y, x); } 
        } 
    } 
}

void Lower(void){
    for(int y = 0; y <= Max - Omok; y++){
        for(int x = 0; x <= Max - Omok; x++){
            if(board[y][x] == Empty){ continue; } 
            int cnt; 
            for(cnt = 1; cnt < Omok; cnt++){
                if(board[y][x] != board[y + cnt][x + cnt]){ break; } 
            } 
            if(cnt != Omok){ continue; } 
            if((x == Max - Omok || y == Max - Omok || board[y + Omok][x + Omok] != board[y][x]) 
                && (x == 0 || y == 0 || board[y - 1][x - 1] != board[y][x])){ Result(y, x); } 
        } 
    } 
}

int main(){

    for(int i = 0; i < 19; i++){
        for(int j = 0; j < 19; j++){
            cin >> board[i][j];
        }
    }

    Row();
    Column();
    Upper();
    Lower();

    cout << 0 << "\n";
    return 0;
}
//https://jaimemin.tistory.com/1342