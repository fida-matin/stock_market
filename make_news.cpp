// Fida Matin a1798239 - Matthew Parsons a1801482 - Kainalu Peters a180413
// 05/2021 University of Adelaide
// Stock Market Game
#include <string>
#include <stdlib.h>
#include <iostream>
#include <algorithm>
#include <ctime>
#include <cstdlib>


#include "News.h"
#include "Market.h"

using namespace std;

void make_news(Market* my_market){

    string head[20] = { // Boom Headlines
        "New advancements in renewable energy technology, leading to cheaper, more efficient solar, wind and geothermal solutions.", // energy
        "Miner Strikes Gold! Newly opened mine found to have a depost of accessible minerals.", // materials
        "Government announces new grant in the budget for roads and construction.", // industrials
        "New Desalination Plant constructed.", // Utilities
        "Government produces a revision on public healthcare benefiting young adults.", //Healthcare
        "More physical banks are shutting down in favour of online banking.", // finanicals
        "Polls have found more and more people are cooking at home compared to going out to restaurants.", // consumer
        "New government incentives into R&D promotes companies to invest in digital solutions.", // IT
        "Internet access has become the biggest resource for a business.", // comm services
        "Home loan interest rates have dropped as government encourages buying over renting.", // Real estate

        "Massive oil spill leads to a loss in sea-life and shortage in oil supplies globally.",  //energy
        "Introduction of a new legislation restricts the extraction of rare earth elements.",    // materials
        "Constructive criticism! Construction industry under scrutiny after failure to meet building regulations for latest project.", // industrials
        "Public backlash on electricity providers after multiple blackouts around the country.", // utilities
        "Latest lawsuit on pharmaceutical companies results to a public victory with lowering of key drug prices.", //healthcare
        "Recent survey shows more people prefer public transport as high interest rates on car loans make it impossible to buy a car.", //financials
        "Egyptian government nationalising Suez canal, preventing key flow of import and export.", // consumer
        "New left agenda introduces more privacy laws, preventing tracking and monetisation of ads.",// IT
        "5G roll-out has stagnated due to lack of infrastructure for mobile networks.",// comm services
        "Housing prices have gone through the roof as demand for buying increases exponentially.",// Real estate
    };

    int sectors[20] = { 0,1,2,3,4,5,6,7,8,9,
                        0,1,2,3,4,5,6,7,8,9};

    vector <News*> original;

    Boom *b1 = new Boom();
    b1 -> set_headline(head[0]);
    b1 -> set_sector(sectors[0]);
    b1 -> set_change();

    original.push_back(b1);

    Boom *b2 = new Boom();
    b2 -> set_headline(head[1]);
    b2 -> set_sector(sectors[1]);
    b2 -> set_change();

    original.push_back(b2);

    Boom *b3 = new Boom();
    b3 -> set_headline(head[2]);
    b3 -> set_sector(sectors[2]);
    b3 -> set_change();

    original.push_back(b3);

    Boom *b4 = new Boom();
    b4 -> set_headline(head[3]);
    b4 -> set_sector(sectors[3]);
    b4 -> set_change();

    original.push_back(b4);

    Boom *b5 = new Boom();
    b5 -> set_headline(head[4]);
    b5 -> set_sector(sectors[4]);
    b5 -> set_change();

    original.push_back(b5);

    Boom *b6 = new Boom();
    b6 -> set_headline(head[5]);
    b6 -> set_sector(sectors[5]);
    b6 -> set_change();

    original.push_back(b6);

    Boom *b7 = new Boom();
    b7 -> set_headline(head[6]);
    b7 -> set_sector(sectors[6]);
    b7 -> set_change();

    original.push_back(b7);

    Boom *b8 = new Boom();
    b8 -> set_headline(head[7]);
    b8 -> set_sector(sectors[7]);
    b8 -> set_change();

    original.push_back(b8);

    Boom *b9 = new Boom();
    b9 -> set_headline(head[8]);
    b9 -> set_sector(sectors[8]);
    b9 -> set_change();

    original.push_back(b9);

    Boom *b10 = new Boom();
    b10 -> set_headline(head[9]);
    b10 -> set_sector(sectors[9]);
    b10 -> set_change();

    original.push_back(b10);

    Crash *c1 = new Crash();
    c1 -> set_headline(head[10]);
    c1 -> set_sector(sectors[10]);
    c1 -> set_change();

    original.push_back(c1);

    Crash *c2 = new Crash();
    c2 -> set_headline(head[11]);
    c2 -> set_sector(sectors[11]);
    c2 -> set_change();

    original.push_back(c2);

    Crash *c3 = new Crash();
    c3 -> set_headline(head[12]);
    c3 -> set_sector(sectors[12]);
    c3 -> set_change();

    original.push_back(c3);

    Crash *c4 = new Crash();
    c4 -> set_headline(head[13]);
    c4 -> set_sector(sectors[13]);
    c4 -> set_change();

    original.push_back(c4);

    Crash *c5 = new Crash();
    c5 -> set_headline(head[14]);
    c5 -> set_sector(sectors[14]);
    c5 -> set_change();

    original.push_back(c5);

    Crash *c6 = new Crash();
    c6 -> set_headline(head[15]);
    c6 -> set_sector(sectors[15]);
    c6 -> set_change();

    original.push_back(c6);

    Crash *c7 = new Crash();
    c7 -> set_headline(head[16]);
    c7 -> set_sector(sectors[16]);
    c7 -> set_change();

    original.push_back(c7);

    Crash *c8 = new Crash();
    c8 -> set_headline(head[17]);
    c8 -> set_sector(sectors[17]);
    c8 -> set_change();

    original.push_back(c8);

    Crash *c9 = new Crash();
    c9 -> set_headline(head[18]);
    c9 -> set_sector(sectors[18]);
    c9 -> set_change();

    original.push_back(c9);

    Crash *c10 = new Crash();
    c10 -> set_headline(head[19]);
    c10 -> set_sector(sectors[19]);
    c10 -> set_change();

    original.push_back(c10);

    srand ( unsigned ( time(0) ) );
    int randnum[20];
    for (int i = 0; i < 20; i++){
        randnum[i] = i;
    }

    random_shuffle ( begin(randnum), end(randnum) ); //outside resource

    for (int i=0; i<20; i++) {
        my_market->add_news(original[randnum[i]]);
    }
}