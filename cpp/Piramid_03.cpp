///12321
///.232.
///..3..
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int row,col;
    for(row=1;row<=3;row++){
        for(col=1;col<=3;col++){
            if(col>=row)
                cout<<col;
            else
                cout<<".";
        }
        for(col=2;col>0;col--){
            if(col>=row)
                cout<<col;
            else
                cout<<".";
        }
        cout<<endl;
    }
    return 0;
}

