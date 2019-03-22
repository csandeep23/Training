//
//  addition.cpp
//  Training
//
//  Created by Sandeep Chippada on 3/22/19.
//  Copyright © 2019 Sandeep Chippada. All rights reserved.
//

#include "addition.hpp"

void addition () {
    printResult(getNumber()+getNumber());
}

int getNumber() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    return num;
}

void printResult(int num) {
    cout << "The sum is " << num << endl;
}
