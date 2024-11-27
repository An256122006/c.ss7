#include <stdio.h>
int main()
{
	int a[5]={1,2,3,4,5}, b=a[0], c=a[0];
	
	 for (int i=0; i<5; i++)
	 {
		if (b<a[i] )
		{
			b=a[i];
		}
	 }
	 for (int i=0; i<5; i++)
	 {
		if (c>a[i] )
		{
			c=a[i];
		}
	 }

	printf ("so nho nhat la : %d\n",c);
	printf ("so lon nhat la : %d\n",b);
	return 0;
}
