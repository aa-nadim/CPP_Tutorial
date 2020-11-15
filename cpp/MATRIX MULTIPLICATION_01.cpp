#include<iostream>
using namespace std;

class matrix
{
    int x[3][3];
public:
    void getdata();
    void putdata();
    friend matrix multi(matrix,matrix);
    friend matrix add(matrix,matrix);
};
void matrix::getdata()
{
    int i,j;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            cin>>x[i][j];
        }
    }
}
void matrix::putdata()
{
    int i,j;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            cout<<x[i][j]<<"  ";
        }
        cout<<endl;
    }
}
matrix multi(matrix A,matrix B)
{
    matrix temp;
    int i,j,k,sum;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            sum=0;
            for(k=0;k<3;k++)
            {
                sum=sum+A.x[i][k]*B.x[k][j];
            }
            temp.x[i][j]=sum;
        }
    }
    return temp;
}
matrix add(matrix A,matrix B)
{
    int i,j,k,temp,sum;
            for(i=0;i<3;i++)
        {
            sum=0;
            for(j=0;j<3;j++)
            {
                sum=A.x[i][j]+B.x[i][j];
            }

}
}

int main()
{
    matrix A,B,C,D,E;
    cout<<"Enter 9  element of Matrix A: "<<endl;
    A.getdata();
    cout<<"Enter 9 element of Matrix B :"<<endl;
    B.getdata();
    C=multi(A,B);
    cout<<endl<<"Matrix A: "<<endl;
    A.putdata();
    cout<<endl<<"Matrix B:"<<endl;
    B.putdata();
    cout<<endl<<"Matrix Multiplication C= A X B"<<endl;
    C.putdata();
     D=add(A,B);
     cout<<endl<<"Matrix Addition  D= A + B"<<endl;
    D.putdata();

    return 0;
}

