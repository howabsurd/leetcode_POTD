class Solution {
public:
    int longestSquareStreak(vector<int>& nums) {
        unordered_set<int> st(nums.begin(), nums.end());
        sort(nums.begin(), nums.end());
        int ans = 1; int curr=1;
        for(int i=0;i<nums.size();i++){
            int temp = nums[i];
            if(st.find(nums[i])==st.end() || temp > 1e4){curr=1; continue;}
            while(temp <= 1e4 && st.find(temp* temp)!=st.end()){
                curr++; st.erase(temp);
                ans = max(ans, curr);
                temp = temp * temp;
            }
            curr = 1;
        }
        return ans==1?-1 : ans;
    }
};