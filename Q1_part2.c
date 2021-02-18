/* Name: Vaibhav Gupta
   Roll_Number: 2019341 */

#include<unistd.h>
#include<stdlib.h>
#include<stdio.h>
#include<pthread.h>

int x=10;
void* childthread( void * arg);

int main()
{
	pthread_t newthread;

	printf("\nParent Thread Starts\n");

	printf("\n%d",x);

	while(x<100)
	{
		x+= 1;
		printf("\n%d",x);
	}

	pthread_create(&newthread, NULL, childthread, NULL);
	
	pthread_join(newthread, NULL);

	printf("\nParent Thread Ends\n");
	return 0;
}

void* childthread( void * arg)
{
	printf("\n\nChild Thread Starts\n");
	
	printf("\n%d",x);
	
	while(x>-90)
	{
		x -=1;
		printf("\n%d",x);
	}
	
	printf("\nChild Thread Ends\n");

	return NULL;
}