class Solution {
public:
    int romanToInt(string s) {
        stack<int> st;
        for(int i = 0; i < s.length(); i++)
        {
            switch(s[i])
            {
                case 'I':
                    st.push(1);
                    break;
                case 'V':
                    st.push(5);
                    break;
                case 'X':
                    st.push(10);
                    break;
                case 'L':
                    st.push(50);
                    break;
                case 'C':
                    st.push(100);
                    break;
                case 'D':
                    st.push(500);
                    break;
                case 'M':
                    st.push(1000);
                    break;
            }
            int a = st.top();
            st.pop();
            if(!st.empty() && a > st.top())
            {
                int b = st.top();
                st.pop();
                st.push(a-b);
            }
            else 
            {
                st.push(a);
            }
        }
        int ans = 0;
        while(!st.empty())
        {
            ans+=st.top();
            st.pop();            
        }
        return ans;
    }
};