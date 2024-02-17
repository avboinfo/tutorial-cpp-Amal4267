#include <iostream>
using namespace std;


class TRIS{
    public:
        int griglia[3][3];

    void reset_Tabella()
    {
        for(int i = 0; i<3 ;i++)
        {
            for(int j = 0; j < 3; j++)
            {
                griglia[i][j] = 0;
            }
        }
}
    void stampa_griglia()
    {
        for(int i = 0; i<3 ;i++)
        {
            for(int j = 0; j < 3; j++)
            {
                cout << griglia [i][j] << "\t";
            }
            cout << endl;
        }
    }

    bool giocatore_uno(int x, int y)
    {
        if(x > 2 || x < 0)
            return false;

        if (y > 2 || x < 0)
            return false;
        
        if (griglia[x][y] == 1 || griglia[x][y] == 2)
            return false;

        griglia[x][y] = 1;
            return true;
        }

        bool giocatore_due(int x, int y)
    {
        if(x > 2 || x < 0)
            return false;

        if (y > 2 || x < 0)
            return false;
        
        if (griglia[x][y] == 1 || griglia[x][y] == 2)
            return false;

        griglia[x][y] = 1;
            return true;
        }
    };










int main(int argc,char const*argv[]){

    TRIS myTRIS;
    myTRIS.reset_Tabella();
    cout << "Stato iniziale!" << endl;
    myTRIS.stampa_griglia();
    int x, y;
    bool mossa_valida;
    do
    {
    cout << "Mossa del giocatore 1" << endl;
    cout << "x: ";
    cin >> x;
    cout << "y: ";
    cin >> y; 
    
    mossa_valida = myTRIS.giocatore_uno(x,y);
    } while (!mossa_valida);

    myTRIS.stampa_griglia();

    do
    {
    cout << "Mossa del giocatore 2" << endl;
    cout << "x: ";
    cin >> x;
    cout << "y: ";
    cin >> y; 
    
    mossa_valida = myTRIS.giocatore_due
    (x,y);
    } while (!mossa_valida);
    myTRIS.stampa_griglia();

    
}