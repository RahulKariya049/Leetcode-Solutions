#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, target;
    cin >> n >> target;

    vector<int> nums(n); 
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    unordered_map<int, vector<int>> map;
    for (int i = 0; i < n; i++) {
        int complement = target - nums[i];

        //Checks for the element target - currelement in hash map
        if (map.find(complement) != map.end()) {
            for (int index : map[complement]) { //Iterate to print all matching pairs
                cout << "[" << index << ", " << i << "]" << endl;
            }
        }

        //Now insert nums[i] in the map
        map[nums[i]].push_back(i);
    }

    return 0;
}
