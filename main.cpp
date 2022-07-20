// Fida Matin a1798239 - Matthew Parsons a1801482 - Kainalu Peters a180413
// 05/2021 University of Adelaide
// Stock Market Game
#include <string>
#include <iostream>
#include <algorithm>
#include <limits>

#include "Portfolio.h"
#include "Stock.h"
#include "Market.h"
#include "News.h"


using namespace std;

extern void make_market(Market* my_market);
extern void make_news(Market* my_market);
extern void purchase(Portfolio* your_portfolio, Market* my_market);
extern void weekly_update(Market* my_market,Portfolio* your_portfolio, int week);

int main(){
    // initialise market
    Market *my_market = new Market();
    make_market(my_market);
    make_news(my_market);
    make_news(my_market);

    vector <Stock*> arr_market = my_market->get_market();
    int week =0; // initialising week counter

    // Begin Interface
    cout<<"Welcome to the Stock market!\n\nYou have $1M, choose your stocks wisely and see how much profit you can make in a year!\n";

    // Intialise base portfolio
    Portfolio* your_portfolio = new Portfolio();
    your_portfolio -> set_budget(1000000.00);
    int number_shares=0;

    //start monthly cycle of game
    for (int month = 0; month < 2; month++) {

        //code prints out your stats at the start of each month
        cout.precision(2); // always uses two deicmal points
        cout<<"\nYour current budget to spend is $";
        cout << fixed << your_portfolio -> get_budget();
        cout << " and your current portfolio value is $"  << your_portfolio -> get_current_value() << "."<< endl;

        //conditional %change for the first week
        if (week==0){

            cout<< "That is a change of " << fixed << 0 << "%.\n" << endl;

        }

        //%change for other weeks
        if (week!=0){

            cout<< "That is a change of " << fixed << your_portfolio -> get_change() << "%.\n" << endl;
            cout<< "Enter any key to continue" <<endl;
            int space;
            cin >> space;
            cout<< "Month: ("<< month <<")\nThese are the prices for stocks this month:\n\n";
            for (int i = 0; i < 10; i++) {
                cout<< arr_market[i] -> get_ticker()<< " - $" <<  arr_market[i] -> get_price() << endl;

            }
            cout << endl;

        }

        //set past value as value at start of the month
         your_portfolio -> set_past_value();

        for (int p = 0; p < 4; p++){
            int y=0;
            while (y==0){

                // Buying stock
                cout<<"Press any number to edit your portfolio or 1 to skip time:\n";
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
                    break;
                }
                purchase(your_portfolio, my_market);

                // selling stocks

                int z=0;
                while (z == 0){

                    // input to choose whether you sell stocks or not
                    cout << "Enter 0 to sell stocks in your portfolio or 1 to go back to portfolio:" << endl;
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

                    for (int i=0; i<owned.size(); i++) {
                        cout <<""<< owned[i] -> get_ticker()<< endl;
                    }
                    cout << endl;

                    string selected_ticker="abc";
                    cout<<"What is the ticker of the stock you want to sell?" << endl<<endl;
                    cin >> selected_ticker;
                    while(selected_ticker != "WPL" || "BHP" || "TCL" || "MEZ" || "CSL" || "CBA" || "WOW" || "APT" || "TLS" || "GMG"){
                        cout << "Ticker Unavalible. Try again: " << endl;
                        cin >> selected_ticker;
                    }
                    your_portfolio -> delete_stock(selected_ticker);
                }

            }

              // print the news headling and run the events here to alter stock prices
            weekly_update(my_market, your_portfolio, week);
            week++;
        }

        your_portfolio -> update_portfolio_value();

    }

    //game finsihing output
    cout << "Congratulations, you have finished the game!"<< endl;

    cout << "You finished with a total portfolio value of $" << fixed << your_portfolio -> get_current_value() << ". That is a total percentage change of " ;

    if (your_portfolio->get_current_value()<1000000){
    cout << fixed << 100-(your_portfolio->get_current_value()/1000000)*100;
    }
    if (your_portfolio->get_current_value()>1000000){
    cout << fixed << -100+(your_portfolio->get_current_value()/1000000)*100;
    }
    else{
    cout << fixed << 100-(your_portfolio->get_current_value()/1000000)*100;
    }
    cout << "%." << endl;

    return 0;


}






