class Solution {
public:
    
    void func1(int index,int target , vector<int> &candidate, vector<vector<int>> &ans , vector<int> &ds)
    {
        if(target==0)
        {
            ans.push_back(ds);
            return ;
        }
        for(int i=index;i<candidate.size();i++)
        {
            if(i>index && candidate[i]==candidate[i-1]) continue; 
            if(candidate[i]>target) break; 
            ds.push_back(candidate[i]);
            func1(i+1, target - candidate[i], candidate, ans, ds);
            ds.pop_back();
        }
        
    }
    
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        
        sort(candidates.begin(),candidates.end());
        
        vector<vector<int>> ans;
        vector<int> ds;
        
        func1(0,target,candidates,ans,ds);
        
        return ans;
        
        
    }
};