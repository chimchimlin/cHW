#include <iostream>
#include <vector>
using namespace std;

class Solution 
{
  public:
  int finalValueAfterOperations(vector<string>& operations)
    {
       int sum=0;
        for(int i=0;i<operations.size();i++)
        {
            if(operations[i]=="X++")
            {
                sum++;
            }
            else if(operations[i]=="++X")
            {
                sum++;
            }
            else if(operations[i]=="X--")
            {
                sum--;
            }
            else if(operations[i]=="--X")
            {
                sum--;
            }
        }
        return sum;
    }
};

int main()
{
  vector <string> a={"--X","X++","X++","X--","X++","X++"};

  int ans=Solution().finalValueAfterOperations(a);

  cout << ans ;

}    