#include <bits/stdc++.h>

using namespace std;

int longestConsecutive(vector<int>& nums) {
    unordered_set<int> numSet(nums.begin(), nums.end());
    int longest = 0;

    for (int num : nums) {
        // Start counting only if it's the start of a sequence
        if (numSet.find(num - 1) == numSet.end()) { 
            int currentNum = num;
            int currentStreak = 1;

            // Count consecutive elements
            while (numSet.find(currentNum + 1) != numSet.end()) {
                currentNum++;
                currentStreak++;
            }

            longest = max(longest, currentStreak);
        }
    }

    return longest;
}

int main() {
    int n;
    cin >> n;
    vector<int> nums(n);

    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    cout << "Longest consecutive sequence length: " << longestConsecutive(nums) << endl;

    return 0;
}
