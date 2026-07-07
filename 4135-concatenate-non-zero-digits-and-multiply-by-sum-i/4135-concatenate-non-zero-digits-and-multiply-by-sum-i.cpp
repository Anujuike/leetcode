#include <string>
#include <algorithm>
class Solution {
public:
    long long sumAndMultiply(int n) {
        if(n == 0) return 0;
        long long sum = 0;
        string str = "";
        while(n != 0){
            int rem = n % 10;
            n = n / 10;
            if(rem != 0){
                sum += rem;
                str += (rem + '0');
            }
        }
        reverse(str.begin(), str.end());
        long long num = stoll(str);
        return num * sum;
    }
};