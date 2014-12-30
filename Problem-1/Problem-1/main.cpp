//
//  main.cpp
//  Problem-1
//
//  Created by Niraj Pant on 12/30/14.
//  Copyright (c) 2014 Niraj Pant. All rights reserved.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    int sum = 0;
    for (int i=0; i<1000; i++) {
        if (i%3 == 0 || i%5 == 0) {
            sum +=i;
        }
    }
    cout << sum;
    
    return 0;
}
