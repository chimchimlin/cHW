#include <iostream>
#include <string>
#include <vector>
#include <time.h>
#include <cstdlib>
using namespace std;

struct score
{
  string name;
  int math;
  int english;
  int nature;
  int society;
  int chinese;
  int total;
};

int smallest(vector<score> &syw, int a)
{
  int min_index = a;
  for (int i = a + 1; i < syw.size(); i++)
  {
    if (syw[i].total > syw[min_index].total)
      min_index = i;
  }
  return min_index;
}


int main()
{
  srand(time(NULL));
  vector<score> syw;
  score temp;
  int tmp;
  string a;
  for (int i = 0; i < 1000; i++)
  {
    temp.name = {"aaaaaa"};
    for (int i = 0; i < 6; i++)
    {
      temp.name[i] += rand() % 26;
    }

    temp.math = rand() % 16;
    temp.english = rand() % 16;
    temp.nature = rand() % 16;
    temp.society = rand() % 16;
    temp.chinese = rand() % 16;
    temp.total = temp.chinese + temp.english + temp.math + temp.nature + temp.society;
    syw.push_back(temp);
  }

  /**
  for(int k=0;k<syw.size();k++)
  {
  cout << syw[k].name <<" "<<syw[k].total<<endl;
  }
  **/

  //選擇排序
  for (int i = 0; i < syw.size(); i++)
  {
    int smallest_index = smallest(syw, i);

    temp = syw[i];
    syw[i] = syw[smallest_index];
    syw[smallest_index] = temp;
  }
  //
  
 

  // cout << "AFTER"<<endl;
  for (int k = 0; k < syw.size(); k++)
  {
    // cout << k+1 << " ";
    // cout << syw[k].name <<" "<<syw[k].total<<endl;
    if (k == 0)
      cout << "第  " << k << "名 " << syw[k].name << " " << syw[k].total << endl;
    if (k == 100)
      cout <<"第" << k << "名 " << syw[k].name << " " << syw[k].total << endl;
    if (k == 200)
      cout << "第" << k << "名 " << syw[k].name << " " << syw[k].total << endl;
  }

  return 0;
}