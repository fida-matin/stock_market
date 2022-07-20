#include <string>
#include <iostream>
#include <stdlib.h>
#include "Event.h"
#include "Stock.h"


using namespace std;

Event::Event(){
    headline = "";
    size = 0
    price_change = 0;
}

Event::Event(vector<Stock*> stocks,int market_size) {
    news = new News(); // load dictionary here
    headline = "";
    size = market_size;
    price_change = news -> get_change();
    market = stocks;    // use variable size to make whole market
                        // each stock should be named as a number
}

void Event::set_price_change(Stock* stock, double price_change){
    for (int i = 0; i < size; i++) {
        if (stock == i) {
            double cost = stocks[i].get_price();
            cost = cost*price_change;
            stocks[i].set_price(cost);
        }
    }
}

void Event::set_whole_sector_change(string sector, double price_change){
    for (int i = 0; i < size; i++) {
        if (stocks[i].get_sector() == sector) {
            cost = cost*price_change;
            stocks[i].set_price(cost);
        }
    }
}


void Event::set_headline(){
    int rnum = rand() % 4;
    headline = news[rnum];
    price_change = news -> get_percent_change(rnum);
}

string Event::get_headline(){
    return headline;
}

double Event::get_price_change(){
    return price_change;
}

Event::~Event(){

}