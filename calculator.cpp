#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int Mul(int x ,int y)
{
	int z;
	z = x*y;
	return z;
}
void clrscr()
{
	system("cls");
}
int Sub(int x , int y)
{
	int z;
	z = x-y ;
	return z;
	
}
int Add(int x, int y)
{
	int z;
	z = x+y;
	return z;
}
float Div(int x ,int y )
{
	float z;
	z = x/y;
	return z;
}
int main()
{
	
	int data;
	char choice;
	 
	char ch;
	menu:
    clrscr();
    
	printf("-------------------------------------------------------------------------------------------------------\n");
	printf("\t\t\t%c%c%c%c%c%c%c%c%c%c%c%c%c",219,219,219,219,219,219,219,219,219,219,219,219,219);
	printf("*******CALCULATOR*******");
	printf("%c%c%c%c%c%c%c%c%c%c%c%c%c",219,219,219,219,219,219,219,219,219,219,219,219,219);
	printf("\n-------------------------------------------------------------------------------------------------------\n");
	printf(" \n\t\t\t %c%c%c%c%c%c%c%c",177,176,176,176,176,176,176,177);
	printf("*******ENTER YOUR CHOICE*******");
	printf("%c%c%c%c%c%c%c%c",177,176,176,176,176,176,177);
	printf("\n\t\t\t\t\t-----------------");
	printf("\n       %c Press \"1\" for MULTIPILCATION                        %c Press \"2\" for SUBTRACTION",254,254);
	printf("\n       %c Press \"3\" for ADDITION                              %c Press \"4\" for DIVISION",254,254);
	printf("\n                                    %c Press \"5\" for exit",254);
	printf("\n   %c%c%c%c%c%c%c%c%c%c%c%c%c%c",177,176,176,176,176,176,176,176,176,176,176,176,176,176,176);
	printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",177,176,176,176,176,176,176,176,176,176,176,176,176,176,176);
	printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",177,176,176,176,176,176,176,176,176,176,176,176,176,176,176);
	printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",177,176,176,176,176,176,176,176,176,176,176,176,176,176,176);
	printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",177,176,176,176,176,176,176,176,176,176,176,176,176,176,176);
	printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",177,176,176,176,176,176,176,176,176,176,176,176,176,176,177);
	printf("\n   ");
	
	fflush(stdin);
	scanf("%c",&ch);

		
	switch(ch)
	{
		case '1':
			{
			int a,b;
			printf("\n   Enter two numbers :-> ");
			scanf("%d%d",&a,&b);
			int c=Mul(a,b);
			printf("\n   The MULTIPLY of given numbers is :-> %d",c);
			break ;
			}
	    case '2':
	    	{
	    	int a,b;
			printf("\n   Enter two numbers :-> ");
			scanf("%d%d",&a,&b);
			int c=Sub(a,b);
			printf("\n   The SUBTRACTION of given numbers is :-> %d",c);
		    break ;
	    	}
		case '3':
			{
			int a,b;
			printf("\n   Enter two numbers :-> ");
			scanf("%d%d",&a,&b);
		    int c=Add(a,b);
			printf("\n   The ADDITION of given numbers is :-> %d",c);
			break ;
			}
		case '4':
		    {
		    int a,b;
			printf("\n   Enter two numbers :-> ");
			scanf("%d%d",&a,&b);
			float c=Div(a,b);
			printf("\n   The DIVISION of given numbers is :-> %f",c);	
		    break ;
		    }
		    case '5':
		    	exit(0);
		default :
			printf("\n   Enter vaild choice ");
			break;
	 
}
    printf("\n\n   Press any key to continue...");
    getch();
    goto menu;
    getch();
    return 0;

    
}
