#include <stdio.h>
int main()
{
	int a[]={1,2,3,4,5,6};
	for (int i=0; i<sizeof(a)/sizeof(int); i++)
	{
		printf ("%d\n",a[i]);
	}
	printf ("kich thuoc cua mang %d\n",sizeof(a)/sizeof(int));
	return 0;
}
