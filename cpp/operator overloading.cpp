#include<iostream>
using namespace std;
class MAT
{
public:
    int a[100][100], b[100][100], c[100][100], d[100][100], e[100][100];
    int sq;
    void getdim(){cin>>sq;}
    void getdata1()
    {
        for(int i=0;i<sq;i++)
        {
            for(int j=0;j<sq;j++)
                cin>>a[i][j];
        }
    }
    void getdata2()
    {
        for(int i=0;i<sq;i++)
        {
            for(int j=0;j<sq;j++)
                cin>>b[i][j];
        }
    }
    void add()
    {
        for(int i=0;i<sq;i++)
        {
            for(int j=0;j<sq;j++)
            {
                c[i][j]=a[i][j]+b[i][j];
            }
        }
    }
    void subtr()
    {
        for(int i=0;i<sq;i++)
        {
            for(int j=0;j<sq;j++)
            {
                d[i][j]= (a[i][j])- (b[i][j]);
            }
        }
    }
    void multiple()
    {
        for(int i=0;i<sq;i++)
        {
            for(int j=0;j<sq;j++)
            {
                int sum =0;
                for(int k=0;k<sq;k++)
                    sum = sum + (a[i][k] * b[k][j]);
                e[i][j]=sum;
            }
        }
    }
    void display()
    {
        cout<<"Matrix A : \n";
        for(int i=0;i<sq;i++)
        {
            for(int j=0;j<sq;j++)
                cout<<a[i][j]<<" ";
            cout<<endl;
        }
        cout<<"\n\nMatrix B : \n";
        for(int i=0;i<sq;i++)
        {
            for(int j=0;j<sq;j++)
                cout<<b[i][j]<<" ";
            cout<<endl;
        }
        cout<<"\n\nMatrix C : \n";
        for(int i=0;i<sq;i++)
        {
            for(int j=0;j<sq;j++)
                cout<<c[i][j]<<" ";
            cout<<endl;
        }
        cout<<"\n\nMatrix D : \n";
        for(int i=0;i<sq;i++)
        {
            for(int j=0;j<sq;j++)
                cout<<d[i][j]<<" ";
            cout<<endl;
        }
        cout<<"\n\nMatrix E : \n";
        for(int i=0;i<sq;i++)
        {
            for(int j=0;j<sq;j++)
                cout<<e[i][j]<<" ";
            cout<<endl;
        }
    }
};
int main()
{
    MAT x;
    x.getdim();
    x.getdata1();
    x.getdata2();
    x.add();
    x.subtr();
    x.multiple();
    x.display();
    return 0;
}

