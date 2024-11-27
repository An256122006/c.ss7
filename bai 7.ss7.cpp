#include <stdio.h>
int main()
{
	int a, b[a];
	printf ("moi nhap so phan tu co trong mang:");
	scanf ("%d",&a);
	for (int i=0; i<a; i++)
	{
		printf ("moi ban nhap phan tu thu %d:",i+1);
		scanf ("%d",&b[i]);
		if (b[i]%2==0)
		{
		  printf ("moi ban nhap lai phan tu thu %d:",i+1);
		  scanf ("%d",&b[i]);	
		}
	}
	return 0;
}
