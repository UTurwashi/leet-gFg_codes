class Solution {
public:
    vector<int> numberGame(vector<int>& nums) {
            vector<int> ans;
            int n=nums.size();
            stack<int> st;
            sort(nums.begin(),nums.end());
            for(int i=0;i<n/2;i++){
                    st.push(nums[2*i]);
                    st.push(nums[2*i+1]);
                    for(int i=0;i<2;i++){
                    ans.push_back(st.top());
                    st.pop();
                    }
            }
            return ans;
    }
};