class Solution {
public:
    int minPartitions(string n) {
        char largest='-1';
       for(auto it : n)
       {
        largest=max(it,largest);
       }
       return largest-'0';
    }

};