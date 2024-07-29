class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int temp =0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[temp]!=nums[i])
            {
                nums[temp+1]=nums[i];
                temp++;
            }
        }
        return temp+1;
    }
};