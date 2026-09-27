class Solution {
public:
    int maxDistinct(string s) {
        bool visited[256] = {false};
        int count = 0;
        
        for (char c : s) {
            if (!visited[(unsigned char)c]) {
                visited[(unsigned char)c] = true;
                count++;
            }
        }
        return count;
    }
};