#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>

using namespace std;

vector<int> findAnagrams(string s, string p) {
    vector<int> result;
    if (s.length() < p.length()) {
        return result;  // No possible anagrams if s is shorter than p
    }

    // Initialize frequency arrays for characters 'a' to 'z'
    vector<int> p_count(26, 0);  // Count of characters in p
    vector<int> window_count(26, 0);  // Count of characters in current window

    // Fill p_count with the frequency of characters in p
    for (char c : p) {
        p_count[c - 'a']++;
    }

    // Sliding window technique
    for (int i = 0; i < s.length(); i++) {
        // Add the current character to the window
        window_count[s[i] - 'a']++;

        // If we've reached the size of p, check for a match
        if (i >= p.length()) {
            // Slide the window: remove the leftmost character of the window
            window_count[s[i - p.length()] - 'a']--;
        }

        // If window size is equal to p's size, compare the arrays
        if (i >= p.length() - 1 && window_count == p_count) {
            result.push_back(i - p.length() + 1);  // Start index of the anagram
        }
    }

    return result;
}

int main() {
    string s = "cbaebabacd";
    string p = "abc";
    vector<int> anagrams = findAnagrams(s, p);

    cout << "Start indices of anagrams: ";
    for (int index : anagrams) {
        cout << index << " ";
    }
    cout << endl;

    return 0;
}
