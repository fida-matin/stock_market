// Fida Matin a1798239 - Matthew Parsons a1801482 - Kainalu Peters a180413
// 05/2021 University of Adelaide
// Stock Market Game
#include <string>
#include <iostream>

#include "Portfolio.h"
#include "Stock.h"
#include "Market.h"
#include "News.h"

using namespace std;

extern void purchase(Portfolio* your_portfolio, Market* my_market);

void weekly_update(Market* my_market, Portfolio* your_portfolio, int week){
    vector <News*> arr_news = my_market->get_news();
    vector <Stock*> arr_stock = my_market->get_market();

    int val = week;

    double price_change = (arr_stock[arr_news[val]->get_sector()]->get_price()) + (arr_stock[arr_news[val]->get_sector()]->get_price())*(arr_news[val]->get_change());

    cout<< "Here is this weeks (" << week+1 << ") news headline:\n"<<endl;
    cout<<"BREAKING NEWS!\n"<<arr_news[val]->get_headline()<< endl<< endl;

    int y=0;
    while (y==0){

         // Buying stock
        cout<<"Given this news headline would you like to make any changes? \nPress 0 to edit your portfolio or 1 to continue without change:\n";
        cin >> y;
        while(1){
                    if (cin.fail()){
                        cin.clear();
                        cin.ignore(10, '\n');
                        cout << "INVALID" << endl << "Try again: ";
                        cin >> y;

                    }
                    if (!cin.fail()){
                        break;
                    }
                }
        cout<<endl;

        if (y==1) {
                cout << "A week has passed." << endl;
            break;
        }
        purchase(your_portfolio, my_market);

        // selling stocks

        int z=0;
        while (z == 0){

            cout << "Enter 0 to sell stocks in your portfolio: and 1 to go back to portfolio:" << endl;
            cin >> z;
            while(1){
                    if (cin.fail()){
                        cin.clear();
                        cin.ignore(10, '\n');
                        cout << "INVALID" << endl << "Try again: ";
                        cin >> z;
                    }
                    if (!cin.fail()){
                        break;
                    }
                }
            cout<<endl;

            if (z == 1) {
                break;
            }


            cout << "The current stocks you hold are; "<< endl;

            vector <Stock*> owned = your_portfolio -> get_stocks();
            //vector <string*> tickers;

            for (int i=0; i<owned.size(); i++) {
                cout <<" "<< owned[i] -> get_ticker()<< endl;
                //string* tick = new string(owned[i] -> get_ticker());
                //tickers[i].push_back(tick);
            }

            string selected_ticker="abc";
            cout<<"What is the ticker of the stock you want to sell?" << endl;
            cin >> selected_ticker;

            your_portfolio -> delete_stock(selected_ticker);
        }

    cout << "A week has passed." << endl;
    arr_stock[arr_news[val]->get_sector()] -> set_price(price_change);

    break;
    }
}