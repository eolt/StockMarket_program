//
//  Stock.cpp
//  Chapter4Problem10
//
//  Created by Edgar Olvera on 2/22/20.
//  Copyright © 2020 Edgar Olvera. All rights reserved.
//

#include "Stock.hpp"

Stock::Stock(std::string sy, float oP, float cP, float high, float low, float prev, int vol) {
    setStockInfo(sy, oP, cP, high, low, prev, vol);
}

void Stock::setStockInfo(std::string sy, float oP, float cP, float high, float low, float prev, int vol) {
    symbol = sy;
    openingPrice = oP;
    closingPrice = cP;
    todayHigh = high;
    todayLow = low;
    prevClose = prev;
    volume = vol;
    
    percentGain = ((closingPrice - prevClose)/prevClose) * 100;
}

void Stock::printStockInfo() {
    std::cout << std::fixed;
    std::cout << std::setprecision(2);
    std::cout << std::left << std::setw(5);
    std::cout << symbol << " ";
    std::cout << std::right << std::setw(6);
    std::cout << getOpeningPrice() << " ";
    std::cout << std::setw(7);
    std::cout << getClosingPrice() << " ";
    std::cout << std::setw(6);
    std::cout << getHighPrice() << " ";
    std::cout << std::setw(6);
    std::cout << getLowPrice() << " ";
    std::cout << std::setw(7);
    std::cout << getPrevPrice() << " ";
    std::cout << std::setw(6);
    printPercentGain();
    std::cout << std::setw(7);
    std::cout << getNumShares();
}

float Stock::getOpeningPrice() const {
    return openingPrice;
}

float Stock::getClosingPrice() const {
    return closingPrice;
}

float Stock::getHighPrice() const {
    return todayHigh;
}

float Stock::getLowPrice() const {
    return todayLow;
}

float Stock::getPrevPrice() const {
    return prevClose;
}

float Stock::getPercentGain() const {
    return  percentGain;
}

void Stock::printPercentGain() {
    std::cout << std::setprecision(2);
    std::cout << getPercentGain() << "%";
}

int Stock::getNumShares() const {
    return volume;
}

bool Stock::operator<(const Stock &right) {
    return symbol < right.symbol;
}

bool Stock::operator>(const Stock &right) {
    return symbol > right.symbol;
}

bool Stock::operator==(const Stock &right) {
    return (symbol == right.symbol) && (openingPrice == right.openingPrice) && (closingPrice == right.closingPrice);
}

std::ostream& operator<<(std::ostream& os, const Stock &right){
    os << std::fixed;
    os << std::setprecision(2);
    os << std::left << std::setw(5);
    os << right.symbol;
    os << " ";
    os << std::right << std::setw(6);
    os << right.getOpeningPrice();
    os << " ";
    os << std::setw(8);
    os << right.closingPrice;
    os << " ";
    os << std::setw(6);
    os << right.todayHigh;
    os << " ";
    os << std::setw(6);
    os << right.todayLow;
    os << " ";
    os << std::setw(7);
    os << right.prevClose;
    os << " ";
    os << std::setprecision(3);
    os << std::setw(7);
    os << right.getPercentGain();
    os << "% ";
    os << std::setw(8);
    os << right.volume;

    return os;
}

std::istream& operator>>(std::istream& iso, Stock &right){
    iso >> right.symbol;
    iso >> right.openingPrice;
    iso >> right.closingPrice;
    iso >> right.todayHigh;
    iso >> right.todayLow;
    iso >> right.prevClose;
    iso >> right.volume;
    return iso;
}






















