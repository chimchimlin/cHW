// 11003078A ªL¥ì¸© chimchimlin
#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        
        int n=nums.size();
        vector<int> ans(n+n);
        for(int i=0;i<=1;i++)
        {
            for(int j=0;j<n;j++)
            {
            ans[j]=nums[j];    
            }
            for(int k=0;k<n;k++)
            {
            ans[k+n]=nums[k];
            }
        }
            
        return ans;
    }
};

int main ()
{

vector <int> nums ={1,2,1} ;

vector <int> a=Solution().getConcatenation(nums);
for (int i = 0; i < a.size(); i++)
		cout << a[i] << " ";
    
return 0;
}