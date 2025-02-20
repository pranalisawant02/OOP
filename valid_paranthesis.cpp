#include <iostream>
#include <stack>
#include <string>
using namespace std;

class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        
        for (char c : s) {
            if (c == '(' || c == '{' || c == '[') {
                st.push(c);  // Push opening brackets onto the stack
            } else {
                if (st.empty()) return false;  // If stack is empty, it's invalid
                char top = st.top();
                st.pop();
                if ((c == ')' && top != '(') || 
                    (c == '}' && top != '{') || 
                    (c == ']' && top != '[')) {
                    return false;  // Mismatch found
                }
            }
        }
        
        return st.empty();  // If stack is empty, all brackets were matched
    }
};

int main() {
    Solution solution;
    
    // Test cases
    string test1 = "()";          // Valid
    string test2 = "()[]{}";      // Valid
    string test3 = "(]";          // Invalid
    string test4 = "([)]";        // Invalid
    string test5 = "{[]}" ;       // Valid
    
    cout << "Test case 1: " << test1 << " is " << (solution.isValid(test1) ? "valid" : "invalid") << endl;
    cout << "Test case 2: " << test2 <<
