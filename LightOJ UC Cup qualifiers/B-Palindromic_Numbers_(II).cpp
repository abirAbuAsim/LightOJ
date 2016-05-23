// Verdict : Accepted
// LightOJ
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int testCase;
    string str;
    cin >> testCase;
    int I, J;
    bool flag;
    for (I = 1; I <= testCase; I++)
    {
         cin >> str;
         int len = str.size();
         int lastIndex = len - 1;
         flag = true;
         for (J = 0; J < (len / 2); J++)
         {
             if (str.at(J) != str.at(lastIndex - J))
             {
                 flag = false;
             }
         }
         if (flag)
         {
             printf("Case %d: Yes\n", I);
         }
         else
         {
            printf("Case %d: No\n", I);
         }

    }
    return 0;
}

