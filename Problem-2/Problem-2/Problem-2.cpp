//
//  main.cpp
//  Problem-2
//
//  Created by Niraj  on 12/30/14.
//  Copyright (c) 2014 Niraj Pant. All rights reserved.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    int n1 = 1;
    int n2 = 2;
    int sum = 0;
    int temp = 0;
    
    for (int i=0; i<4000000; i++) {
        temp = n1 + n2;
        n1 = n2;
        n2 = temp;
        if (n2 % 2 == 0) {
            sum+=n2;
        }
    }
    cout << sum;
    
//    cout << "Hello, World!\n";
    return 0;
}
