#include <bits/stdc++.h>
pair<int,int> missingAndRepeating(vector<int> &nums, int n)
{
 std::unordered_map<int, int> frequencyMap;

    int missingNumber, repeatingNumber;

    // Count the frequency of each number
    for (int num : nums) {
        frequencyMap[num]++;
    }

    // Find the missing and repeating numbers
    for (int i = 1; i <= nums.size(); i++) {
        if (frequencyMap[i] == 0) {
            missingNumber = i;
        } else if (frequencyMap[i] == 2) {
            repeatingNumber = i;
        }
    }

    return std::make_pair(missingNumber, repeatingNumber);
}