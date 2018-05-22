#include<stdio.h>
#include<string.h>

struct login
    {
            char name[20];
            char pass[20];
    };

int main(void)
{
    struct login employ[50];
    FILE *pt,*te,*fr;
    int a=0,n,cho=2;
      pt=fopen("E:\\Project\\Sample.txt","w+");

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
		printf("\tProduct Id : LAPTOP\n");
    	printf("\n\tProduct Status : Defunct\n");
    	printf("\t--------------------------------------------------------------------------------------------------------\n");
    	printf("\n\t\t\t\t\t       Product Attributes\n");
      	printf("\t\t\t\t\t     =====================\n");

		fprintf(pt,"\t--------------------------------------------------------------------------------------------------------\n");
		fprintf(pt,"\tProduct Id : LAPTOP\n");
    	fprintf(pt,"\n\tProduct Status : Defunct\n");
    	fprintf(pt,"\t--------------------------------------------------------------------------------------------------------\n");
    	fprintf(pt,"\n\t\t\t\t\t       Product Attributes\n");
      	fprintf(pt,"\t\t\t\t\t     =====================\n");
 struct login employ[25];
int cho;
fr=fopen("E:\\Project\\LAPTOP.txt","r+");

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
		  		printf("\n\t\t%s ",read);
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

