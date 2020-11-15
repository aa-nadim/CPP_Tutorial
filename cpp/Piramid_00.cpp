///*..
///**.
///***
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int row,col;
    for(row=0;row<3;row++){
        for(col=0;col<3;col++){
            if(col<=row)
                cout<<"*";
            else
                cout<<".";
        }cout<<endl;
    }

    return 0;
}
