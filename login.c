#include<stdio.h>
#include<string.h>

struct login
    {
            char name[20];
            char pass[20];
    };

int main(void)
{
    struct login employ[25];
    FILE *p;
    char temp[20]="rohit";
    p=fopen("E:\\Project\\security.txt","w+");
      if(p==EOF)
        printf("Error");
    else
    {

          int i=0;
        while(i<2)
        {

        gets(employ[i].name);
        fwrite(employ[i].name,20,1,p);

        i++;
        }
        printf("Success");

    }
    fclose(p);
    return 0;
}
