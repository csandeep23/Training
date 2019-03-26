//
//  main.cpp
//  Training
//
//  Created by Sandeep Chippada on 3/21/19.
//  Copyright © 2019 Sandeep Chippada. All rights reserved.
//

#include <iostream>
#include "addition.hpp"
#include "knapsack.hpp"
#include "reorganize_string.hpp"

using namespace std;

int main(int argc, const char * argv[]) {
    int choice;
    cout << "Choose the program to run:\n";
    cout << "\t1.Addition\n";
    cout << "\t2.Knapsack\n";
    cout << "\t3.Reorganize String\n";
    cin >> choice;
    switch (choice) {
        case 1:
            addition();
            break;
        case 2:
            knapsack();
            break;
        case 3:
            reorganize_string();
            break;
        default:
            break;
    }
    return 0;
}
