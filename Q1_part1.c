/* Name: Vaibhav Gupta
   Roll_Number: 2019341 */

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<unistd.h>
#include<sys/types.h>
#include<sys/wait.h>

int x =10;

int main()
{
	pid_t pid = fork();


	if (pid == 0)
	{
		printf("\nChild process starts\n");

		printf("\n%d",x);

		while(x > -90)
		{
			x-= 1;
			printf("\n%d",x);
		}

		printf("\n\nChild process ends\n");
		exit(0);
	}

	else
	{
		wait(NULL);
		printf("\nParent process starts\n");

		printf("\n%d",x);

		while(x < 100)
		{
			x += 1;
			printf("\n%d",x);
		}

		printf("\n\nParent process ends\n");
	}

	return 0;
}