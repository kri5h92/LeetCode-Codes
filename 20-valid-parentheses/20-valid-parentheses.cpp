class Solution {
public:
    bool isValid(string s) {
        stack<char> stack;
        if(s.length() % 2 == 1)
            return false;
        for(int i = 0; i < s.length(); i++)
        {
            if(s[i] == '(' || s[i] == '{' || s[i] == '[')
            {
                stack.push(s[i]);
            }
            else 
            {
                char x = stack.top();
                if(!stack.empty())
                {if((x == '(' && s[i] == ')') || (x == '{' && s[i] == '}') || (x == '[' && s[i] == ']'))
                    stack.pop();
                else 
                    return false;}
                else return false;
            }
        }
        if(stack.empty())
            return true;
        return false;
    }
};