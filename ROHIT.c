/*int READ(char file_name[],char check[])
{
    struct login employ[25];
    FILE *p;

    p=fopen(file_name,"r+");
    if(p==EOF)
        return 0;
    else
    {
        int i=0;
        while(i<25)
        {
            fread(employ[i].name,20,1,p);
            if(0==strcmp(check,employ[i].name))
              i++;
        }
    }
    fclose(p);
    return 1;
}



//Read ....................
*/

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

    p=fopen("E:\\Rohit\\Project\\pass.txt","r+");
    if(p==EOF)
        printf("Error for opening");
    else
    {
        int i=0;
        while(i<10)
        {
            fread(employ[i].name,20,1,p);
            if(0==strcmp(temp,employ[i].name))
              printf("My love.");
              i++;
        }
    }
    fclose(p);
    return 0;
}
