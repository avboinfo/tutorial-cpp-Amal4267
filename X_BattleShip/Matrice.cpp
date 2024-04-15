/*
Itrbi Mohamed Amin
3CIN 15/04/2024
*/

#include <iostream>
using namespace std;
const int DIM = 10;

class Matrice{

 private:
    char m[DIM][DIM];


 public:
    Matrice() {
        for(int i=0; i<DIM; i++)
            for(int j=0;j<10;j++)
                m[i][j] = 97 + rand()%26;
        
    }
    Matrice(int n){
        for(int i=0; i<DIM; i++)
            for(int j=0;j<DIM;j++)
                m[i][j] = n;
    }
    void stampa() {
        cout << "--------------------------------------------------------------------------" << endl;
        for(int i=0; i<DIM; i++){
            for(int j=0;j<DIM;j++){
                printf("%2d", m[i][j]);
            }
            cout << endl;
        }
        cout << "--------------------------------------------------------------------------" << endl;
    }
    void bomb() {
        int x = rand() % DIM;
        int y = rand() % DIM;
        m[x][y] = '*';
    }
    void placeShip(int len) {
        if(len <= 0 || len>=DIM) return;
        int x = rand() % (DIM-len);
        int y = rand() % (DIM);
        for (int i=0; i<len; i++) m[x][y+1] = '0';
    }
    void placeVerticalShip(int len) {
        if(len <= 0 || len>=DIM) return;
        int x = rand() % (DIM-len);
        int y = rand() % (DIM);
        for (int i=0; i<len; i++) m[x+1][y] = '0';
    }
    void placeHorizontalShip(int len) {
        if(len <= 0 || len>=DIM) return;
        int x = rand() % (DIM);
        int y = rand() % (DIM-len);
        for (int i=0; i<len; i++) m[x][y+1] = '0';
    }
    
};

int main()
{
    srand(time(NULL));
    Matrice mappa = Matrice( '_' );
    Matrice campo = Matrice( '_' );
    campo.placeHorizontalShip(3);
    campo.placeVerticalShip(4);
    campo.placeVerticalShip(2);
    campo.placeHorizontalShip(5);
    mappa.stampa();
    campo.stampa();





}