
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
         int t = nums.size(); 
        if(nums.size() == 0) return 0;
         int i = 0 ;
         for(int j = 1; j < t;j++){
            if(nums[j] != nums[i]) {
                i++;
                nums[i] = nums[j] ;
                }
        }
    return i+1;
    }
};
