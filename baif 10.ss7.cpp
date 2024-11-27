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
	}
	for (int i=0; i<a; i++)
	{ 
	   if (b[i]<10)
	    {
		
		 switch (b[i])
		 {
			case 1:
			printf ("%d\n",b[i]);
			break;
			case 2:
			printf ("%d\n",b[i]);
			break;
			case 3:
			printf ("%d\n",b[i]);
			break;
			case 5:
			printf ("%d\n",b[i]);
			break;
			case 7:
		    printf ("%d\n",b[i]);
			break;
		  }
	    } else if (b[i]%2!=0 && b[i]%3!=0 && b[i]%5!=0 && b[i]%7!=0)
	    {
	      printf ("%d\n",b[i]);	
		}
    } 
	return 0;
}
