class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int curr=0;
            int max=INT_MIN;
            for(int i=0;i<nums.size();i++){
                    curr+=nums[i];
                    if(curr<nums[i])
                         curr=nums[i];
                    if(curr>max)
                      max=curr;
            }
            return max;
    }
};