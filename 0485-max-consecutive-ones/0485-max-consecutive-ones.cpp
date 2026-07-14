class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int i = 0,ans = 0;
        for(int j=0;j<nums.size();j++){
            if(!nums[j]){
                ans = max(ans,i);
                i=0;
            }

            else
                i++;
        }
        ans = max(ans,i);
        return ans;
    }
};