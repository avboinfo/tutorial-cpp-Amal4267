#include <iostream> 
using namespace std;

class Coda{

    private:

    int size, start, stop;
    int * v;
    public:

    Coda(int size){
        this->size = size;
        v = new int[size];
        start = stop = 0;
    }
    void enter(int val){

        if (stop >= size) {cout <<"Coda piena"; return;}
        v[stop] = val;
        stop++;
   }

    int exit(){
        if(start >= stop) {cout <<"Coda vuota"; return 0;}
        return v[start++];

    }
    void stampa() {
        cout << "Elementi in coda:" << endl;

        for(int i = start; i < stop; i++) cout <<v[i] << endl;
        cout << "-----------------------" << endl;
    }

};                     



#include <istream>
#include "Coda.cpp"
using namespace std;

int main() {
    coda c = coda(1000);
    c.stampa();
    c.enter(100);
    c.enter(120);
    c.enter(85);
    c.exit();
    c.enter(235);
    c.stampa();
    






}
