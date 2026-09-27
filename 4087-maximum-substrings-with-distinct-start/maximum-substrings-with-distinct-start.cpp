class Solution {
public:
    int maxDistinct(string s) {
        int mask = 0, res = 0;
        for (auto &c : s) {
            int bit = 1 << (c - 'a'); // compute bit position for the character
            if ((mask & bit) == 0) {   // if character not seen before
                mask |= bit;           // mark character as seen
                res++;                 // increment count of distinct characters
                if (res == 26) break;  // maximum distinct letters reached
            }
        }
        return res;
    }
};