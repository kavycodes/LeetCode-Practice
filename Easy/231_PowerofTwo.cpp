// LeetCode 231 - Power of Two
// Difficulty: Easy

#include <math.h>
using namespace std;

class Solution{
public:
    bool isPowerOfTwo(int n){

        for(int i=0;i<=30;i++){
            int ans = pow(2,i);

            if(ans==0){
                return true;
            }

        }

        return false;

    }
};