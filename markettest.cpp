#include <string>
#include <iostream>
#include "Stock.h"
#include "Market.h"

using namespace std;

extern void make_market(Market *my_market);

int main() {
    Market *m = new Market();
    make_market(m);

    vector <Stock*> arr_stock = m->get_market();

    vector <Stock*> test = arr_stock;

    for (int i = 0; i < 10; i++) {
        cout<< arr_stock[i] -> get_ticker()<< " - " << arr_stock[i] -> get_name() <<endl;
        cout<< "Price: $" << arr_stock[i] -> get_price() << endl;
        cout<< "Sector: " << arr_Mastock[i] -> get_sector() << endl << endl;

    }


    return 0;

}