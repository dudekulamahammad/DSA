class Solution {
public:
    int funR(int ind,vector<int> &v,vector<int> &dp)
    {
        if(ind==0) return v[ind];
        if(ind<0) return 0;
        if(dp[ind]!=-1) return dp[ind];


        int take=v[ind]+funR(ind-2,v,dp);
    
        int nottake=0+funR(ind-1,v,dp);
        return dp[ind]=max(take,nottake);
    }
    int rob(vector<int>& nums) {
        if(nums.size()==1) return nums[0];
        int n=nums.size()-1;
        vector<int> dp(n+1,-1);
        vector<int> dp2(n+1,-1);
        vector<int> temp1;
        vector<int> temp2;
        for(int i=0;i<nums.size();i++)
        {
            if(i!=0) temp1.push_back(nums[i]);
            if(i!=n) temp2.push_back(nums[i]);
        }

        int m=temp1.size();
        int nn=temp2.size();
        return max(funR(m-1,temp1,dp),funR(nn-1,temp2,dp2));
        
    }
};