/*E9*/#include<stdio.h>
main( )
{
	int arr[5]= {25,30,35,40,55},*p;
	for(p=&arr[0]; p<arr+5; p++)
		printf("%d   ",*p);
		return 0;
}
