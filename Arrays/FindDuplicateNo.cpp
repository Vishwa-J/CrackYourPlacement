class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        if(nums.size()<=1){
            return 0;
        }
        sort(nums.begin(),nums.end());
        for(int i=1;i<nums.size();i++){
            if(nums[i]==nums[i-1]){
                return nums[i];
            }
        }
        return 0;
    }
};
