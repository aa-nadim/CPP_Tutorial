#include<iostream>
using namespace std;
class stamp
{
    int height,base,tri,side,length,sqr;
    float radius,width,cir,rec;
public:
    void area(int h,int b)
    {
        height=h; base=b;
        tri=0.5*height*base;
    }
    void area(float r)
    {
        radius=r;
       cir=3.14*radius*radius;
    }
    void area(int s)
    {
        side=s;
        sqr=side*side;
    }
    void area(int l,float w)
    {
        length=l; width=w;
        rec=length*width;
    }
    void display()
    {
        cout<<"Area of triangle\t"<<tri<<endl;
        cout<<"Area of circle\t"<<cir<<endl;
        cout<<"Area of square\t"<<sqr<<endl;
        cout<<"Area of rectangular\t"<<rec<<endl;
    }
};
int main()
{
    stamp s1;
    int a,b,c,d;
    float e,f;
    cout<<"Enter the height and base of triangle\n";
    cin>>a>>b;
    s1.area(a,b);
    cout<<"Enter the side of square\n";
    cin>>c;
    s1.area(a);
    cout<<"Enter the length and width of rectangular\n";
    cin>>d>>e;
    s1.area(d,e);
    cout<<"Enter the radius of circle\n";
    cin>>f;
    s1.area(f);
    s1.display();
    return 0;
}
