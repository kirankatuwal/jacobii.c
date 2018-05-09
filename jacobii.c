#include<stdio.h>
//jacobii rules
void main()
{
	float a[3],b[3],c[3],d[3],x=0,y=0,z=0,w1,w2,w3;
	int i;

for(i=0;i<3;i++)
{
	printf("For %d,\nEnter the value for x,y,z and constant as in the form of ax+by+cy=d\n",i+1);
	scanf("%f%f%f%f",&a[i],&b[i],&c[i],&d[i]);
}
for(i=0;i<3;i++)
{
	printf("================\n%.0fx + %.0fy + %.0fz = %.0f\n================\n",a[i],b[i],c[i],d[i]);
}
	printf("\nAfter process , check result \n\n");
	for(i=0;i<=5;i++){
		w1=(d[0]-(b[0]*y)-(c[0]*z))/a[0];
		w2=(d[1]-(c[1]*z)-(a[1]*x))/b[1];
		w3=(d[2]-(a[2]*x)-(b[2]*y))/c[2];
		
		printf("%.2f\t%.2f\t%.2f\n",w1,w2,w3);
		x=w1;
		y=w2;
		z=w3;
	}
	printf("\nThank you using system \n\n KIRAN as developer \n");
	
}
