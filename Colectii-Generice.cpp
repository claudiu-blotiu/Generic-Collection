#include"CoadaGen.h"

int main()
{
    
    Persoana* a = new Persoana(1, "Alex", 20);

    Persoana* b = new Persoana(2, "Bogdan", 30);

    Persoana* c = new Persoana(3, "Claudiu", 26);

    Coada<Persoana*>* cp = new Coada<Persoana*>();


    cp->push(a);

    cp->push(b);

    cp->push(c);


    cp->pop();


    cp->show();









}

