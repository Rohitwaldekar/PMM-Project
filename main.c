//main body program
#include<stdio.h>
#include<string.h>

char user[20];
char pass[20];
int cho;
struct login
    {
        char name[20];
        char pass[20];
    };

int usernamea(int me);
int password(int me);
int question();
int changepass(int op);
int adminmenu();
int employmenu();
int adduser();
int removeuser();

int main(void)
{
    printf("\n\n\t\t\t\t    **** PRODUCT MASTER MAINTAINANCE ****\n");
    printf("\t\t\t\t\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\n");

     printf("\n\t\t\t\t\t\tType Of User\n");
      printf("\t\t\t\t\t    =====================\n");

    printf("\n\tWhich type of user you are :\n\n");
    printf("\n\t\t[1] Employ\n");
    printf("\n\t\t[2] Administrator\n\n");

    printf("\n\t\t   Select Option : ");
    int op;
    int qt;
          scanf("%d",&op);
        if(op==1)
          {
                qt=1;
                usernamea(qt);
                password(qt);
          }
        if(op==2)
          {     qt=2;
                usernamea(qt);
                password(qt);
          }
return 0;
}
int usernamea(int me)
{
     system("cls");
     int flag=1;
     while(flag!=0)
     {
        printf("\n\n\t\t\t\t    **** PRODUCT MASTER MAINTAINANCE ****\n");
        printf("\t\t\t\t\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\n");

        printf("\n\t\t\t\t\t\tLogin Window\n");
        printf("\t\t\t\t\t    =====================\n");

    //char user[20];
    printf("\n\n");
    printf("\t\tUser Name :");
    scanf("%s",user);

//user name code
    struct login employ[25];
    FILE *pt;
    int a=0;
    //int cho;

    if(me==1)
      pt=fopen("E:\\Project\\username.txt","r");

    if(me==2)
      pt=fopen("E:\\Project\\adminuser.txt","r+");

    if(pt==EOF)
        printf("\n\t\t\tError in opening");
    else
    {
        while(a<25)
        {
            fread(employ[a].name,20,1,pt);
            if(0==strcmp(user,employ[a].name))
            {
                  flag=0;
            }
              a++;
        }
        if(flag!=0)
        {
        printf("\n\t\t\t\tInvalid User Name !\n");
        printf("\n\t\t\t\tEntr [1] to Retry !\n");
        scanf("%d",&cho);
        if(cho==1)
            system("cls");
        else
        {
            system("cls");
            return 0;
        }

        }
    }
    fclose(pt);
    }
}
//Enter password
int password(int me)
{
    system("cls");
    int flag=1;
    int count=1;
     while(flag!=0)
     {

        printf("\n\n\t\t\t\t    **** PRODUCT MASTER MAINTAINANCE ****\n");
        printf("\t\t\t\t\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\n");

        printf("\n\t\t\t\t\t\tLogin Window\n");
        printf("\t\t\t\t\t    =====================\n");

    //char user[20];
    printf("\n\n");
    printf("\t\tUser Name :");
    printf("%s",user);

      printf("\n\n");
    int i=0;
    printf("\t\tPassword  :");
    while((pass[i]=getch())!= 13)
    {
        i++;
        printf("*");
    }
    pass[i] = '\0';
    printf("\n");
   struct login employ[25];
    FILE *pt;
    int a=0;
    //int cho;
    if(me==1)
      pt=fopen("E:\\Project\\username.txt","r");

    if(me==2)
      pt=fopen("E:\\Project\\adminuser.txt","r");

    if(pt==EOF)
        printf("\n\t\t\tError in opening");
    else
    {
        while(a<25)
        {
            fread(employ[a].pass,20,1,pt);
            if(0==strcmp(pass,employ[a].pass))
            {
               if(me==1)
                employmenu();

                if(me==2)
                adminmenu();

                  flag=0;
                   return 0;
            }
              a++;
        }
    }
    count++;
        if(count==4)
        break;
        printf("\n\t\t\t\tInvalid Password !\n\n");
        printf("\n\t\t\t\t%d attempt complete out of 3 !\n\n",count-1);
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
    fclose(pt);
     }
     system("cls");
    return 0;
}
// Admen Menu
int adminmenu()
{
             system("cls");

        printf("\n\n\t\t\t\t    **** PRODUCT MASTER MAINTAINANCE ****\n");
        printf("\t\t\t\t\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\n");

        printf("\n\t\t\t\t\t\tAdmen Menu\n");
        printf("\t\t\t\t\t  =====================\n");

    printf("\n");
    printf("\n\t\t[1] Change your password\n");
    printf("\n\t\t[2] Add user\n");
    printf("\n\t\t[3] Remove user\n");
    printf("\n\t\t[4] Report Verification\n");
    printf("\n\t\t[5] Exit\n");
    int cho;
    scanf("%d",&cho);
    if(cho==1)
    {
        int op=2;
        changepass(op);
    }
    if(cho==5)
    {
        system("cls");
        return 0;
    }
    if(cho==2)
    {
    adduser();
    }
    return 0;
}
//change password
int changepass(int op)
{char menu;
menu:
    system("cls");
        printf("\n\n\t\t\t\t    **** PRODUCT MASTER MAINTAINANCE ****\n");
        printf("\t\t\t\t\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\n");

        printf("\n\t\t\t\t\t\tChange Password\n");
        printf("\t\t\t\t\t     =====================\n");

printf("\n\n\tEnter New Password :\t");
        char newpass1[20],newpass2[20];
        int i=0;
    while((newpass1[i]=getch())!= 13)
    {
        i++;
        printf("*");
    }
    newpass1[i] = '\0';
    i=0;
printf("\n\n\tConform Your Password : ");
    while((newpass2[i]=getch())!= 13)
    {
        i++;
        printf("*");
    }
    newpass2[i] = '\0';

if(0==strcmp(newpass2,newpass1))
    {
        struct login  employ[25];
    FILE *pt;
    int a=0;
    //int cho;

    if(op==1)
      pt=fopen("E:\\Project\\username.txt","a+");

    if(op==2)
      pt=fopen("E:\\Project\\adminuser.txt","a+");

    if(pt==EOF)
        printf("\n\t\t\tError in opening");
    else
    {
        strcpy(employ[0].name,newpass1);
        fwrite(employ[0].name,20,1,pt);

        printf("\n\n\t\t\t\tPassword changed Successful !\n");
        printf("\n\t\t\t\t[1] Main Menu\n");
        printf("\n\t\t\t\t[2] Exit\n");
        scanf("%d",&cho);
        if(cho==1)
            adminmenu();
        if(cho==2)
        {
            system("cls");
            return 0;
        }
    }
    fclose(pt);
}
else
    {
        printf("\n\n\t\t\t\tDistinct Password !\n");
        printf("\n\t\t\t\t[1] Retry\n");
        printf("\n\t\t\t\t[2] Exit\n");
          scanf("%d",&cho);
        if(cho==1)
            goto menu;
        if(cho==2)
        {
            system("cls");
            return 0;
        }
    }

    return 0;
}
//add user
int adduser()
{
    char menu;
    menu:
    system("cls");
        printf("\n\n\t\t\t\t    **** PRODUCT MASTER MAINTAINANCE ****\n");
        printf("\t\t\t\t\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\n");

        printf("\n\n\t\t\t\t\t\tAdd User\n");
        printf("\t\t\t\t\t  =====================\n");

        printf("\n\tSelect Type Of User You Have To Add :\n");
        printf("\t------------------------------------");

        printf("\n\t\t\t\t[1] Administrator\n");
        printf("\n\t\t\t\t[2] Employee\n");
          scanf("%d",&cho);

    system("cls");
        printf("\n\n\t\t\t\t    **** PRODUCT MASTER MAINTAINANCE ****\n");
        printf("\t\t\t\t\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\n");

        printf("\n\n\t\t\t\t\t\tAdd User\n");
        printf("\t\t\t\t\t  =====================\n\n");

        char new[20],newpass[20];

         struct login employ[25];
    FILE *pt;
    int a=0;
    if(cho==2)
      pt=fopen("E:\\Project\\username.txt","a+");

    if(cho==1)
      pt=fopen("E:\\Project\\adminuser.txt","a+");

    if(pt==EOF)
        printf("\n\t\t\tError in opening");
    else
    {
        printf("\tEnter User Name : ");
        scanf("%s",new);

        strcpy(employ[0].name,new);
        fwrite(employ[0].name,20,1,pt);

        printf("\n\tEnter Password : ");
        scanf("%s",newpass);

        strcpy(employ[0].pass,newpass);
        fwrite(employ[0].pass,20,1,pt);
    }
    fclose(pt);

    printf("\n\t\t\t\tUser Successfully Added !\n");
    printf("\n\t\t\t\t[1] Add user\n");
    printf("\n\t\t\t\t[2] Main Menu\n");
    printf("\n\t\t\t\t[3] Exit\n");
     int cho;
     scanf("%d",&cho);
        if(cho==1)
            goto menu;
        if(cho==3)
        {
            system("cls");
            return 0;
        }
        if(cho==2)
            adminmenu();
}

//user menu
int employmenu()
{
    system("cls");

        printf("\n\n\t\t\t\t    **** PRODUCT MASTER MAINTAINANCE ****\n");
        printf("\t\t\t\t\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\n");

        printf("\n\t\t\t\t\t\tEmployee Menu\n");
        printf("\t\t\t\t\t    =====================\n");

    printf("\n");
    printf("\n\t\t[1] Change your password\n");
    printf("\n\t\t[2] Modify Product\n");
    printf("\n\t\t[3] Add product\n");
    printf("\n\t\t[4] Add Supplier\n");
    printf("\n\t\t[5] Remove Supplier\n");
    printf("\n\t\t[6] Product Report\n");
    printf("\n\t\t[7] Exit\n");
    int cho;
    scanf("%d",&cho);
    if(cho==1)
    {
        int op=1;
        changepass(op);
    }
    if(cho==7)
    {
        system("cls");
        return 0;
    }

    return 0;
}
