class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int ans=nums[0];
        int curmax=nums[0];
        int curmin=nums[0];

        for(int i=1;i<nums.size();i++){
            int x=nums[i];
            int tempmax=max({x,curmax*x,curmin*x});
            int tempmin=min({x,curmax*x,curmin*x});
            curmax=tempmax;
            curmin=tempmin;
             ans=max(ans,curmax);

        }
        return ans;
    }
};