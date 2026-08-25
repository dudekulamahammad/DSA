class Solution {
public:
    int lengthOfLastWord(string s) {
        reverse(s.begin(),s.end());
        int i=0;
        int cnt=0;
        while(s[i]!='\0')
        {
            if(s[i]!=' ')
            break;
            else
            i++;
        }
        // i++;
        while(s[i]!=' ' && s[i]!='\0')
        {
           cnt++;
           i++;
        }
        return cnt;

        
    }
};