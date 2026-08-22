class Solution {
public:
    vector<vector<int>> funR(int ind,vector<int> & nums,vector<vector<int>> &res,vector<int> &ds)
    {
        if(ind==nums.size())
        {
            res.push_back(ds);
            return {};
        }
        ds.push_back(nums[ind]);
        funR(ind+1,nums,res,ds);
        ds.pop_back();
        funR(ind+1,nums,res,ds);
        return res;
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> res;
        vector<int> ds;
        return funR(0,nums,res,ds);
        
    }
};