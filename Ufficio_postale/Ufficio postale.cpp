#include <iostream>
#include "Coda.cpp"
using namespace std;

class UfficioPostale
{
private:
    
    string nome;
    Coda cR = Coda("ricezione", 1000);
    Coda cS = Coda("spedizione", 1000);
    Coda cF = Coda("finaziari", 1000);
    int nR = 0, nF = 0, nS = 0;
    

public:
    UfficioPostale(string nome)
    {
        this->nome = nome;
    }

    int nuovoCliente(char servizio)
    {
        switch (servizio)
        {
        case 'r':
            return cR.exit();

        case 's':
            return cS.exit();

        case 'f':
            return cF.exit();
        default:
            cout << "Questo servizio non è previsto!" << endl;
        }
    }
    int chiamaCliente(char servizio)
    {
        switch (servizio)
        {
        case 'r':
            return cR.exit();

        case 's':
            return cS.exit();

        case 'f':
            return cF.exit();
        default:
            cout << "Questo servizio non è previsto!" << endl;
        }
    }

    void stampaTabellone()
    {
        cout << "Tabellone dell'ufficio postale" << nome << endl;
    }
};