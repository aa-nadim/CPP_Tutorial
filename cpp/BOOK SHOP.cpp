///6.3 exercise code..
#include<iostream>
#include<cstring>
using namespace std;

class Shop
{
    char author[30];
    char title[30];
    char publisher[30];
    int stock_position;
    double price;
public:
    void set();
    void searchdisplay(char*,char*,Shop[]);
};
void Shop::set()
{
    cout<<"Enter Author.........";cin>>author;
    cout<<"Enter Title..........";cin>>title;
    cout<<"Enter Publisher......";cin>>publisher;
    cout<<"Enter Stock_position.";cin>>stock_position;
    cout<<"Enter price .........";cin>>price;
    cout<<endl;
}
void Shop::searchdisplay(char*au,char*ti,Shop book[])
{
    for(int i=0;i<3;i++)
    {
        if((strcmp(book[i].title,ti)==0)&&(strcmp(book[i].author,au)==0))
        {
            cout<<"Book details.."<<endl;
            cout<<"Author     : "<<book[i].author<<endl;
            cout<<"Title      : "<<book[i].title<<endl;
            cout<<"Publishr   : "<<book[i].publisher<<endl;
            cout<<"S_position : "<<book[i].stock_position<<endl;
            cout<<"Price      : "<<book[i].price<<endl;
            int y;
            cout<<"Enter 1 to sell...";cin>>y;
            if(y==1)
            {
                cout<<"Cost  : "<<book[i].price<<endl<<endl;
                strcpy(book[i].author,"Already sold");
                strcpy(book[i].title,"Already sold");
            }
            return ;
        }
    }
    cout<<"Required copies is not in stock."<<endl<<endl;
}
int main()
{
    char title[30],author[30];
    Shop*book=new Shop[20];
    for(int i=0;i<3;i++)
    {
        book[i].set();
    }
    for(int i=0;i<3;i++)
    {
        cout<<"Enter Author and Title to sell..."<<endl;
        cin>>author>>title;
        book[i].searchdisplay(author,title,book);
    }
    return 0;
}
