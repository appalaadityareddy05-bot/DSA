class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int i =0;
        int ts = 0;
        for(int j=0;j<nums.size();j++){
            if(nums[j] == 0){
                i=0;
            }else{
                i++;
            }
            ts = max(ts,i);
        }
        return ts;
    }
};