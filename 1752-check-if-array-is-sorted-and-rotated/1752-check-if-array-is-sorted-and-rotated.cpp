class Solution {
public:
    bool check(vector<int>& nums) {
        int r=0;
        for(int i=0;i<nums.size();i++){

            if(r==1 && nums[i]>nums[(i+1)%nums.size()]){
                return false;
            }

            if(r==0 && i<nums.size()-1){
                if(nums[i]>nums[i+1]){
                    r=1;
                }
            }
		}
        return true;
    }
};