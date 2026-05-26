class Solution {
public:
    int secondLargestElement(vector<int>& nums) {
        //your code goes here
        int n=nums.size();
        int slarg=INT_MIN;
        int larg=INT_MIN;
        if(n<2){
            return -1;
        }
        for(int i=0;i<nums.size();i++){
            if(nums[i]>larg){
                slarg=larg;
                larg=nums[i];
            }
            else if(nums[i]>slarg&&nums[i]!=larg){
                slarg=nums[i];
            }
            if(slarg==INT_MIN){
                return -1;
            }

        }
        return slarg;
      
    }
};