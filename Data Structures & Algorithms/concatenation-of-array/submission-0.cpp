class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int> ans(2*nums.size());
        int i,j=0;
        for (i=0;i<ans.size();i++){
            ans[i]=nums[i%nums.size()];
        }

   return ans;
    }
};