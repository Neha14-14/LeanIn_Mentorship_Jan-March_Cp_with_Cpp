class Solution {
public:
    int singleNumber(vector<int>& nums) {
    int l = nums.size();
   
   sort(nums.begin(), nums.end());
   int i=0;
   while (i<l-1) {
      if (nums[i] != nums[i+1]) {
         return nums[i];
      }
      
      i += 2;
   }
   
   if (l % 2 == 1) {
      return nums[l-1];
   }
   return -1;
    }
};
