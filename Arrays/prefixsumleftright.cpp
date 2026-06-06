class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        int totsum=0;
        for(int to:nums){
            totsum+=to;
        }

        vector<int>ans;
        int lsum=0;
        for(int i=0;i<nums.size();i++){
            int rsum=totsum-lsum-nums[i];
            ans.push_back(abs(lsum-rsum));
            lsum+=nums[i];
        }
        return ans;
    }

    
};