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
      pt=fopen("E:\\Project\\LAPTOP.txt","w+");

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
fr=fopen("E:\\Project\\LAP.txt","r+");

    if(pt==EOF)
        printf("\n\t\t\tError in opening");
    else
    {
			printf("\t1)Processor :\n");
	      	 	printf("\t\tName :  \n");
			fprintf(pt,"\t1)Processor :\n");
	      	 	fprintf(pt,"\t\tName : ");
	      	 	printf("\t\t\t1)R71700\n\t\t\t2)C6820HK\n\t\t\t3)C7820HK\n\t\t\t4)FX-9800P\n\n\t\t\tChoise : ");
scanf("%d",&cho);
		 		printf("\n\n\t\tSpeed(GHz) :  \n");
		 		fprintf(pt,"\n\t\tSpeed(GHz) : ");
			  	printf("\t\t\t1)3.7\n\t\t\t2)4.0\n\t\t\t3)2.9\n\t\t\t4)3.4\n\n\t\t\tChoise : ");
scanf("%d",&cho);
			printf("\n\n\t\tSuppplier :\n");
			fprintf(pt,"\n\t\tSuppplier : ");
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
	            printf("\n\t[%d] %s\n",a,employ[a].name);
	            a+=1;
	        }
			printf("\n\t\t\tSelect Supplier NO. : ");
			scanf("%d",&n);
  	}
    fclose(te);
	 
	 te=fopen("E:\\Project\\supplier.txt","r+");

    if(pt==EOF)
        printf("\n\t\t\tError in opening");
    else
    {	
    	a=0;
		while(fread(employ[a].name,20,1,te)==1)
	        {
	            if(a==n )
	            {
            	fprintf(pt,"%s",employ[a].name);
				}
	            a+=1;
	        }
  	}
    fclose(te);
		  		printf("\n\n\t\tCost(Rs) :   \n");
		  		fprintf(pt,"\n\t\tCost(Rs) : ");
				//printf("\n\t\t\t1)8450\n\t\t\t2)13470\n\t\t\t3)11640\n\t\t\t4)4270\n\n\t\t\tChoise : ");

			printf("\n\n\t2)Disply :\n");
   				printf("\t\tName :  \n");
			fprintf(pt,"\n\n\t2)Disply :\n");
   				fprintf(pt,"\t\tName : ");
	      	 	printf("\t\t\t1)G6-1B49WM\n\t\t\t2)SV1513EB\n\t\t\t3)N5040\n\t\t\t4)G5030\n\n\t\t\tChoise : ");
scanf("%d",&cho);
		 		printf("\n\n\t\tSize :  \n");
		 		fprintf(pt,"\n\t\tSize : ");
			  	printf("\t\t\t1)15.6\n\t\t\t2)12.0\n\t\t\t3)14.0\n\t\t\t4)17.5\n\n\t\t\tChoise : ");
scanf("%d",&cho);
float ft;
				printf("\n\n\t\tSuppplier :\n");
				fprintf(pt,"\n\t\tSuppplier : ");
	 		 	//printf("\t\t\t1)Ryzen 71700\n\t\t\t2)Core i7-6820HK\n\t\t\t3)Core i7-7820HK\n\t\t\t4)FX-9800P\n\n\t\t\tChoise : ");
a=0;
	te=fopen("E:\\Project\\supplier.txt","r+");
    if(te==EOF)
        printf("\n\t\t\tError in opening");
    else
    {
		while(fread(employ[a].name,20,1,te)==1)
	        {
	            printf("\n\t[%d] %s\n",a,employ[a].name);
	            a+=1;
	        }
			printf("\n\t\t\tSelect Supplier NO. : ");
			scanf("%d",&n);
  	}
    fclose(te);
	 
	 te=fopen("E:\\Project\\supplier.txt","r+");

    if(pt==EOF)
        printf("\n\t\t\tError in opening");
    else
    {	
    	a=0;
		while(fread(employ[a].name,20,1,te)==1)
	        {
	            if(a==n )
	            {
            	fprintf(pt,"%s",employ[a].name);
				}
	            a+=1;
	        }
  	}
    fclose(te);			  	
		  		printf("\n\n\t\tCost :   \n");
				fprintf(pt,"\n\t\tCost : ");
			//	printf("\n\t\t\t1)6480\n\t\t\t2)4240\n\t\t\t3)5430\n\t\t\t4)3390\n\n\t\t\tChoise : ");

			printf("\n\t3)Body :\n");
	 		      printf("\t\tName :  \n");
			fprintf(pt,"\n\n\t3)Body :\n");
	 		      fprintf(pt,"\t\tName : ");
	      	 	printf("\t\t\t1)SE14\n\t\t\t2)G575\n\t\t\t3)C700\n\t\t\t4)N5050\n\n\t\t\tChoise : ");
scanf("%d",&cho);
		printf("\n\n\t\tSize :  \n");
		 		fprintf(pt,"\n\t\tSize : ");
		 		fprintf(pt,"%f",ft);
			  	//printf("\t\t\t1)15.6\n\t\t\t2)12\n\t\t\t3)14\n\t\t\t4)17.5\n\n\t\t\tChoise : ");
				printf("\n\n\t\tSuppplier :\n");
				fprintf(pt,"\n\t\tSuppplier : ");
	 		 	//printf("\t\t\t1)Ryzen 71700\n\t\t\t2)Core i7-6820HK\n\t\t\t3)Core i7-7820HK\n\t\t\t4)FX-9800P\n\n\t\t\tChoise : ");
	a=0;
	te=fopen("E:\\Project\\supplier.txt","r+");
    if(te==EOF)
        printf("\n\t\t\tError in opening");
    else
    {
		while(fread(employ[a].name,20,1,te)==1)
	        {
	            printf("\n\t[%d] %s\n",a,employ[a].name);
	            a+=1;
	        }
			printf("\n\t\t\tSelect Supplier NO. : ");
			scanf("%d",&n);
  	}
    fclose(te);
	 
	 te=fopen("E:\\Project\\supplier.txt","r+");

    if(pt==EOF)
        printf("\n\t\t\tError in opening");
    else
    {	
    	a=0;
		while(fread(employ[a].name,20,1,te)==1)
	        {
	            if(a==n )
	            {
            	fprintf(pt,"%s",employ[a].name);
				}
	            a+=1;
	        }
  	}
    fclose(te); 	
		  		printf("\n\n\t\tCost :   \n");
				fprintf(pt,"\n\t\tCost : ");
				//printf("\n\t\t\t1)4760\n\t\t\t2)3640\n\t\t\t3)2250\n\t\t\t4)1930\n\n\t\t\tChoise : ");

			printf("\n\t4)Key Bord :\n");
	 		      printf("\t\tName :  \n");
			fprintf(pt,"\n\n\t4)Key Bord :\n");
	 		      fprintf(pt,"\t\tName : ");
	      	 	printf("\t\t\t1)MK240\n\t\t\t2)C2500\n\t\t\t3)KB216\n\t\t\t4)KM4802\n\n\t\t\tChoise : ");
scanf("%d",&cho);
		 		printf("\n\n\t\tSize :  \n");
				fprintf(pt,"\n\t\tSize : ");
				fprintf(pt,"%f",ft);
			  	//printf("\t\t\t1)15.6\n\t\t\t2)12\n\t\t\t3)14\n\t\t\t4)17.5\n\n\t\t\tChoise : ");
				printf("\n\n\t\tSuppplier :\n");
				fprintf(pt,"\n\t\tSuppplier : ");
	 		 	//printf("\t\t\t1)Ryzen 71700\n\t\t\t2)Core i7-6820HK\n\t\t\t3)Core i7-7820HK\n\t\t\t4)FX-9800P\n\n\t\t\tChoise : ");
	a=0;
	te=fopen("E:\\Project\\supplier.txt","r+");
    if(te==EOF)
        printf("\n\t\t\tError in opening");
    else
    {
		while(fread(employ[a].name,20,1,te)==1)
	        {
	            printf("\n\t[%d] %s\n",a,employ[a].name);
	            a+=1;
	        }
			printf("\n\t\t\tSelect Supplier NO. : ");
			scanf("%d",&n);
  	}
    fclose(te);
	 
	 te=fopen("E:\\Project\\supplier.txt","r+");

    if(pt==EOF)
        printf("\n\t\t\tError in opening");
    else
    {	
    	a=0;
		while(fread(employ[a].name,20,1,te)==1)
	        {
	            if(a==n )
	            {
            	fprintf(pt,"%s",employ[a].name);
				}
	            a+=1;
	        }
  	}
    fclose(te); 				  	
		  		printf("\n\n\t\tCost :   \n");
				fprintf(pt,"\n\t\tCost : ");
				//printf("\n\t\t\t1)1040\n\t\t\t2)800\n\t\t\t3)510\n\t\t\t4)730\n\n\t\t\tChoise : ");

			printf("\n\t5)Battery :\n");
	 		      printf("\t\tName :  \n");
			fprintf(pt,"\n\n\t5)Battery :\n");
	 		      fprintf(pt,"\t\tName : ");
	      	 	printf("\t\t\t1)M4010\n\t\t\t2)E943A\n\t\t\t3)PABS228\n\t\t\t4)N5010\n\n\t\t\tChoise : ");
scanf("%d",&cho);
		 		printf("\n\n\t\tCapacity(mAh) :  \n");
				fprintf(pt,"\n\t\tCapacity(mAh) : ");
			  	printf("\t\t\t1)4400\n\t\t\t2)2200\n\t\t\t3)4200\n\t\t\t4)4000\n\n\t\t\tChoise : ");
scanf("%d",&cho);
				printf("\n\n\t\tSuppplier :\n");
				fprintf(pt,"\n\t\tSuppplier : ");
	 		 	//printf("\t\t\t1)Ryzen 71700\n\t\t\t2)Core i7-6820HK\n\t\t\t3)Core i7-7820HK\n\t\t\t4)FX-9800P\n\n\t\t\tChoise : ");
	a=0;
	te=fopen("E:\\Project\\supplier.txt","r+");
    if(te==EOF)
        printf("\n\t\t\tError in opening");
    else
    {
		while(fread(employ[a].name,20,1,te)==1)
	        {
	            printf("\n\t[%d] %s\n",a,employ[a].name);
	            a+=1;
	        }
			printf("\n\t\t\tSelect Supplier NO. : ");
			scanf("%d",&n);
  	}
    fclose(te);
	 
	 te=fopen("E:\\Project\\supplier.txt","r+");

    if(pt==EOF)
        printf("\n\t\t\tError in opening");
    else
    {	
    	a=0;
		while(fread(employ[a].name,20,1,te)==1)
	        {
	            if(a==n )
	            {
            	fprintf(pt,"%s",employ[a].name);
				}
	            a+=1;
	        }
  	}
    fclose(te); 				  			  	
		  		printf("\n\n\t\tCost :   \n");
				fprintf(pt,"\n\t\tCost : ");
				//printf("\n\t\t\t1)2460\n\t\t\t2)2940\n\t\t\t3)1750\n\t\t\t4)1330\n\n\t\t\tChoise : ");

			printf("\n\t6)Hard Disk :\n");
	 		      printf("\t\tName :  \n");
			fprintf(pt,"\n\n\t6)Hard Disk :\n");
	 		      fprintf(pt,"\t\tName : ");
	      	 	printf("\t\t\t1)WD20ER2\n\t\t\t2)S10DM10\n\t\t\t3)DTC100A1\n\t\t\t4)NZS55\n\n\t\t\tChoise : ");
scanf("%d",&cho);
		 		printf("\n\n\t\tCapacity(TB) :  \n");
				fprintf(pt,"\n\t\tCapacity(TB) : ");
			  	printf("\t\t\t1)4\n\t\t\t2)2\n\t\t\t3)1\n\t\t\t4)3\n\n\t\t\tChoise : ");
scanf("%d",&cho);
				printf("\n\n\t\tSuppplier :\n");
				fprintf(pt,"\n\t\tSuppplier : ");
	 		 	//printf("\t\t\t1)Ryzen 71700\n\t\t\t2)Core i7-6820HK\n\t\t\t3)Core i7-7820HK\n\t\t\t4)FX-9800P\n\n\t\t\tChoise : ");
a=0;
	te=fopen("E:\\Project\\supplier.txt","r+");
    if(te==EOF)
        printf("\n\t\t\tError in opening");
    else
    {
		while(fread(employ[a].name,20,1,te)==1)
	        {
	            printf("\n\t[%d] %s\n",a,employ[a].name);
	            a+=1;
	        }
			printf("\n\t\t\tSelect Supplier NO. : ");
			scanf("%d",&n);
  	}
    fclose(te);
	 
	 te=fopen("E:\\Project\\supplier.txt","r+");

    if(pt==EOF)
        printf("\n\t\t\tError in opening");
    else
    {	
    	a=0;
		while(fread(employ[a].name,20,1,te)==1)
	        {
	            if(a==n )
	            {
            	fprintf(pt,"%s",employ[a].name);
				}
	            a+=1;
	        }
  	}
    fclose(te); 				  			  	 	
		  		printf("\n\n\t\tCost :   \n");
				fprintf(pt,"\n\t\tCost : ");
				//printf("\n\t\t\t1)5320\n\t\t\t2)3340\n\t\t\t3)2810\n\t\t\t4)5630\n\n\t\t\tChoise : ");
	  
  }fclose(fr);
	}		
    fclose(pt);
getch();
}

