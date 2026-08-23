class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        vector<vector<int>> ans;
        vector<int> inse=newInterval;
        int i=0;
        while(i<intervals.size()&&intervals[i][1]<inse[0])
        {
            ans.push_back(intervals[i]);
            i++;
        }
        while(i<intervals.size()&&intervals[i][0]<=inse[1])
        {
            inse[0]=min(inse[0],intervals[i][0]);
            inse[1]=max(inse[1],intervals[i][1]);
            i++;
        }
        ans.push_back(inse);
        while(i<intervals.size())
        {
            ans.push_back(intervals[i]);
            i++;
        }
        return ans;
    }
};