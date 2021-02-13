///..*..
///.***.
///*****
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int row,col;
    for(row=1;row<=3;row++){
        for(col=1;col<=3;col++){
            if(col<=3-row)
                cout<<".";
            else
                cout<<"*";
        }
        for(col=1;col<3;col++){
            if(col<row)
                cout<<"*";
            else
                cout<<".";
        }cout<<endl;
    }
    return 0;
}
