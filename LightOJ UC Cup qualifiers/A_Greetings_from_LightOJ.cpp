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
        printf("Case %d: %ld\n", I,(a+b));
    }
    return 0;
}
