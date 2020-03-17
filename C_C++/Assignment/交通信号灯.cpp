#include <bits/stdc++.h>
#include <windows.h>
#define G 1
#define Y 2
#define R 3

int Light;
void wait_30s();
void wait_5s();

int main()
{
	Light=G;
	while(1)
	{
		switch(Light)
		{
			case 1:
				printf("\r");
				printf("G   ");
				wait_30s();
				Light=Y;
				break;
			case 2:
				printf("\r");
				printf(" Y  ");
				wait_5s();
				Light=R;
				break;
			case 3:
				printf("\r");
				printf("  R ");
				wait_30s();
				Light=G;
				break;
		}
	}
	return 0;
}

void wait_30s()
{
	int i,count=30;
	for(i=1;i<=30;i++)
	{
		
		if(count <=9)
		{
			printf(" %d",count);
			putchar('\b');
			putchar('\b');
		}
		else
		{
			printf("%d",count);
			putchar('\b');
			putchar('\b');
		}
		count--;
		Sleep(200);
	}
}
void wait_5s()
{
	int i,count=5;
	for(i=1;i<=5;i++)
	{
		printf(" %d",count);
		putchar('\b');
		putchar('\b');
		count--;
		Sleep(500);
	}
}
