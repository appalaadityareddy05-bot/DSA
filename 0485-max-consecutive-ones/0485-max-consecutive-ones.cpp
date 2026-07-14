class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int i,max = 0;
        for(int j=0;j<nums.size();j++){
            if(!nums[j]){
                if(i > max)
                   max = i;
                i=0;
            }else{
                i++;
            }
        }
        if(i > max)
          max = i;
        return max;
    }
};