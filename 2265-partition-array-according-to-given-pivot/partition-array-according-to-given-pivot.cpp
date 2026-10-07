class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
      stack <int> st;
      vector<int> ans;
      int n = nums.size();
      for(int i =0;i<n;i++)
      {
        if(nums[i]<pivot)
        {
            st.push(nums[i]);
        }
      }  
      for(int i =0;i<n;i++)
      {
        if(nums[i]==pivot) st.push(nums[i]);
      }
      for(int i =0;i<n;i++)
      {
        if(nums[i] > pivot) st.push(nums[i]);
      }
      for(int i =0;i<n;i++)
      {
        ans.emplace_back(st.top());
        st.pop();
      }
      reverse(ans.begin() , ans.end());
      return ans;

    }
};