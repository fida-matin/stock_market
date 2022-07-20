// Fida Matin a1798239 - Matthew Parsons a1801482 - Kainalu Peters a180413
// 05/2021 University of Adelaide
// Stock Market Game
#ifndef NEWS_H
#define NEWS_H

#include <string>
#include <iostream>
#include <vector>

using namespace std;

class News{
    private:

    string headline;
    int sector;

    public:

    News();
    News(string myheadline, int mysector);

    void set_headline(string myheadline);
    void set_sector(int mysector);
    virtual void set_change()=0;

    string get_headline();
    int get_sector();
    virtual double get_change()=0;


    ~News();

};

class Boom: public News{

    private:

    double change_boom=0;

    public:

    Boom();
    double get_change();
    void set_change();
    ~Boom();

};

class Crash: public News{

    private:

    double change_crash=0;

    public:

    Crash();
    double get_change();
    void set_change();
    ~Crash();

};

#endif

