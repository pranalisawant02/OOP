#include <iostream>
#include <string>

class Solution {
public:
    int strStr(std::string haystack, std::string needle) {
        // Check if the needle is empty
        if (needle.empty()) {
            // If the needle is empty, return 0
            return 0;
        }

        // Use the find method to search for the needle in the haystack
        int index = haystack.find(needle);

        // Check if the needle was found
        if (index != std::string::npos) {
            // If the needle was found, return its index
            return index;
        } else {
            // If the needle was not found, return -1
            return -1;
        }
    }
};

int main() {
    Solution solution;

    // Test case 1
    std::string haystack1 = "sadbutsad";
    std::string needle1 = "sad";
    int result1 = solution.strStr(haystack1, needle1);
    std::cout << "Test case 1: " << result1 << std::endl;

    // Test case 2
    std::string haystack2 = "leetcode";
    std::string needle2 = "leeto";
    int result2 = solution.strStr(haystack2, needle2);
    std::cout << "Test case 2: " << result2 << std::endl;

    return 0;
}
