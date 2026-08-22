class Solution {
public:
   vector<vector<int>> funR(int ind,vector<int>&nums,vector<int>&ds,vector<vector<int>> &ans)
   {
    ans.push_back(ds);
    
    for(int i=ind;i<nums.size();i++)
    {
        if(i>ind && nums[i]==nums[i-1])continue;
        ds.push_back(nums[i]);
        funR(i+1,nums,ds,ans);
        ds.pop_back();
    }
    return ans;

   }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<int>ds;
        vector<vector<int>> ans;
        return funR(0,nums,ds,ans);
        
    }
};