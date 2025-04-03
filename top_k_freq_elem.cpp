#include <bits/stdc++.h>

using namespace std;

vector<int> top_K_freq_elem(vector<int> &nums, int k) {
    unordered_map<int, int> map;

    // First pass: Store indices of each character
    for (int i = 0; i < nums.size(); i++) {
        map[nums[i]]++;
    }

    int index = -1;
 
}

int main() {
    int n, k;
    cin >> n >> k;

    vector<int> nums(n); 
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    cout << "First unique character in string is at index: "<< endl;

    for (int num : top_K_freq_elem(nums , k))
    {
        cout << num;
    }
    

    return 0;
}
