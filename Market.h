// Fida Matin a1798239 - Matthew Parsons a1801482 - Kainalu Peters a180413
// 05/2021 University of Adelaide
// Stock Market Game
#ifndef MARKET_H
#define MARKET_H

#include <iostream>
#include <string>

#include "Stock.h"
#include "Portfolio.h"
#include "News.h"

using namespace std;


class Market
{
    private:

    vector <Stock*> market_stocks;
    vector <News*> news_array;
    string *sectors;


    public:

    Market();

    void add_stock(Stock *mystock);
    void add_news(News *mynews);

    vector <Stock*> get_market();
    vector <News*> get_news();
    string* get_sectors();

    ~Market();

};
#endif

