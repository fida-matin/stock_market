#ifndef EVENT_H
#define EVENT_H

#include "Stock.h"
#include "News.h"

#include <string>
#include <iostream>

using namespace std;

class Event
{
    private:
    string headline;        // specific headline
    News* news;           // array of all the news

    string* sector_change;
    int num_sectors_changed;
    int size

    double price_change; // price change should be set as how much new price should be (i.e. 95% not 5%)
    vector <Stock**> vec_stocks;

    public:
    Event();
    Event(Stock *stocks, int market_size);                            // Constructors

    Stock *get_Stocks();                // Returns array of stocks

    double get_price_change();             // Return % change in price

    void set_price_change(Stock* stock, double price_change);
    void set_whole_sector_change(string sector, double price_change);

    string set_headline();
    string get_headline();
    ~Event();

};

#endif
