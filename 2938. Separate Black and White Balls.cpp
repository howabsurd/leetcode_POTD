#define ll long long
class Solution {
public:
    long long minimumSteps(string s) {
        ll sum = 0; int left = 0; int right=0;
        while(right < s.size()){
            if(s[right]=='0'){sum=sum+(ll)(right-left); left++;}
            right++;
        }
        return sum;
    }
};