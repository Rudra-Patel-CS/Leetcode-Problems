class Solution {
public:
    bool isPerfectSquare(int num) {
            // float root = sqrt(num);  --> here it tells that we can't use it...
            if(num == 1)
            return true;

            long int start = 1;
            long int end = num/2;
            while(start<=end)
            {
                long int mid = start + (end - start) / 2;;
                long long square = mid* mid;
                if(square == num)
                return true;
                else if(square<num)
                start = mid +1;
                else
                end = mid -1;
            }
            return false;
   }
};