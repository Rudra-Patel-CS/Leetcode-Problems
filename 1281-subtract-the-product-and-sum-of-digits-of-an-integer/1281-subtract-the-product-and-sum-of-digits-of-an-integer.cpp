class Solution {
public:
    int subtractProductAndSum(int n) {
        int rem,mul = 1,sum = 0; 
    while(n>0)
        {
            rem = n % 10;
            n = n/10;
            mul = mul * rem;
            sum = sum + rem;
        }
        int answer = mul-sum;
        return answer; 
    }
};