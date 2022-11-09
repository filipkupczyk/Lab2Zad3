#include <iostream>
#include "Bufor.h"
using namespace std;

int main()
{
   Bufor** meanbufor = new Bufor * [10];
   for (int i = 0; i < 5; i++) {
        Bufor* b = new MeanBufor(5);
        for (int j = 1; j < b->getSize() + 1; j++) {
            b->setTab(j, 0);
            b->add(j);
        }
        b->show();
        cout << "srednia: ";
        cout << b->calculate() << endl;
        meanbufor[i] = b;
    }

    for (int i = 5; i <= 10; i++) {
        Bufor* b = new MaxBufor(5);
        for (int j = 1; j < b->getSize() + 1; j++) {
            b->setTab(j, 0);
            b->add(j);
        }
        b->show();
        cout << "max: ";
        cout << b->calculate() << endl;
        meanbufor[i] = b;
    }
}
