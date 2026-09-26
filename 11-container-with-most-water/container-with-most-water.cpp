class Solution {
public:
    int maxArea(vector<int>& height) {
        int left =0;
        int n = height.size();
        int right = n-1;
        int maxer=0;
        while(left<right)
        {
            int ch = right-left;
            int area= ch * min(height[left] , height[right]);
            maxer = max(area , maxer);
            if(height[left]<height[right]) left++;
            else right--;
        }
        return maxer;
    }
};