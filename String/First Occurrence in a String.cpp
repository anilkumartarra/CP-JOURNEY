//Find the Index of the First Occurrence in a String
class Solution {
public:
    int strStr(string haystack, string needle)
    {
        char t= (needle[0]);
        vector<int>v;
        for(int i=0;i<haystack.size();i++)
        {
            if(haystack[i]==t)
            {
                v.push_back(i);
            }
        }
        int flag = 0;
        for (auto it :v)
        {
            flag = 0;
            int ind = it;
            for(int i=0;i<needle.size();i++)
            {
                if(needle[i]!=haystack[ind])
                {
                    flag=1;
                    break;
                }
                ind++;
            }
            if(!flag)
            {
                return it;
            }
        }
        return -1;
    }
};
