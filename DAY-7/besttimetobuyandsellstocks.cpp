#include <bits/stdc++.h> 
int maximumProfit(vector<int> &prices){
    int maxProfit = 0; // Initialize maxProfit as 0
    int minPrice = INT_MAX; // Initialize minPrice as maximum possible value

    for (int price : prices) {
        
        minPrice = std::min(minPrice, price);

        
        int profit = price - minPrice;

        
        maxProfit = std::max(maxProfit, profit);
    }

    return maxProfit;
}