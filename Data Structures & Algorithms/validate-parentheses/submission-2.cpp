class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        for(char n : s)
        {
            if(n=='(' || n=='[' || n=='{')
            {
                st.push(n);
            }
            else
            {
                if(st.empty())
                return false;
                char top=st.top();
                if(top=='(' && n==')' || top=='[' && n==']' || top=='{' && n=='}')
                {
                    st.pop();
                }
            }
        }
        if(st.empty())
        return true;

        return false;
    }
};
