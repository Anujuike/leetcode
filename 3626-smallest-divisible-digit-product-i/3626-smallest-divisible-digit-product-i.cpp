class Solution {
public:
    int smallestNumber(int n, int t) {
        int prod, num;
        while(true){
            prod = 1;
            num = n;
            while(num>0){
                prod *= num % 10;
                num /= 10;
            }
            if(prod % t == 0) break;
            n++;
        }
        return n;
    }
};