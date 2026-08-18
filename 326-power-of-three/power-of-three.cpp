class Solution {
public:
    bool isPowerOfThree(int n) {
        if(n==1) return true;
        if(n<=0) return false;
        if(n==3) return true;
        for(int i=2;i<=log(n)/log(3)+1;i++)
        {
            if(pow(3,i)==n) return true;
        }
        return false;
        
    }
};