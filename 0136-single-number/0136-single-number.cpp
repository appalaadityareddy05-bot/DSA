#include<unordered_map>
class Solution {
public:
    unordered_map<int,int> fmap;
    int singleNumber(vector<int>& nums) {
        for(int num : nums){
            fmap[num]++;
        }
        for(auto& i :fmap){
            if(i.second == 1){
                return i.first;
            }
        }
        return -1;
    }
};