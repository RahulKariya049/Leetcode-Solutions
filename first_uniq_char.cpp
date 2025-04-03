#include <bits/stdc++.h>

using namespace std;

int firstUniqChar(string s) {
    unordered_map<char, vector<int>> map;

    // First pass: Store indices of each character
    for (int i = 0; s[i] != '\0'; i++) {
        map[s[i]].push_back(i);
    }

    int index = -1;

    // Second pass: Find the first character with only one occurrence
    for (int i = 0; s[i] != '\0'; i++) {
        if (map[s[i]].size() == 1) { // Check if the character appears only once
            return map[s[i]][0]; // Return its first occurrence index
        }
    }

    return index; 
}

int main() {
    int n;
    cin >> n;
    
    string s;
    cin >> s;

    cout << "First unique character in string is at index: " << firstUniqChar(s) << endl;

    return 0;
}
