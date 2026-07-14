class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int i,j = 0;
        while(j<nums.size()){
            if(nums[i]==0 && nums[j] != 0){
               swap(nums[i],nums[j]);
               i++;
               j++;
            }else if(nums[i] != 0){
                if(j <= i){
                   i++;
                   j = i;
                }
                else
                   i++;
            }
             else if(nums[j] == 0){
                j++;
             }
        }
    }
};