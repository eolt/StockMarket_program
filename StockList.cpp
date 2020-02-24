//
//  StockList.cpp
//  Chapter4Problem10
//
//  Created by Edgar Olvera on 2/23/20.
//  Copyright © 2020 Edgar Olvera. All rights reserved.
//

#include "StockList.hpp"

void StockList::insert(const Stock &item) {
    if(!search(item)){
        list.push_back(item);
        indexByGain.push_back(item.getPercentGain());
        
        sort(indexByGain.begin(), indexByGain.end());
        
        totalAssets += item.getClosingPrice() * item.getNumShares();
    }
}

void StockList::printList() {
    for(float i : indexByGain){
        for (auto j : list){
            if(j.getPercentGain() ==  i){
                j.printStockInfo();
                std::cout << std::endl;
                break;
            }
        }
    }
    std::cout <<"Closing Assets:  $" << totalAssets << std::endl;
}

bool StockList::search(const Stock &item) {
    for(Stock i : list){
        if (i == item)
            return true;
    }
    return false;
}


