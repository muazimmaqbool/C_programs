#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
system("cls");
int h,m,s;
double i;
printf("Enter time");
scanf("%d%d%d",&h,&m,&s);
start:;
for(h;h<12;h++){
	    for(m;m<60;m++){
		        for(s;s<60;s++){
			    system("cls");
			    
			    printf("\n\n\n\n\n\n\n\n\n\n\n");
			    printf("\t\t\t\t\t\tDIGITAL CLOCK USING C\n");
			    printf("\t\t\t\t\t");
			    printf("%c%c%c%c%",176,176,176,176);
			    printf("%c%c%c%c%",219,219,219,219);
			    printf("%c%c%c%c%",177,177,177,177);
			    printf("%d : %d : %d ",h,m,s);
			    printf("%c%c%c%c%",177,177,177,177);
			    printf("%c%c%c%c%",219,219,219,219);
			    printf("%c%c%c%c%",176,176,176,176);
			            for(i=0;i<98799999;i++){
			      		i++;
			      		i--;
			      			}
					}
			s=0;}
	m=0;}
 h=0;
goto start;	
}
