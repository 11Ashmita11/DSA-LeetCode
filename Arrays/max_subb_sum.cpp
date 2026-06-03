class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int total=nums[0];
        int currMax=nums[0];
        int maxSum=nums[0];
        int currMin=nums[0];
        int minSum=nums[0];

        for(int i=1;i<nums.size();i++){
            int x=nums[i];
            total+=x;
            currMax=max(x,currMax+x);
            maxSum=max(maxSum,currMax);

            currMin=min(x,currMin+x);
            minSum=min(minSum,currMin);
        }
        if(maxSum<0){
            return maxSum;
        }
        return max(maxSum,total-minSum);
    }
};