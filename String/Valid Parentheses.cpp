//valid Parenthese
class Solution {
public:
    bool isValid(string s)
    {
        stack<char>st;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='[' or s[i]=='{' or s[i]=='(')
            {
                st.push(s[i]);
            }
            else
            {
                if(st.empty())
                {
                     return false;
                }
                else if(s[i]==']' or s[i]=='}' or s[i]==')')
                {
                    char ch = st.top();
                    st.pop();
                    
                    if((ch=='[' and s[i]==']') or (ch=='{' and s[i]=='}') or (ch=='(' and s[i]==')'))
                    {
                        //st.pop();
                        continue;
                    }
                    else
                    {
                        return false;
                    }
                    
                }
            }
        }
        return st.empty();
    }
};
