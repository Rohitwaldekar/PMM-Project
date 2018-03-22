#include<stdio.h>
#include<string.h>

struct login
    {
        char name[20];
        char pass[20];
    };


int main()
{

   int flag=1;
    int count=1;
     while(flag!=0)
     {
         system("cls");
    printf("\n\n\t\tWho is you \"Role Model\" ? :\n\n\t\t\t\t");
    char que[20];
    gets(que);

    struct login employ[25];
    FILE *pt;

    int cho;
    int a=0;
      pt=fopen("E:\\Project\\security.txt","r");

    if(pt==EOF)
        printf("\n\t\t\tError in opening");
    else
    {

        while(a<25)
        {
            fread(employ[a].name,20,1,pt);
            if(0==strcmp(que,employ[a].name))
            {
                system("cls");
                flag=0;
                break;
                return 0;
            }
              a++;
        }
    }
    count++;

        if(count==4||flag==0)
            break;
        if(flag!=0)
        {
        printf("\n\t\t\t\tInvalid Answer !\n");
        printf("\n\t\t\t\t[1] Retry\n");
        printf("\n\t\t\t\t[2] Exit\n");
        scanf("%d",&cho);
        if(cho==1)
            system("cls");
                          if(cho==2)
        {
            system("cls");
            return 0;
        }
        }


    fclose(pt);
     }
}
