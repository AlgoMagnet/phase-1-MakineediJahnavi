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

