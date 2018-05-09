#include<stdio.h>
//jacobii rules
void main()
{
	float a,b,c,d,x=0,y=0,z=0,w1,w2,w3;
	int i;
	printf("Enter the value for x,y,z and constant as in the form of ax+by+cy=d\n");
	scanf("%f%f%f%f",&a,&b,&c,&d);
	printf("================\n%.0fx + %.0fy + %.0fc = %.0f\n================\n",a,b,c,d);
	
	printf("\nAfter process , check result \n\n");
	
	for(i=1;i<=5;i++)
	{
		w1=(d-(b*y)-(c*z))/a;
		w2=(d-(c*z)-(a*x))/b;
		w3=(d-(a*x)-(b*y))/c;
		printf("%.2f\t%.2f\t%.2f\n",w1,w2,w3);
		x=w1;
		y=w2;
		z=w3;
	}
	
	printf("\nThank you using system \n\n KIRAN as developer \n");
	
}
