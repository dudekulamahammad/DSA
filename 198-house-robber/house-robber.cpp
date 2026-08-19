class Solution {
public:
    int profrob(int ind,vector<int> &v,vector<int> &ds)
    {
        if(ind>=v.size()) return 0 ;
        if(ds[ind]!=-1) return ds[ind];
        
        int take=v[ind]+profrob(ind+2,v,ds);
        int nottake=profrob(ind+1,v,ds);
        return  ds[ind]=max(take,nottake);

        

    }
    int rob(vector<int>& nums) {

        vector<int> ds(nums.size(),-1);

         return profrob(0,nums,ds);
        
    }
};