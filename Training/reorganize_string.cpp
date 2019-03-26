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
	string ret=input;
    unordered_map<char,int> ccount;
	unordered_map<char,int>::iterator it;
    map<int,string> charorder;
    map<int,string>::iterator itm;
    int cpos=0, max_count=0;
    unsigned long l=input.length();
    for(int i=0;i<l;i++) {
        if (ccount.find(input[i])!=ccount.end()) {
            ccount[input[i]]++;
        } else {
            ccount[input[i]]=1;
        }
        max_count=max(max_count,ccount[input[i]]);
    }
    if(max_count*2>l+1) return "";
	for(it=ccount.begin();it!=ccount.end();it++) {
		if(charorder.find(it->second)!=charorder.end()) {
			charorder[it->second]+=it->first;
		} else {
			charorder[it->second]=it->first;
		}
	}
	itm=charorder.end();
	itm--;
	while(itm!=charorder.begin()) {
		string s1=itm->second;
		int l=itm->first;
		for(int i=0;i<s1.length();i++) {
			while(l>0) {
				ret[cpos]=s1[i];
				l--;
				cpos+=2;
				if(cpos>=ret.length()) cpos=1;
			}
			l=itm->first;
		}
		itm--;
	}
	string s1=itm->second;
	l=itm->first;
	for(int i=0;i<s1.length();i++) {
		while(l>0) {
			ret[cpos]=s1[i];
			l--;
			cpos+=2;
			if(cpos>=ret.length()) cpos=1;
		}
		l=itm->first;
	}
    return ret; 
}
