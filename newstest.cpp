#include <string>
#include <stdlib.h>
#include <iostream>
#include "News.h"
#include "Market.h"

using namespace std;

extern void make_news(Market* my_market);

int main() {

    Market *m = new Market();
    make_news(m);
    make_news(m);

    vector <News*> b = m->get_news();

    for (int i = 0; i < 40; i++){

        cout<< b[i]->get_sector();
        cout<< " Change: " << b[i]->get_change()<< endl << endl;

        cout<< b[i]->get_headline()<< endl<< endl;

    }

    return 0;
}