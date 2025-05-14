//Two Pointer
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
	string mergeAlternately(string word1, string word2) {
		int cnt = 0;
		string res;
		int w1 = word1.length();
		int w2 = word2.length();
		while(cnt < w1 || cnt < w2) {
			if(cnt < w1) res += word1[cnt];
			if(cnt < w2) res += word2[cnt];
			cnt++;
		}
		return res;
	}
};

