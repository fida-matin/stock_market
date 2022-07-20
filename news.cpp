// Fida Matin a1798239 - Matthew Parsons a1801482 - Kainalu Peters a180413
// 05/2021 University of Adelaide
// Stock Market Game
#include <string>
#include <stdlib.h>
#include <iostream>
#include "News.h"

using namespace std;

News::News(){
    headline="?";
    sector=0;

}

News::News(string myheadline, int mysector) {
    headline = myheadline;
    sector = mysector;
}

void News::set_headline(string myheadline) {
    headline = myheadline;
}

void News::set_sector(int mysector) {
    sector = mysector;
}

string News::get_headline() {
    return headline;
}

int News::get_sector() {
    return sector;

}

double News::get_change(){

    return 0;

}

void News::set_change(){



}

News::~News(){

}

Boom::Boom(){



}

void Boom::set_change(){

    change_boom+=(rand()%25+5)*0.01;

}

double Boom::get_change(){

    return change_boom;

}

Boom::~Boom(){

}

Crash::Crash(){



}

void Crash::set_change(){

    change_crash-=(rand()%25+5)*0.01;

}


double Crash::get_change(){

    return change_crash;

}

Crash::~Crash(){

}

