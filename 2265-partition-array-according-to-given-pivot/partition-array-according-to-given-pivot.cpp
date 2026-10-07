class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        vector<int> less , equal , greater;
        int n = nums.size();
        for( auto& it : nums)
        {
            if(it<pivot) less.push_back(it);
            else if(it>pivot) greater.emplace_back(it);
            else equal.push_back(it);
        }
        less.insert(less.end() , equal.begin() , equal.end());
        less.insert(less.end() , greater.begin() , greater.end());
        return less;
    }
};