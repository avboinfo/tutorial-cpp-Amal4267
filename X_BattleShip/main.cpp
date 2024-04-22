/*
Battaglia navale
Itrbi Mohamed Amin - 20/04/2024
*/
#include <iostream>
#include "Battleship.cpp"
using namespace std;

int main(){
    cout << "Gioco della battaglia navale- Buon divertimento" << endl;
    BattleShip gioco = BattleShip();
    gioco.play();
    return 0;
    cout<<"Game over!";

}