#include <vector>
#include <algorithm>

std::vector<std::vector<int>> pairSum(std::vector<int> &arr, int s) {
    std::sort(arr.begin(), arr.end());
    std::vector<std::vector<int>> finalPairs;
    int low = 0, high = arr.size() - 1;

    while (low < high) {
        int sum = arr[low] + arr[high];
        if (sum == s) {
            if (arr[low] != arr[high]) {
                int x = arr[low], y = arr[high];
                int j = low + 1, lc = 1, k = high - 1, hc = 1;

                while (arr[j] == x) {
                    lc++;
                    j++;
                }

                while (arr[k] == y) {
                    hc++;
                    k--;
                }

                for (int l = 0; l < lc * hc; l++) {
                    finalPairs.push_back({arr[low], arr[high]});
                }

                low = j;
                high = k;
            } else {
                int r = high - low + 1;
                int c = (r * (r - 1)) / 2;

                for (int l = 0; l < c; l++) {
                    finalPairs.push_back({arr[low], arr[high]});
                }

                return finalPairs;
            }
        } else if (sum > s) {
            high--;
        } else {
            low++;
        }
    }

    return finalPairs;
}
