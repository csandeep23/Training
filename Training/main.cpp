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

using namespace std;

int main(int argc, const char * argv[]) {
    int choice;
    cout << "Choose the program to run:\n";
    cout << "\t1.Addition\n";
    cout << "\t2.Knapsack\n";
    cin >> choice;
    switch (choice) {
        case 1:
            addition();
            break;
		case 2:
			knapsack();
			break;
        default:
            break;
    }
    return 0;
}
