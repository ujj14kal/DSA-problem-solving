class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int maxCount = 0, count = 0,i=0;


            while (i <= nums.size() - 1) {
                if (nums[i] == 1) {
                    count++;
                } else {
                    count = 0;
                }

                if (count > maxCount) {
                    maxCount = count;
                }

                i++;
            }
        return maxCount;
    }
};