class Solution {
public:
    void combi(int ind,vector<int> &v,int sum,vector<int> &ds,vector<vector<int>> &res,int k,int n )
    {
        if(ds.size()==k)
        {
            if(sum==n)
            {
                res.push_back(ds);
            }
            return ;
        }
        if(sum>n || ind>=v.size()) return ;
        ds.push_back(v[ind]);
        combi(ind+1,v,sum+v[ind],ds,res,k,n);
        ds.pop_back();
        combi(ind+1,v,sum,ds,res,k,n);
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<int> v={1,2,3,4,5,6,7,8,9};
        vector<int> ds;
        vector<vector<int>> res;
        combi(0,v,0,ds,res,k,n);
        return res;
        
    }
};