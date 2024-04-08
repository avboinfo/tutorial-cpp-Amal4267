#include <iostream>
#include "Coda.cpp"
using namespace std;

class UfficioPostale {
    private:
        string nome;
        Coda cR, cF, cS;
        int nR, nF, nS;

}
    public:
        UfficioPostale( string nome ){
            this->nome = nome;
            cR = coda("ricezione",1000);
            cS = coda("s",1000);
            cF = coda("finaziari",1000);
            nR = nS = nF = 100;



        }

        int nuovoCliente( char servizio ){
            switch( servzio ){
                case 'r' :
                    return cR.exit();
                
                case 's' :
                    return cS.exit();

                case 'f' :
                    return cF.exit();
                default:
                    cout << Questo servizio non è previsto! << endl;

            }
        }


void stampaTabellone(){
    cout << "Tabellone dell'ufficio postale" << nome << endl;
}