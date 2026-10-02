class Solution {
public:
    string defangIPaddr(string address) {
        int n = address.size();
        int dot =0;
        for(char c : address)
        {
            if(c == '.') dot++;
        }
        int nsize = n + dot*2;
        address.resize(nsize);
        int r = nsize-1;
        int l = n-1;
        while(l>=0)
        {
            if(address[l]=='.')
            {
                address[r]=']';
                address[r-1]='.';
                address[r-2]='[';
                r-=3;
            }
            else
            {
              address[r]=address[l];
              r--;
            }
            l--;
        }
        return address;
    }
};