class Solution {
public:
    const long long MOD= 1e9+7;
    int powerr(long long x,long long n)
    {
        
        long long nn=n;
        long long ans=1;
        while(n)
        {
            if(n%2!=0){
                ans=(ans*x)%MOD;
                n=n-1;
            }
            else
            {
                x=(x*x)%MOD;
                n=n/2;
            }
        }
        return ans%MOD;
    }
    int countGoodNumbers(long long n) {
        long long even=(n+1)/2;
        long long odd=n/2;
        long long a=powerr(5,even);
        long long b=powerr(4,odd);
        return (a*b)%MOD;

        
    }
};