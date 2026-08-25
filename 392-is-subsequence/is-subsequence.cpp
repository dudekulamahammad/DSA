class Solution {
public:
    bool isSubsequence(string s, string t) {
        int n=t.size();
        int m=s.size();
        int i=0,j=0;
        while(i<n && j<m)
        {
            if(s[j]==t[i])
            {
                j++;
            }
            i++;
        }
        if(j==s.size())return true;
        return false;
        
    }
};