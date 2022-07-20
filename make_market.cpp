 // Fida Matin a1798239 - Matthew Parsons a1801482 - Kainalu Peters a180413
// 05/2021 University of Adelaide
// Stock Market Game
#include <string>
#include <iostream>
#include "Stock.h"
#include "Market.h"

using namespace std;

void make_market(Market *my_market){
    string *arr_sectors = my_market -> get_sectors();


    Stock *energy1 = new Stock("Woodside Petroleum Ltd", "WPL", 0, 20.00, arr_sectors); // energy
    my_market->add_stock(energy1);

    Stock *materials1 = new Stock("BHP Group Ltd", "BHP", 1, 50.00, arr_sectors); // materials
    my_market->add_stock(materials1);

    Stock *industrials1 = new Stock("Transurban Group", "TCL", 2, 15.00, arr_sectors); // industrials
    my_market->add_stock(industrials1);

    Stock *utilities1 = new Stock("Meridian Energy Ltd", "MEZ", 3, 5.00, arr_sectors); // utilities
    my_market->add_stock(utilities1);

    Stock *healthcare1 = new Stock("CSL Ltd", "CSL", 4, 285.00, arr_sectors); // healthcare
    my_market->add_stock(healthcare1);

    Stock *financials1 = new Stock("CommonWealth Bank", "CBA", 5, 100.00, arr_sectors); // financials
    my_market->add_stock(financials1);

    Stock *consumer1 = new Stock("Woolworths Group Ltd", "WOW", 6, 40.00, arr_sectors); // consumer
    my_market->add_stock(consumer1);

    Stock *it1 = new Stock("Afterpay Ltd", "APT", 7, 95.00, arr_sectors); // information tech
    my_market->add_stock(it1);

    Stock *commservices1 = new Stock("Telstra Corporation Ltd", "TLS", 8, 5.00, arr_sectors); // communication servies
    my_market->add_stock(commservices1);

    Stock *realestate1 = new Stock("Goodman Group", "GMG", 9, 20.00, arr_sectors); // real estate
    my_market->add_stock(realestate1);

}

