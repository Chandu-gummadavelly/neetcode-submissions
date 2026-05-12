class Solution {
public:
       bool isValid(string s) {
        stack<char> container;

        if (s.size() == 0) {
            return true;
        }

        for (int i = 0; i < s.size(); i++) {

            if (s[i] == '{' || s[i] == '(' || s[i] == '[') {
                container.push(s[i]);
            }

            else if (!container.empty() &&
                    ((s[i] == '}' && container.top() == '{') ||
                     (s[i] == ')' && container.top() == '(') ||
                     (s[i] == ']' && container.top() == '['))) {

                container.pop();
            }

            else {
                return false;
            }
        }

        return container.empty();
    }
};
