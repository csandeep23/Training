//
//  reorganize_string.cpp
//  Training
//
//  Created by Sandeep Chippada on 3/25/19.
//  Copyright © 2019 Sandeep Chippada. All rights reserved.
//

#include "reorganize_string.hpp"

void reorganize_string() {
    string input;
    cout << "Enter the string to reorganize: " << endl;
    cin >> input;
    cout << "Result string: " << reorganize(input) << endl;
}

string reorganize(string input) {
    unordered_map<char,int> ccount;
    unordered_map<int,string> charorder;
    int max_count=0;
    unsigned long l=input.length();
    for(int i=0;i<l;i++) {
        if (ccount.find(input[i])!=ccount.end()) {
            ccount[input[i]]++;
        } else {
            ccount[input[i]]=1;
        }
        max_count=max(max_count,ccount[input[i]]);
    }
    if(max_count*2>l) return "";
    return "";
}
