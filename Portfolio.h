// Fida Matin a1798239 - Matthew Parsons a1801482 - Kainalu Peters a180413
// 05/2021 University of Adelaide
// Stock Market Game
#ifndef PORTFOLIO_H
#define PORTFOLIO_H

#include "Stock.h"
#include <string>
#include <iostream>
#include <vector>

using namespace std;

class Portfolio
{
    private:
    vector <Stock*> vec_stocks;
    vector <int> num_shares;
    int number_of_stocks;
    double budget;
    double past_value;
    double current_value;
    double change;

    public:

    Portfolio();
    void set_budget(double new_budget);
    double get_budget();

    void set_past_value();
    double get_past_value();
    double get_current_value();
    void update_portfolio_value();
    double get_change();

    void buy_stock(Stock* new_stock, int number_of_shares);
    void delete_stock(string deleted_ticker);
    vector <Stock*> get_stocks();


    ~Portfolio();

};

#endif