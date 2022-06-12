#include <iostream>
#include <cstdlib>
#include <vector>
#include <string>
using namespace std;

int mostWordsFound(vector<string> &sentences)
{
    int a[sentences.size()];
    vector<int> b;
    for (int i = 0; i < sentences.size(); i++)
    {
        int sum = 0;
        for (long j = 0; j < sentences[i].size(); j++)
        {
            if (sentences[i][j] == ' ')
                sum++;
        }
        sum++; //算單字量(每一個)
        b.push_back(sum);
    }
    int max = 0;

    for (int k = 0; k < b.size(); k++)
    {

        if (max < b[k])
            max = b[k];
    }

    return max;
}

int main()
{

    vector<string> b = {"please wait for me", "continue to fight", "continue to win"};

    int ans = mostWordsFound(b);

    cout << ans << endl;

    return 0;
}