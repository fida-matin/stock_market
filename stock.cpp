// Fida Matin a1798239 - Matthew Parsons a1801482 - Kainalu Peters a180413
// 05/2021 University of Adelaide
// Stock Market Game
#include <string>
#include <iostream>
#include "Stock.h"

using namespace std;

Stock::Stock(){

    name = "?";
    sector="?";
    ticker="?";
    price=0;

}

Stock::Stock(string myname, string myticker, int mysector, double myprice, string *sectors){
    name = myname;
    ticker = myticker;
    price = myprice;
    arr_sector = sectors;
    sector = arr_sector[mysector];

}

void Stock::set_sector(int new_sector){

    sector = arr_sector[new_sector];

}

void Stock::set_name(string new_name){

    name=new_name;

}

void Stock::set_ticker(string new_ticker){

    ticker=new_ticker;

}

void Stock::set_price(double new_price){

    price=new_price;

}

string Stock::get_sector(){

    return sector;

}

string Stock::get_name(){

    return name;
}

double Stock::get_price(){

    return price;

}

string Stock::get_ticker(){

    return ticker;

}

Stock::~Stock(){

}