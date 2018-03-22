#include<stdio.h>
#include<string.h>

struct login
    {
            char name[20];
            char pass[20];
    };

int main(void)
{
    char temp[20]="rohit";
    struct login employ[25];
    FILE *p;

      p=fopen("E:\\Project\\username.txt","r+");
    if(p==EOF)
        printf("Error for opening");
    else
    {
        int i=0;
        while(i<25)
        {


            fread(employ[2].name,20,1,p);
            if(0==strcmp(temp,employ[i].name))
              printf("%s",employ[2].name);
              i++;
        }
    }
    fclose(p);
    return 0;
}
