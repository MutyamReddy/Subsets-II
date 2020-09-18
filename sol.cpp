class Solution {
public:
    vector<vector<int>>ans;
    void solve(vector<int>A,vector<int>curr,int id){
        ans.push_back(curr);
        if(id>A.size()){
            ans.push_back(curr);
            return ;
        }
        for(int i=id;i<A.size();i++){
            if(i>id&&A[i]==A[i-1])continue;
            curr.push_back(A[i]);
            solve(A,curr,i+1);
            curr.pop_back();
        }
    }
    vector<vector<int>> subsetsWithDup(vector<int>& A) {
        vector<int>curr;
        sort(A.begin(),A.end());
        solve(A,curr,0);
        return ans;
    }
};
