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

void purchase(Portfolio* your_portfolio, Market* my_market) {

    vector <Stock*> arr_market = my_market -> get_market();

    int sector_number;
    int number_shares;

    int check = 1;
    while (check == 1) {

        cout<<"Select a sector (Type in number shown):\n 0. Energy\n 1. Materials\n 2. Industrials\n 3. Utilities\n 4. Healthcare\n 5. Financials\n 6. Consumer\n 7. Information Technology\n 8. Communication Services\n 9. Real Estate\n";
        cin >> sector_number;
        while(1){
                    if (cin.fail()){
                        cin.clear();
                        cin.ignore(10, '\n');
                        cout << "INVALID" << endl << "Try again: ";
                        cin >> check;
                    }
                    if (!cin.fail()){
                        break;
                    }
                }
        cout<<endl;

        while (sector_number<0 || sector_number>9){
            cout << "INVALID ENTRY \nTry again: " << endl;
            cin >> sector_number;
            while(1){
                    if (cin.fail()){
                        cin.clear();
                        cin.ignore(10, '\n');
                        cout << "INVALID" << endl << "Try again: ";
                        cin >> check;
                    }
                    if (!cin.fail()){
                        break;
                    }
                }
            cout<<endl;
        }

        cout<<"Select a Stock: " << endl;

        cout<< arr_market[sector_number] -> get_ticker()<< " - " << arr_market[sector_number] -> get_name() <<endl;

        cout<< "Price: $" << arr_market[sector_number] -> get_price() << endl;
        cout<< "Sector: " << arr_market[sector_number] -> get_sector() << endl << endl;

        // Amount of stock already owned?
        cout<<"Press 0 to purchase this stock or press 1 to select a different sector." << endl;
        cin >> check;
        while (check != 0 && check != 1) {
            cout << "INVALID\n";
            cout << "Please enter a valid number:\n";
            cin >> check;
            while(1){
                    if (cin.fail()){
                        cin.clear();
                        cin.ignore(10, '\n');
                        cout << "INVALID" << endl << "Try again: ";
                        cin >> check;
                    }
                    if (!cin.fail()){
                        break;
                    }
                }
        }
    }


    cout<<"How many shares would you like to buy of this stock?\n";
    cin >>number_shares;
    while(1){
                    if (cin.fail()){
                        cin.clear();
                        cin.ignore(10, '\n');
                        cout << "INVALID" << endl << "Try again: ";
                        cin >> number_shares;
                    }

                    if (number_shares<0) {
                        cin.clear();
                        cin.ignore(10, '\n');
                        cout << "INVALID" << endl << "Try again: ";
                        cin >> number_shares;
                    }


                    if (!cin.fail()){
                        break;
                    }
                }


    while( (number_shares*(arr_market[sector_number] -> get_price())) > (your_portfolio -> get_budget()) ){
         cout<<"You only have $" << your_portfolio -> get_budget() << " avaliable to spend, please enter a valid amount."<< endl;
         cin >>number_shares;
         while(1){
                    if (cin.fail()){
                        cin.clear();
                        cin.ignore(10, '\n');
                        cout << "INVALID" << endl << "Try again: ";
                        cin >> number_shares;
                    }
                    if (!cin.fail()){
                        break;
                    }
                }
    }

    cout<<"That is $" << number_shares*(arr_market[sector_number] -> get_price()) << " worth of the stock." << endl;
    your_portfolio -> buy_stock(arr_market[sector_number], number_shares);

    cout << "You have successfully purchased " << number_shares << " shares of " << arr_market[sector_number] -> get_ticker() << "."<< endl<<endl;

}