class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        // bool incre = true, dec = true;
        // for(int i=1; i<nums.size(); i++){
        //     if(nums[i]<nums[i-1]) incre = false;
        //     if(nums[i]>nums[i-1]) dec = false;
        // }
        // return incre || dec;

        int val = 0;
        for(int i=1; i<nums.size(); i++){
            if(nums[i] == nums[i-1])continue;
            if(val == 0){
                val = (nums[i]>nums[i-1])?1:-1;
            }
            if(val == 1 && nums[i]<nums[i-1])return false;
            if(val == -1 && nums[i]>nums[i-1])return false;
        }
        return true;
    }
};