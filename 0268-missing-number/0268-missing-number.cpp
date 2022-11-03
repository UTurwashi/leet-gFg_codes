class Solution {
public:
    int missingNumber(vector<int>& nums) {
          int sum=0;
            int maxm=INT_MIN;
            int n=nums.size();
            for(int i=0;i<n;i++){
                    maxm=max(maxm,nums[i]);
                    sum+=nums[i];
            }
            int sum1 = n*(n+1)/2;
            if(maxm==(n-1)) return maxm+1;
            else return sum1-sum;
            
    }
};