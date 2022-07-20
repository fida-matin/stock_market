// Fida Matin a1798239 - Matthew Parsons a1801482 - Kainalu Peters a180413
// 05/2021 University of Adelaide
// Stock Market Game
#include <iostream>
#include <string>
#include "Portfolio.h"
#include "Stock.h"

using namespace std;

Portfolio::Portfolio(){
    current_value = 1000000;
    past_value = 1000000;
}

void Portfolio::set_budget(double new_budget){

    budget=new_budget;

}


double Portfolio::get_budget(){

    return budget;

}


void Portfolio::set_past_value(){

    past_value = current_value;

 }

void Portfolio::update_portfolio_value(){

    current_value=0;

    for (int i=0;i<(vec_stocks.size());i++){

        current_value+=(vec_stocks[i] -> get_price())*(num_shares[i]);

    }
    current_value+=budget;
}

double Portfolio::get_current_value(){

    return current_value;

}


double Portfolio::get_past_value(){

    return past_value;

}

double Portfolio::get_change(){

    change=((current_value-past_value)/past_value)*100;

    return change;

}

vector <Stock*> Portfolio::get_stocks(){

    return vec_stocks;


}


void Portfolio::buy_stock(Stock* new_stock, int number_of_shares){

            vec_stocks.push_back(new_stock);
            num_shares.push_back(number_of_shares);
            budget-=((vec_stocks.back()) -> get_price())*(num_shares.back());

}

void Portfolio::delete_stock(string deleted_ticker){



    for (int i=0;i<vec_stocks.size();i++){

        if (vec_stocks[i] -> get_ticker() == deleted_ticker){

            budget+=(vec_stocks[i] -> get_price())*(num_shares[i]);
            vec_stocks.erase(vec_stocks.begin()+i);
            num_shares.erase(num_shares.begin()+i);

            break;

        }
    }

}

Portfolio::~Portfolio(){

}