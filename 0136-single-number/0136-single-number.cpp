class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int xorValue=0;
        for(int num : nums){
            xorValue ^=num;
        }
        return xorValue;
    }
};