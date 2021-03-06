
// Q: https://leetcode.com/problems/container-with-most-water/submissions/

// Hint : we're increasing/decreasing the index of smaller element as we're sure that doing it for the larger one won't be optimal.
class Solution {
public:
    int maxArea(vector<int>& a) {
        int n = a.size(), l = 0, r = n-1, ans = 0;
        while(l < r){
            ans = max(ans,min(a[l],a[r])*(r-l));
            if(a[l] < a[r])l++;
            else r--;
        }
        return ans;
    }
};
