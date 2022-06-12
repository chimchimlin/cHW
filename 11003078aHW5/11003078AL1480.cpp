//11003078a chimchimlin//
#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> ans(nums.size());
        int sum=0;
        for(int i=0,j=i;i<nums.size(),j<nums.size();i++,j++)
        {
            sum+=nums[i];
            ans[i]=sum;    
        }
        return ans;
    }
};

int main ()
{
  Solution sum;
  vector<int> q={1,2,3,4};

  vector<int> ans =sum.runningSum(q);
  for(int i=0;i<ans.size();i++)
  cout << ans[i] << " " ;

  return 0;


}