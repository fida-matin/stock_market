# Course: Object Oriented Programming
# Major Practical
# Authors: Matt Parsons, Fida Matin, Kai Peters
# Student ID: a1801482, a1798239, a180413
# Description: Makefile for Stock Market Game

# default target is all
all: main

main: Stock.o Portfolio.o News.o Market.o Weekly_update.o Purchase.o Make_market.o Make_news.o main.o
	clang++ Stock.o Portfolio.o News.o Market.o Weekly_update.o Purchase.o Make_market.o Make_news.o main.o -o main

#g++ Android.o Sporty.o Smart.o Bro.o main.o Names_array.o Ages_array.o Robot_display.o -o main

Stock.o: stock.cpp Stock.h
	g++ -c stock.cpp -o Stock.o

Portfolio.o: portfolio.cpp Portfolio.h
	g++ -c portfolio.cpp -o Portfolio.o

# the events.o object file needs recompiled if events.cpp or events.h changes
News.o: news.cpp News.h
	g++ -c news.cpp -o News.o

Market.o: market.cpp Market.h
	g++ -c market.cpp -o Market.o

Purchase.o: purchase.cpp
	g++ -c purchase.cpp -o Purchase.o

Weekly_update.o: weekly_update.cpp
	g++ -c weekly_update.cpp -o Weekly_update.o

Make_market.o: make_market.cpp
	g++ -c make_market.cpp -o Make_market.o

Make_news.o: make_news.cpp
	g++ -c make_news.cpp -o Make_news.o

# the driver.o object file needs recompiled if driver.cpp or Person.h changes
main.o: main.cpp Stock.o Portfolio.o News.o Market.o Weekly_update.o Purchase.o Make_market.o Make_news.o
	g++ -c main.cpp -o main.o

stocktest: Stock.o stock.cpp
	clang++ -o stockTest stocktest.cpp Stock.o

portfoliotest: Portfolio.o portfolio.cpp
	clang++ -o portfoliotest portfoliotest.cpp Portfolio.o

markettest: Market.o market.cpp
	clang++ -o markettest markettest.cpp Market.o

newstest: News.o news.cpp
	clang++ -o newstest newstest.cpp News.o



#Tests: stockTest portfolioTest sectorsTest eventsTest
#	./stocktest
#	./portfoliotest
#	./markettest
	#./eventtest
#	./run <input.txt | diff - expectedOutput.txt

# clean removes all object files and the compiled executable
clean:
		rm -f *.o main