/* Check whether a year is leap or not */
#include<stdio.h>
int main()
{
	int year;
	printf("Enter year : ");
	scanf("%d",&year);
	if(year%400==0||year%100!=0&&year%4==0)
		printf("%d is leap year",year);
	else
		printf("%d is not a leap year",year);
	return 0;
}
/* OUTPUT:
Enter year : 200
200 is not a leap year */

/* Check type of character entered */
#include<stdio.h>
int main()
{
	char ch;
	printf("Enter any character : ");
	scanf("%c",&ch);
	if(ch>=65&&ch<=90)
		printf("Entered character is an uppercase letter");
	else if(ch>=97&&ch<=122)
		printf("Entered character is a lowercase letter");
	else if(ch>=0&&ch<=47||ch>=58&&ch<=64||ch>=91&&ch<=96||ch>=123&&ch<=127)
		printf("Entered character is a special symbol");
	return 0;
}
/* OUTPUT:
Enter any character : h
Entered character is a lowercase letter */

/* Check whether a triangle is valid or not */
#include<stdio.h>
int main()
{
	int s1,s2,s3,largeside,sum;
	printf("Enter three sides of a triangle : ");
	scanf("%d%d%d",&s1,&s2,&s3);
	if(s1>s2)
	{
		if(s1>s3)
		{
			sum=s2+s3; largeside=s1;
		}
		else
		{
			sum=s1+s2; largeside=s3;
		}
	}
	else
	{
		if(s2>s3)
		{
		sum=s1+s3; largeside=s2;
	    }
	    else
	    {
	    	sum=s1+s2; largeside=s3;
		}
	}
	if(sum>largeside)
		printf("Triangle is a valid triangle");
	else
		printf("Triangle is an invalid triangle");
	return 0;
}
/* OUTPUT:
Enter three sides of a triangle : 3 4 5
Triangle is a valid triangle */

/* Determine the type of triangle */
#include<stdio.h>
int main()
{
	int s1,s2,s3,a,b,c,d,e,f;
	printf("Enter the sides of triangle : ");
	scanf("%d%d%d",&s1,&s2,&s3);
	a=s1*s1; b=s2*s2+s3*s3;
	c=s2*s2; d=s1*s1+s3*s3;
	e=s3*s3; f=s1*s1+s2*s2;
	if(s1==s2&&s1==s3)
		printf("Triangle is equilateral\n");
	if(s1==s2 && s1!=s3)
		printf("Triangle is isosceles\n");
	if(s1==s3 && s1!=s2)
		printf("Triangle is isosceles");
	if(s2==s3 && s2!=s1)
		printf("Triangle is isosceles\n");	
	if(s1!=s2 && s2!=s3&&s3!=s1)
		printf("Triangle is scalene\n");
	if(a==b || c==d || e==f)
		printf("Triangle is right angled triangle");
	return 0; 
}
/* OUTPUT:
Enter the sides of triangle : 3 4 5
Triangle is scalene
Triangle is right angled triangle */

/* Converting RGB color to CMYK color format */
#include<stdio.h>
int main()
{
	float r,g,b,c,m,y,k,w,max;
	printf("Enter the values of Red, Green, Blue(0 to 255) : ");
	scanf("%f%f%f",&r,&g,&b);
	if(r==0&&g==0&&b==0)
    {
    	c=m=y=0;
    	k=1;
	}
	else
	{
		r=r/255;
		g=g/255;
		b=b/255;
	
	max=r;
	if(g>max)
		max=g;
	if(b>max)
		max=b;
	w=max;
	c=(w-r)/w;
	m=(w-g)/w;
	y=(w-b)/w;
	k=1-w;
    }
	printf("CMYK = %f %f %f %f",c,m,y,k);
	return 0;
}
/* OUTPUT:
Enter the values of Red, Green, Blue : 255 255 255
CMYK = 0.000000 0.000000 0.000000 0.000000 */

