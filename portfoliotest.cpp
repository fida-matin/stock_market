#include <string>
#include <iostream>
#include "Stock.h"
#include "Portfolio.h"
#include "Market.h"

using namespace std;

extern void make_market(Market *my_market);

int main(){
    Market* my_market = new Market();
    make_market(my_market);

    vector <Stock*> stocks = my_market->get_market();

    Portfolio* p = new Portfolio();
    p -> set_budget(1000.00);

    cout<< "Your budget is: $" << p -> get_budget() <<endl;
    p -> buy_stock(stocks[0],3);
    p -> buy_stock(stocks[1],2);
    p -> set_past_value();

    vector <Stock*> owned = p -> get_stocks();

    cout<< "You are buying 3 stocks of: " << stocks[0] -> get_name() <<endl;
    cout<< "Price of this stock is: $" << stocks[0] -> get_price() << endl;
    cout<< "You are buying 2 stocks of: " << stocks[1] -> get_name() <<endl;


    stocks[0] -> set_price(12.00);

    p -> update_portfolio_value();
    cout<< "You are selling your stocks of: "<< stocks[0] -> get_name() <<endl;

    p -> delete_stock(stocks[0] -> get_ticker());

    cout << "Here are the stocks you own: " << owned.size() <<endl;

    cout<< "Your current value is: $" << p -> get_current_value() <<endl;
    return 0;
}