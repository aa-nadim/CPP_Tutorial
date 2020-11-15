#include<iostream>
#include<cstring>
using namespace std;
class book
{
    char author[50][50];
    int price[50];
    char title[50][50];
    char publisher[50][50];
    int count,copy[50];
public:
    void cnt() {count =0;}
    void getinformation()
    {
        cout<<"Enter name of the Author\n";
        cin>>author[count];
        cout<<"Enter the name of book\n";
        cin>>title[count];
        cout<<"Enter name of publisher\n";
        cin>>publisher[count];
        cout<<"Enter the price amount\n";
        cin>>price[count];
        cout<<"Enter the copy of book\n";
        cin>>copy[count];
        count++;
    }
    void sold()
    {
        char name[50],aut[50]; int found=0;
        cout<<"Enter the name of book and name of author to search\n";
        cin>>name>>aut;
        int k=0;
        for(int i=0;i<count;i++)
        {
            int cost=0;
            if(!strcmp(name,title[i])&&!strcmp(aut,author[i]))
            {
                int item;
                cout<<title[i]<<" by "<<author[i] <<" is available\n";
                found==1;
                cout<<"Enter the required number of books\n";
                cin>>item;
                if(copy[i]>item)
                {
                  for(int j=0;j<item;j++)
                        cost=cost+price[i];
                        cout<<"Total cost of books\t"<<cost<<endl;
                        copy[i]=copy[i]-item;
                }
                else if(copy[i]<item){
                    cout<<"Required number of items is not available\n";
                }
                break;
            }
            k++;
        }
         if(found==0)
                cout<<"The book is not available\n";
    }
    void display();
};
void book:: display()
{
    for(int i=0;i<count;i++)
    {
        cout<<"Name of book\t"<<title[i]<<endl;
        cout<<"Name  of author\t"<<author[i]<<endl;
        cout<<"Name of publisher\t"<<publisher[i]<<endl;
        cout<<"Total copy available\t"<<copy[i]<<endl;
        cout<<"Price of each book\t"<<price[i]<<endl;
    }
}
int main()
{
    book b1;
    b1.cnt();
    int x;
    do
    {
        cout<<"1.Add a book\n";
        cout<<"2.Want to sell book?\n";
        cout<<"3.Display\n";
        cout<<"4.Quit\n";
        cin>>x;
        switch(x)
        {
            case 1: b1.getinformation(); break;
            case 2: b1.sold(); break;
            case 3: b1.display(); break;
            case 4: break;
        }
    } while(x!=4);
    return 0;
}
