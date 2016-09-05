//
//  main.cpp
//  BloomFilter
//
//  Created by Nicolas Zuber on 9/3/16.
//  Copyright © 2016 Nicolas Zuber. All rights reserved.
//

#include <iostream>
#include "src/bloom_filter.hpp"
using namespace std;

int main(int argc, const char * argv[]) {
    
    BloomFilter* bloom = new BloomFilter();
    
    cout << bloom->getTest() << endl;
    
    return 0;
}
