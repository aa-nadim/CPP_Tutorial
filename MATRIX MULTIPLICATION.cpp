///5.6 exercise code
#include<iostream>
using namespace std;

class matrix
{
    int m[3][3];
public:
    void set();
    void display();
    friend matrix multi(matrix,matrix);
};
void matrix::set()
{
    int i,j;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            cin>>m[i][j];
        }
    }
}
void matrix::display()
{
    int i,j;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            cout<<m[i][j]<<"  ";
        }
        cout<<endl;
    }
}
matrix multi(matrix ob1,matrix ob2)
{
    matrix tmp;
    int i,j,k,sum;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            sum=0;
            for(k=0;k<3;k++)
            {
                sum=sum+ob1.m[i][k]*ob2.m[k][j];
            }
            tmp.m[i][j]=sum;
        }
    }
    return tmp;
}

int main()
{
    matrix ob1,ob2,ob3;
    cout<<"Enter 9 matrix element of ob1.."<<endl;
    ob1.set();
    cout<<"Enter 9 matrix element of ob2.."<<endl;
    ob2.set();
    ob3=multi(ob1,ob2);
    cout<<"Matrix of object 1..."<<endl;
    ob1.display();
    cout<<"Matrix of object 2..."<<endl;
    ob2.display();
    cout<<"Multiplication result matrix of two matrix.."<<endl;
    ob3.display();
    return 0;
}
