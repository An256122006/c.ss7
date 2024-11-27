#include <stdio.h>
int mian()
{
	int a[]={1,2,3,4,5};
	for (int i=0; i<5; i++)
	{
		if (a[i]%2==0)
		{
			a[i]=a[i]+2;
		} else 
		{
			a[i]=a[i]+3;
		}
	}
	printf("Mang sau khi da thay doi la:\n"); 
	for (int i = 0; i < 5; i++) 
	{ 
	 printf("%d ", a[i]);
	}
	return 0;
}
