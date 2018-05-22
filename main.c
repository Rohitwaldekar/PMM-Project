//main body program
#include<stdio.h>
#include<string.h>

char user[20];
char pass[20];
char id[20];
int cho;//,product=1000;
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
int addsupplier();
int removesupplier();
int addproduct();

int main(void)
{//addproduct();
    system("cls");
    printf("\n\n\t\t\t\t    **** PRODUCT MASTER MAINTAINANCE ****\n");
    printf("\t\t\t\t\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\n");

     printf("\n\t\t\t\t\t\tType Of User\n");
      printf("\t\t\t\t\t    =====================\n");

    printf("\n\tWhich type of user you are :\n\n");
    printf("\n\t\t[1] Employ\n");
    printf("\n\t\t[2] Administrator\n");
    printf("\n\t\t[3] Close System\n\n");

    //printf("\n\t\t   Select Option : ");
    int op;
    //int qt;
    scanf("%d",&op);
        if(op==1)
          {
               // qt=1; 
                usernamea(op);
                main();
                //password(qt);
          }
        if(op==2)
          {     //qt=2;
                usernamea(op);
                main();
                //password(qt);
          }
        if(op==3)
        {
            system("cls");
            return 0;
        }

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
                  password(me);
                  return 0;
            }
              a++;
        }
    }
    fclose(pt);
        if(flag!=0)
        {
        printf("\n\t\t\t\tInvalid User Name !\n");
        printf("\n\t\t\t\t[1] Retry\n");
        printf("\n\t\t\t\t[2] Exit\n");
        scanf("%d",&cho);
        if(cho==1)
            system("cls");
	        if(cho==2)
	        {
	            main();
	            return 0;
	        }

        }
    
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
    fclose(pt);
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
           // main();
            system("cls");
            return 0;
        }
     }
    return 0;
}
// Admen Menu
int adminmenu()
{
             system("cls");

        printf("\n\n\t\t\t\t    **** PRODUCT MASTER MAINTAINANCE ****\n");
        printf("\t\t\t\t\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\n");

        printf("\n\t\t\t\t\t\tAdmin Menu\n");
        printf("\t\t\t\t\t  =====================\n");

    printf("\n");
    printf("\n\t\t[1] Change your password\n");
    printf("\n\t\t[2] Add user\n");
    printf("\n\t\t[3] Remove user\n");
    printf("\n\t\t[4] Report Verification\n");
    printf("\n\t\t[5] Log Out\n");
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
    if(cho==3)
    {
    removeuser();
    }
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
        //printf("\n\t\t\t\t[1] Main Menu\n");
        printf("\n\t\t\t\t[1] Exit\n");
        scanf("%d",&cho);
        if(cho==1)
            adminmenu();
       /* if(cho==2)
        {
            adminmenu();
            return 0;
        }*/
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
            adminmenu();
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

        printf("\n\n\t\t\t\t[1] Administrator\n");
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
    //printf("\n\t\t\t\t[2] Main Menu\n");
    printf("\n\t\t\t\t[2] Exit\n");
     int cho;
     scanf("%d",&cho);
        if(cho==1)
            goto menu;
        /*if(cho==3)
        {
            system("cls");
            return 0;
        }*/
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
    printf("\n\t\t[7] Log Out\n");
    int cho,op;
    scanf("%d",&cho);
    switch(cho)
    {
    	case 1:op=1;
        		changepass(op);
    			break;
    			
    	case 2:
    			break;
    			
    	case 3:addproduct();
    			break;
    			
    	case 4:addsupplier();
    			break;
    			
    	case 5:removesupplier();
    			break;
    			
		case 6:
    			break;
    			
		case 7:system("cls");
        		return 0;
    			break;
    			
		default:employmenu();
				break;
    }
    return 0;
}

//Remove user
int removeuser()
{
    system("cls");
        printf("\n\n\t\t\t\t    **** PRODUCT MASTER MAINTAINANCE ****\n");
        printf("\t\t\t\t\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\n");

        printf("\n\n\t\t\t\t\t\tRemove User\n");
        printf("\t\t\t\t\t   =====================\n");

        printf("\n\tSelect Type Of User Want Delete :\n");
        printf("\t------------------------------------");

        printf("\n\n\t\t\t\t[1] Administrator\n");
        printf("\n\t\t\t\t[2] Employee\n");
          scanf("%d",&cho);

    system("cls");
        printf("\n\n\t\t\t\t    **** PRODUCT MASTER MAINTAINANCE ****\n");
        printf("\t\t\t\t\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\n");

        printf("\n\n\t\t\t\t\t\tRemove User\n");
        printf("\t\t\t\t\t  =====================\n\n");

	struct login employ[50];
    FILE *pt,*te;
    int a=0,n;
    if(cho==2)
      pt=fopen("E:\\Project\\username.txt","a+");

    if(cho==1)
      pt=fopen("E:\\Project\\adminuser.txt","a+");

    if(pt==EOF)
        printf("\n\t\t\tError in opening");
    else
    {
    	//fread(employ[a].name,20,1,pt);
			while(fread(employ[a].name,20,1,pt)==1)
	        {
	        	//fscanf(pt,"%s",employ[a].name);
	            printf("\n\t[%d] %s\n",a,employ[a].name);
	            fread(employ[a].pass,20,1,pt);
             	a+=1;
	        }
			printf("\n\t\t\tSelect User NO. : ");
			scanf("%d",&n);
  	}
    fclose(pt);
	if(cho==2)
      pt=fopen("E:\\Project\\username.txt","r+");

    if(cho==1)
      pt=fopen("E:\\Project\\adminuser.txt","r+");

    if(pt==EOF)
        printf("\n\t\t\tError in opening");
    else
    {	
    	te=fopen("E:\\Project\\temp.txt","w+");
    	if(te==EOF)
        printf("\n\t\t\tError in opening");
	    else
	    { a=0;
			while(fread(employ[a].name,20,1,pt)==1)
	        {
	        	//fscanf(pt,"%s",employ[a].name);
	            //printf("\n\t[%d] %s\n",a,employ[a].name);
	            if(a==n )
	            {
            		fread(employ[a].pass,20,1,pt);
            		a++;
					continue;	
            	}
	            //strcpy(employ[0].pass,newpass);
        		fwrite(employ[a].name,20,1,te);
				fread(employ[a].pass,20,1,pt);
				fwrite(employ[a].pass,20,1,te);
             	a+=1;
	        }
		}
		
			fclose(te);
		/*	if(remove("E:\\Project\\username.txt")==0)
			printf("\n\t\t\tSuccesfuly Removed ! ");
			else
			printf("\n\t\t\tUnable to Removed ! ");	*/
  	}
    fclose(pt);
    if(cho==2)
      remove("E:\\Project\\username.txt");

    if(cho==1)
      remove("E:\\Project\\adminuser.txt");

//	remove("E:\\Project\\username.txt");
    
    if(cho==2)
      pt=fopen("E:\\Project\\username.txt","w+");

    if(cho==1)
      pt=fopen("E:\\Project\\adminuser.txt","w+");

    if(pt==EOF)
        printf("\n\t\t\tError in opening");
    else
    {	a=0;
    	te=fopen("E:\\Project\\temp.txt","r+");
    	if(te==EOF)
        printf("\n\t\t\tError in opening");
	    else
	    { 
			while(fread(employ[a].name,20,1,te)==1)
	        {
	        	//fscanf(pt,"%s",employ[a].name);
	            //printf("\n\t[%d] %s\n",a,employ[a].name);
	            //strcpy(employ[0].pass,newpass);
        		fwrite(employ[a].name,20,1,pt);
				fread(employ[a].pass,20,1,te);
				fwrite(employ[a].pass,20,1,pt);
             	a+=1;
    	    }
		}
		
			fclose(te);
  	}
    fclose(pt);
    remove("E:\\Project\\temp.txt");
    
    
    printf("\n\n\t\t\t\tUser Successfully Removed !\n");
    printf("\n\t\t\t\t[1] Remove user\n");
    //printf("\n\t\t\t\t[2] Main Menu\n");
    printf("\n\t\t\t\t[2] Exit\n");
     int cho;
     scanf("%d",&cho);
        if(cho==1)
            removeuser();
        if(cho==2)
            adminmenu();
}

int addsupplier()
{
	system("cls");
        printf("\n\n\t\t\t\t    **** PRODUCT MASTER MAINTAINANCE ****\n");
        printf("\t\t\t\t\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\n");

        printf("\n\n\t\t\t\t\t\tAdd Supplier\n");
        printf("\t\t\t\t\t   =====================\n");

        char nm[20];
         struct login employ[25];
    FILE *pt;
      pt=fopen("E:\\Project\\supplier.txt","a+");

    if(pt==EOF)
        printf("\n\t\t\tError in opening");
    else
    {
        printf("\n\tEnter User Name : ");
        scanf("%s",nm);

        strcpy(employ[0].name,nm);
        fwrite(employ[0].name,20,1,pt);
    }
    fclose(pt);
    
    printf("\n\t\t\t\tSupplier Successfully Added !\n");
    printf("\n\t\t\t\t[1] Add Supplier\n");
    printf("\n\t\t\t\t[2] Exit\n");
     int cho;
     scanf("%d",&cho);
	if(cho==1)
		addsupplier();
	if(cho==2)
		employmenu();
		
	return 0;
}

int removesupplier()
{
	system("cls");
        printf("\n\n\t\t\t\t    **** PRODUCT MASTER MAINTAINANCE ****\n");
        printf("\t\t\t\t\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\n");

        printf("\n\n\t\t\t\t\t\tRemove Supplier\n");
        printf("\t\t\t\t\t     =====================\n");

        char nm[20];
         struct login employ[25];
    FILE *pt,*te;
    int a=0,n;
      pt=fopen("E:\\Project\\supplier.txt","r+");

    if(pt==EOF)
        printf("\n\t\t\tError in opening");
    else
    {
    	//fread(employ[a].name,20,1,pt);
			while(fread(employ[a].name,20,1,pt)==1)
	        {
	        	//fscanf(pt,"%s",employ[a].name);
	            printf("\n\t[%d] %s\n",a,employ[a].name);
	            //fread(employ[a].pass,20,1,pt);
             	a+=1;
	        }
			printf("\n\t\t\tSelect Supplier NO. : ");
			scanf("%d",&n);
  	}
    fclose(pt);
	 pt=fopen("E:\\Project\\supplier.txt","r+");

    if(pt==EOF)
        printf("\n\t\t\tError in opening");
    else
    {	
    	te=fopen("E:\\Project\\temp.txt","w+");
    	if(te==EOF)
        printf("\n\t\t\tError in opening");
	    else
	    { a=0;
			while(fread(employ[a].name,20,1,pt)==1)
	        {
	            if(a==n )
	            {
            		a++;
					continue;	
            	}
	            //strcpy(employ[0].pass,newpass);
        		fwrite(employ[a].name,20,1,te);
             	a+=1;
	        }
		}
		
			fclose(te);
  	}
    fclose(pt);
    remove("E:\\Project\\supplier.txt");
    
    
    pt=fopen("E:\\Project\\supplier.txt","w+");
    if(pt==EOF)
        printf("\n\t\t\tError in opening");
    else
    {	a=0;
    	te=fopen("E:\\Project\\temp.txt","r+");
    	if(te==EOF)
        printf("\n\t\t\tError in opening");
	    else
	    { 
			while(fread(employ[a].name,20,1,te)==1)
	        {
        		fwrite(employ[a].name,20,1,pt);
			 	a+=1;
    	    }
		}
		
			fclose(te);
  	}
    fclose(pt);
    remove("E:\\Project\\temp.txt");
    
    
    printf("\n\n\t\t\t\tUser Successfully Removed !\n");
    printf("\n\t\t\t\t[1] Remove Supplier\n");
    printf("\n\t\t\t\t[2] Exit\n");
     int cho;
     scanf("%d",&cho);
	if(cho==1)
     	removesupplier();
 	if(cho==2)
	 	employmenu();
	 	
 	return 0;
}

int addproduct()
{
	system("cls");
	 printf("\n\n\t\t\t\t    **** PRODUCT MASTER MAINTAINANCE ****\n");
    printf("\t\t\t\t\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\n");

     printf("\n\t\t\t\t\t\tAdd Product\n");
      printf("\t\t\t\t\t   =====================\n");

    printf("\n\t\tFAMILY : Elecronics\n");
	printf("\n\t\tCLASS : [1]Laptop\n\t\t\t[2]Camera\n\t\t\t[3]Printer\n\t\t\t[4]Mobile\n\t\t\t[5]TV\n");
    printf("\n\t\t\tEnter CLASS for Product :");
    int cho;
    char ProductId[10];
    scanf("%d",&cho);
    switch(cho)
    {
    	case 1:strcpy(ProductId,"LAP-");
    			break;

    	case 2:strcpy(ProductId,"CAM-");
    			break;

    	case 3:strcpy(ProductId,"PRI-");
    			break;

    	case 4:strcpy(ProductId,"MOB-");
    			break;

		case 5:strcpy(ProductId,"TV-");
    			break;

    	default:employmenu();
				break;
    }
    char clss[10];
    strcpy(clss,ProductId);
    int product;
	printf("\n\t\t\tEnter product no. :");								//Enter Product n0
    scanf("%d",&product);
  	int count=0;
  	char pro[4];
  	itoa(product,pro,10);
    strcat(ProductId,pro);
    
	strcpy(id,ProductId);
    strcat(ProductId,".txt");
    char f1[20];
    strcpy(f1,"E:\\Project\\");
    strcat(f1,ProductId);
    //printf("%s",clss);
    char file[20];
   switch(cho)
    {
    	case 1:strcpy(file,"E:\\Project\\LAPTOP.txt");
    			break;

    	/*case 2:camera(f1);
    			break;

    	case 3:printer(f1);
    			break;

    	case 4:mobile(f1);
    			break;

		case 5:tv(f1);
    			break;*/
    }
	   printf("\n\n\t\t%s\n",f1);
struct login employ[50];
    FILE *pt,*te,*fr;
    int a=0,n;
      pt=fopen(f1,"w+");

    if(pt==EOF)
        printf("\n\t\t\tError in opening");
    else
    {
			system("cls");
	 	printf("\n\n\t\t\t\t    **** PRODUCT MASTER MAINTAINANCE ****\n");
 		printf("\t\t\t\t\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\n");

     	printf("\n\t\t\t\t\t\tProduct Details\n");
      	printf("\t\t\t\t\t     =====================\n");

		fprintf(pt,"\n\n\t\t\t\t    **** PRODUCT MASTER MAINTAINANCE ****\n");
 		fprintf(pt,"\t\t\t\t\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\n");

     	fprintf(pt,"\n\t\t\t\t\t\tProduct Details\n");
      	fprintf(pt,"\t\t\t\t\t     =====================\n");

      	printf("\t--------------------------------------------------------------------------------------------------------\n");
		printf("\tProduct Id : %s\n",id);
    	printf("\n\tProduct Status : Defunct\n");
    	printf("\t--------------------------------------------------------------------------------------------------------\n");
    	printf("\n\t\t\t\t\t       Product Attributes\n");
      	printf("\t\t\t\t\t     =====================\n");

		fprintf(pt,"\t--------------------------------------------------------------------------------------------------------\n");
		fprintf(pt,"\tProduct Id : %s\n",id);
    	fprintf(pt,"\n\tProduct Status : Defunct\n");
    	fprintf(pt,"\t--------------------------------------------------------------------------------------------------------\n");
    	fprintf(pt,"\n\t\t\t\t\t       Product Attributes\n");
      	fprintf(pt,"\t\t\t\t\t     =====================\n");
 struct login employ[25];
int cho;
fr=fopen(file,"r+");

    if(fr==EOF)
        printf("\n\t\t\tError in opening");
    else
    {
    	char read[20];
    	int count=0;
    	while(count<5)
    	{
    			read[20]=NULL;
				fscanf(fr,"%s",read);
				printf("\n\n\t%s\n",read);
				fprintf(pt,"\n\n\t%s\n",read);
	      	 	fscanf(fr,"%s",read);
	      	 	printf("\t\t%s \n",read);
				fprintf(pt,"\t\t%s ",read);
				char rd[4][20];
				int i=0;
				for(i=0;i<4;i++)
				{
					fscanf(fr,"%s",rd[i]);	
				}
				for(i=0;i<4;i++)
				{
					printf("\t\t\t%d) %s\n",i,rd[i]);	
				}
				fscanf(fr,"%s",read);
				printf("\n\t\t\t%s ",read);
scanf("%d",&cho);
fprintf(pt," %s",rd[cho]);
		 		fscanf(fr,"%s",read);
	      	 	printf("\n\t\t%s \n",read);
				fprintf(pt,"\n\t\t%s ",read);
				for(i=0;i<4;i++)
				{
					fscanf(fr,"%s",rd[i]);	
				}
				for(i=0;i<4;i++)
				{
					printf("\t\t\t%d) %s\n",i,rd[i]);	
				}
				fscanf(fr,"%s",read);
				printf("\n\t\t\t%s ",read);
scanf("%d",&cho);
fprintf(pt," %s",rd[cho]);
			fscanf(fr,"%s",read);
			printf("\n\t\t%s\n",read);
			fprintf(pt,"\n\t\t%s ",read);
			//printf("\n\n\t\tSuppplier : ");
	 		 	//printf("\t\t\t1)Ryzen 71700\n\t\t\t2)Core i7-6820HK\n\t\t\t3)Core i7-7820HK\n\t\t\t4)FX-9800P\n\n\t\t\tChoise : ");
	int a,n;
	a=0;
	te=fopen("E:\\Project\\supplier.txt","r+");
    if(te==EOF)
        printf("\n\t\t\tError in opening");
    else
    {
		while(fread(employ[a].name,20,1,te)==1)
	        {
	            fscanf(fr,"\n\t[%d] %s",a,employ[a].name);
				printf("\n\t\t\t[%d] %s",a,employ[a].name);
	            a+=1;
	        }
			printf("\n\n\t\t\tChoice : ");
			scanf("%d",&n);
rewind(te);
    	a=0;
		while(fread(employ[a].name,20,1,te)==1)
	        {
	            if(a==n )
	            {
            	fprintf(pt," %s",employ[a].name);
				}
	            a+=1;
	        }

		  		fscanf(fr,"%s",read);
		  	//	printf("\n\t\t%s ",read);
				fprintf(pt,"\n\t\t%s ",read);
		  		for(i=0;i<4;i++)
				{
					fscanf(fr,"%s",rd[i]);	
				}
fprintf(pt," %s",rd[cho]);
	//fscanf(fr,"%s",read);
				count++;
			}  	}
    fclose(te); 				  			  	 	
		  	/*	fscanf(fr,"\n\n\t\tCost :   \n");
				printf(pt,"\n\n\t\tCost : ");
				//fscanf("\n\t\t\t1)5320\n\t\t\t2)3340\n\t\t\t3)2810\n\t\t\t4)5630\n\n\t\t\tChoise : ");
	  */
  }fclose(fr);
	}		
    fclose(pt);
getch();
}


