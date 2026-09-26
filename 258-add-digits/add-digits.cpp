class Solution {
public:
    int addDigits(int num) {
        bool flag = false;
        while(num>0)
        {
        int x = num;
        int sum =0;
        while(x>0)
        {
            int ld = x%10;
            sum +=ld;
            x=x/10;
        }
        if(sum<10) return sum;
        else num=sum;

        }
        return{};
    }
};