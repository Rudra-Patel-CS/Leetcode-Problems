class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        for (int i = 0; i < nums.size(); i++) {
            if (i > 0 && nums[i] < nums[i - 1])
                continue; // --> for the left element check...
            if (i < nums.size() - 1 && nums[i] < nums[i + 1])
                continue; // --> For the right element check...
            
            return i;
        }
        
        return -1;
    }
};