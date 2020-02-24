//
//  StockList.hpp
//  Chapter4Problem10
//
//  Created by Edgar Olvera on 2/23/20.
//  Copyright © 2020 Edgar Olvera. All rights reserved.
//

#ifndef StockList_hpp
#define StockList_hpp

#include <iostream>
#include <vector>
#include <algorithm>
#include "Stock.hpp"

class StockList {
    std::vector<float> indexByGain;
    std::vector<Stock> list;
    float totalAssets = 0;
public:
    void insert(const Stock &item);
    bool search(const Stock &item);
    void printList();
    
};

#endif /* StockList_hpp */
