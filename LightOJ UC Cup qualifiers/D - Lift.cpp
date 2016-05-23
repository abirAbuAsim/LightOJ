// Verdict : Accepted
// LightOJ
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int testCase;
    long a, b;
    cin>>testCase;
    for (int I = 1; I <= testCase; I++)
    {
        cin>>a>>b;
        long total = abs(a - b) + abs(a - 0);
        total = total * 4;
        printf("Case %d: %ld\n", I, (total + 19));
    }
    return 0;
}
