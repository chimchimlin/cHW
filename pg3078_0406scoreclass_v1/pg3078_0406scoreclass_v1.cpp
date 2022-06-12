#include <bits/stdc++.h>
using namespace std;

class score
{

private:
  string name;
  int math;
  int english;
  int nature;
  int society;
  int chinese;
  int total;
  int application;
  int oral;

public:
  void set_scores(int i)
  {
    int applicationscore[] = {70, 75, 80, 85, 90};
    int oralscore[] = {65, 70, 75, 80, 85, 90, 95};
    int application_rand, oral_rand;

    name = "aaaaaa";
    for (int j = 0; j < 6; j++)
    {
      name[j] += rand() % 26;
    }
    //(max - min + 1) + min
    math = rand() % (8 - 4 + 1) + 4;
    if (i > 1023)
      english = rand() % (11 - 7 + 1) + 7;
    else
      english = rand() % (6 - 3 + 1) + 3;
    nature = rand() % (11 - 7 + 1) + 7;
    society = rand() % (11 - 9 + 1) + 9;
    chinese = rand() % (12 - 8 + 1) + 8;
    application_rand = rand() % 5;
    application = applicationscore[application_rand];

    oral_rand = rand() % 7;
    oral = oralscore[oral_rand];

    total = chinese + english + math + nature + society + application + oral;
  }
  void myoutput()
  {
    cout << name << " M=" << math << " E=" << english << " N=" << nature << " S=" << society << " C=" << chinese << " A=" << application << " O=" << oral << " total=" << total << endl;
  }

  int math_high(vector<score> q)
  {

    int maxmath = 0, math_index;

    for (int i = 0; i < 2048; i++)
    {
      if (q[i].math > maxmath)
      {
        maxmath = q[i].math;
        math_index = i;
      }
    }
    return math_index;
  }

  int english_high(vector<score> q)
  {

    int maxe = 0, e_index;

    for (int i = 0; i < 2048; i++)
    {
      if (q[i].english > maxe)
      {
        maxe = q[i].english;
        e_index = i;
      }
    }
    return e_index;
  }

  int application_high(vector<score> q)
  {

    int maxapplication = 0, application_index;

    for (int i = 0; i < 2048; i++)
    {
      if (q[i].application > maxapplication)
      {
        maxapplication = q[i].application;
        application_index = i;
      }
    }
    return application_index;
  }

  int oral_high(vector<score> q)
  {

    int maxoral = 0, oral_index;

    for (int i = 0; i < 2048; i++)
    {
      if (q[i].oral > maxoral)
      {
        maxoral = q[i].oral;
        oral_index = i;
      }
    }
    return oral_index;
  }
};

int main()
{
  srand(time(NULL));
  vector<score> t;
  score a;
  for (int i = 0; i < 2048; i++)
  {
    a.set_scores(i);

    t.push_back(a);
    // t[i].myoutput();
  }

  t[a.math_high(t)].myoutput();
  t[a.english_high(t)].myoutput();
  t[a.application_high(t)].myoutput();
  t[a.oral_high(t)].myoutput();
}
