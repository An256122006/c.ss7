#include <stdio.h>
int main()
{
	int a;
	printf ("moi ban nhap so phan tu co trong mang:");
	scanf ("%d",&a);
	int b[a];
	for (int i=0; i<a; i++)
	{
		printf ("moi ban nhap phan tu thu %d:",i+1);
		scanf ("%d",&b[i]);
	}
	printf ("phan tu trong mang la:\n");
	for (int i=0; i<a; i++)
	{
		printf ("%d ", b[i]);
	}
	return 0;
}
