/* question link -> https://leetcode.com/problems/remove-outermost-parentheses/*/
/*
Example ->

Input: s = "(()())(())"
Output: "()()()"

Input: s = "(()())(())(()(()))"
Output: "()()()()(())"
*/

string removeOuterParentheses(string s)
{

    string ans;
    stack<char> st;
    int i = 0;
    while (i < s.size())
    {
        char ch = s[i];
        // if we find the opening bracket and the size
        // of stack is greater than 1, then we push the open bracket
        // to the ans string (greater than 1 b/c to avoid the
        // the outermost string.)
        if (ch == '(')
        {
            st.push(ch);
            if (st.size() > 1)
                ans.push_back(st.top());
        }
        // if we find the closing bracket then if the size is
        // greater than 1, then we push the closing bracket but pop
        // the character everytime from the stack.
        if (ch == ')')
        {
            if (st.size() > 1)
                ans.push_back(ch);
            st.pop();
        }

        i++;
    }

    return ans;
}

/*
// Another easy approach ->
// you can also use this thing.
string removeOuterParentheses(string S) {
    string res;
    int opened = 0;
    for (char c : S) {
        if (c == '(' && opened++ > 0) res += c;
        if (c == ')' && opened-- > 1) res += c;
    }
    return res;
}
*/