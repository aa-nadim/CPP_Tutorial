#include<stdio.h>
#include<conio.h>

int main()
{
    int h=0,m=0,s=0;
    printf("Enter HH  MM  SS\n");
    scanf("%d%d%d",&h,&m,&s);

    start:;

    for(h;h<24;h++){

        for(m;m<60;m++){

            for(s;s<60;s++){

                clrscr();

                printf("\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t%d : %d : %d\n",h,m,s);

                for(double i=0;i<9999999;i++){

                    i++;
                    i--;
                }
            }

            s=0;
        }

        m=0;
    }

    goto start;
    getch();
}
