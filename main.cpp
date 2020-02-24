//
//  main.cpp
//  Chapter4Problem10
//
//  Created by Edgar Olvera on 2/22/20.
//  Copyright © 2020 Edgar Olvera. All rights reserved.
//

#include <iostream>
#include <fstream>
#include <string>
#include "Stock.hpp"
#include "StockList.hpp"

using namespace std;

void printOutputFile(const StockList&);
StockList readFile(ifstream&);
void displayHeading();


int main(int argc, const char * argv[]){
    
  
    
    ifstream infile;
    
    infile.open("file.txt");
    
    if (!infile) {
        cerr << "Input file does not exist." << endl;
        return -1;
    }
    
    StockList list = readFile(infile);
    
    displayHeading();
    cout << endl;
    list.printList();
}

void displayHeading(){
    cout << "*********" << setw(3) << "";
    cout << "First Investor's Heaven" << setw(3) << "";
    cout << "***********" << endl;
    
    cout << "*********" << setw(8) << "";
    cout << "Financial Report" << setw(7) << "";
    cout << "**********" << endl;
    
    cout << "Stock" << setw(9) << "";
    cout << "Today" << setw(15) << "";
    cout << "Previous" << setw(3) << "";
    cout << "Percent" << endl;
    
    
    cout << "Symbol"<< setw(2) << "";
    cout << "Open" << setw(3) << "";
    cout << "Close" << setw(3) << "";
    cout << "High" << setw(4) << "";
    cout << "Low" << setw(3) << "";
    cout << "Close" << setw(3) << "";
    cout << "Gain" << setw(1) << "";
    cout << "Volume"<<endl;
    
    cout << "------" << "  " << "----" << "   ";
    cout << "-----" << "   " << "----" << "    ";
    cout << "---" << "   " << "-----" << "   ";
    cout << "----" << " " << "------";
}

StockList readFile(ifstream &infile){
    string symbol{};
    float openingPrice{};
    float closingPrice{};
    float todayHigh{};
    float todayLow{};
    float prevClose{};
    int volume{};
    
    Stock stock;
    StockList list;
    
    while(infile){
        infile >> symbol >> openingPrice >> closingPrice >> todayHigh >> todayLow >> prevClose >> volume;
        stock.setStockInfo(symbol, openingPrice, closingPrice, todayHigh, todayLow, prevClose, volume);
        list.insert(stock);
    }
    
    return list;
}
