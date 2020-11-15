///  1
/// 121
///12321
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int row,j,k,l;
    for(row=1;row<=3;row++)
    {
        for(j=1;j<=(3-row);j++)
            cout<<" ";
        for(k=1;k<=row;k++)
            cout<<k;
        for(l=(row-1);l>=1;l--)
            cout<<l;
        cout<<endl;
    }return 0;
}

