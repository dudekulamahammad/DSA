class Solution {
public:
    string winningPlayer(int x, int y) {
        int cnt=0;
        while(x>=1 && y>=4)
        {
            cnt++;
            x=x-1;
            y=y-4;

        }
        if(cnt%2==1) return "Alice";
        return "Bob";
        
    }
};