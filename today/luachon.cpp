#include<stdio.h>
#include<stdlib.h>

void a1();
void a2();
void a3();

int main()
{
	while(1)
	   {
	
		int choice;	
		
	    printf("\n1. A1\n2. A2\n3. A3\n");
	    printf("\nBat dau lua chon: ");
	    scanf("%d",&choice);
	
	    switch(choice)
	    {
	    case 1:
	        a1();
	        break;
	    case 2:
	        a2();
	        break;
	    case 3:
	        a3();
	        break;
		case 4:
	        return 0;
	    default:
	        printf("\nPlease Select only 1-4 option ----\n");
	    }
	}
	
	return 0;
}



void a3()
{
	printf("A3");
}


void a1()
{    
	printf("A1");	
}


void a2()
{   
	printf("A2");
}
