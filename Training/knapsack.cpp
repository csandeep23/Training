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
    cout << "The number of ways to select the coins is " << pick_knapsack(total,coins) << endl;
}

int pick_knapsack(int total,set<int> coins){
    if(coins.size()==0) return 0;
	int ways[coins.size()+1][total+1];
	set<int>::iterator it=coins.begin();
	ways[0][0]=1;
	for(int i=1;i<=coins.size();i++){
		ways[i][0]=1;
		for(int j=1;j<=total;j++){
			ways[0][j]=0;
			if(j>=*it && i>0) {
				ways[i][j]=ways[i-1][j]+ways[i][j-*it];
			} else {
				ways[i][j]=ways[i-1][j];
			}
			//cout << i << " " << j << " " << ways[i][j] << " " << *it << endl;
		}
		it++;
	}
    /*
	for(int i=0;i<=coins.size();i++){
		for(int j=0;j<=total;j++){
			cout << ways[i][j] << " ";
		}
		cout << "Complete " << coins.size() << " " << total << endl;
	}
    */
	return ways[coins.size()][total];
}

int getTotal(){
	long total;
	cout << "What is the total amount? ";
	cin >> total;
	if(total<0||total>INT_MAX) {
		cout << "Invalid total amount. Exiting." << endl;
		exit(0);
	}
	return int(total);
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
	//cout << "Added " << coins.size() << " coins.\n";
	return coins;
}
