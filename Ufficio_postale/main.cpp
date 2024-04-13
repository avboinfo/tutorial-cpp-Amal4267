
#include <iostream>
#include "Ufficio postale.cpp"
using namespace std;

int main()
{

    UfficioPostale up = UfficioPostale("Bologna");

    up.nuovoCliente('r');
    up.nuovoCliente('s');
    up.nuovoCliente('r');
    up.nuovoCliente('r');
    up.nuovoCliente('f');
    up.nuovoCliente('f');
    up.chiamaCliente('s');
    up.chiamaCliente('r');
    up.nuovoCliente('r');
    up.chiamaCliente('r');
    up.chiamaCliente('f');
    up.chiamaCliente('s');
}
