#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
	vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
		int mx = 0;
		int n = candies.size();
		for(int i = 0; i < n; i++) {
			mx = max(mx, candies[i]);
		}
		vector<bool> cnt;
		for(int i = 0; i < n; i++) {
			cnt.push_back(candies[i] + extraCandies >= mx);
		}
		return cnt;
	}
};
