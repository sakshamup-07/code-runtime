class Solution {
public:
    string defangIPaddr(string address) {
        string result = "";
        for(auto &h : address)
        {
            if(h == '.') result += "[.]";
            else result += h;
        }
    return result;
    }
};