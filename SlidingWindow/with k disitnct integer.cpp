class Solution {
public:
    int subarraysWithKDistinct(vector<int>& nums, int k) {
        return atmost(nums,k)-atmost(nums,k-1);
    }
    int atmost(vector<int>&nums,int k){
        unordered_map<int,int>freq;
        int l=0;
        int cnt=0;
        for(int r=0;r<nums.size();r++){
            if(freq[nums[r]]==0){
                k--;
            }
            freq[nums[r]]++;
            while(k<0){
                freq[nums[l]]--;
                if(freq[nums[l]]==0){
                    k++;
                }
                l++;

            }
            cnt+=(r-l+1);

        }
        return cnt;
    }

    
};