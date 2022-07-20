// Fida Matin a1798239 - Matthew Parsons a1801482 - Kainalu Peters a180413
// 05/2021 University of Adelaide
// Stock Market Game
#include <string>
#include <iostream>
#include <stdlib.h>
#include "Market.h"
#include "Stock.h"
#include "News.h"
#include "Portfolio.h"

using namespace std;

Market::Market(){

    sectors = new string[10];
    sectors[0] = "Energy";
    sectors[1] = "Materials";
    sectors[2] = "Industrials";
    sectors[3] = "Utilities";
    sectors[4] = "Healthcare";
    sectors[5] = "Financials";
    sectors[6] = "Consumer";
    sectors[7] = "Information Technology";
    sectors[8] = "Communication Services";
    sectors[9] = "Real Estate";

}

void Market::add_stock(Stock* mystock) {
    market_stocks.push_back(mystock);
}

void Market::add_news(News* mynews) {
    news_array.push_back(mynews);
}

vector<Stock*> Market::get_market() {
    return market_stocks;
}

vector<News*> Market::get_news() {
    return news_array;
}

string* Market::get_sectors() {

    return sectors;
}

Market::~Market() {

};
