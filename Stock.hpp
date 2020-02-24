//
//  Stock.hpp
//  Chapter4Problem10
//
//  Created by Edgar Olvera on 2/22/20.
//  Copyright © 2020 Edgar Olvera. All rights reserved.
//

#ifndef Stock_hpp
#define Stock_hpp

#include <string>
#include <iomanip>
#include <iostream>

class Stock {
    std::string symbol;
    
    float openingPrice;
    float closingPrice;
    float todayHigh;
    float todayLow;
    float prevClose;
    
    int volume;
    float percentGain;
public:
    Stock(std::string sy = "", float openPrice = 0.0, float closePrice = 0.0, float high = 0.0, float low = 0.0, float prev = 0.0, int vol = 0);
    void setStockInfo(std::string sy, float openPrice, float closePrice, float high, float low, float prev, int vol);
    void printStockInfo();

    float getOpeningPrice() const;
    float getClosingPrice() const;
    float getHighPrice() const ;
    float getLowPrice() const ;
    float getPrevPrice() const;
    
    float getPercentGain() const;
    void printPercentGain();
    
    int getNumShares() const;
    
    bool operator==(const Stock &right);
    bool operator<(const Stock &right);
    bool operator>(const Stock &right);
    friend std::ostream& operator<<(std::ostream&, const Stock&);
    friend std::istream& operator>>(std::istream&, Stock&);
};

#endif /* Stock_hpp */
