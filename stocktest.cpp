#include <string>
#include <iostream>
#include "Stock.h"

using namespace std;

int main(){
    
    Stock a; 
    a.set_sector(5);
    a.set_name("Commonwealth Bank");
    a.set_ticker("CBA");
    a.set_price(12.30);
    
    
    cout << "Sector: " << a.get_sector() << endl;
    cout << "Name: " << a.get_name() << endl;
    cout << "Ticker: " << a.get_ticker() << endl;
    cout << "Price: " << a.get_price() << endl;
    
    return 0;
}