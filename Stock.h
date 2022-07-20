// Fida Matin a1798239 - Matthew Parsons a1801482 - Kainalu Peters a180413
// 05/2021 University of Adelaide
// Stock Market Game
#ifndef STOCK_H
#define STOCK_H

#include <string>
#include <iostream>

using namespace std;

class Stock{

    private:
    string *arr_sector;
    string sector;
    string name;
    string ticker;
    double price;

    public:

    Stock();
    Stock(string myname, string myticker, int mysector, double myprice, string *sectors);

    void set_sector(int new_sector);
    void set_name(string new_name);
    void set_ticker(string new_ticker);
    void set_price(double new_price);

    string get_sector();
    string get_name();
    double get_price();
    string get_ticker();

    ~Stock();

};


#endif