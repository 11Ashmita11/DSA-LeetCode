class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        unordered_map<int,int>mpp;
        mpp[0]=-1;
        int pr=0;
        for(int i=0;i<nums.size();i++){
            pr+=nums[i];
            int rem=pr%k;
            if(mpp.find(rem)!=mpp.end()){
                if(i-mpp[rem]>=2){
                    return true;
                }
            }
                else{
                    mpp[rem]=i;
                }
            } 
            return false;       
    }
};