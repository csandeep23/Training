//
//  knapsack.cpp
//  Training
//
//  Created by Sandeep Chippada on 3/22/19.
//  Copyright © 2019 Sandeep Chippada. All rights reserved.
//

#include "knapsack.hpp"

void knapsack(){
	int total = getTotal();
	set<int> coins = getCoins();
	//cout << "Total is " << total << endl;
}

int getTotal(){
	long total;
	cout << "What is the total amount?";
	cin >> total;
	if(total<0||total>INT_MAX) {
		cout << "Invalid total amount. Exiting." << endl;
		exit;
	}
	return total;
}

set<int> getCoins () {
	cout << "Enter the coin denominations; enter -1 when complete" << endl;
	int coin=0;
	set<int> coins;
	cin >> coin;
	while(coin>=0){
		coins.insert(coin);
		cin >> coin;
	}
	cout << "Added " << coins.size() << " coins.\n";
	return coins;
}
