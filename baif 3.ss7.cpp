#include <stdio.h>

int main() {
    int a[5], b=0;
    printf("Moi ban nhap 5 so nguyen:\n");
    for (int i = 0; i < 5; i++) {
        printf("Nhap phan tu thu %d: ", i + 1);
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < 5; i++) {
    	if (a[i]%2==0)
    	{
    		printf ("%d ", a[i]);
    		b=b+1;
		}
		if (b==0)
       {
    	printf ("mang khong co so chan nao");
    	break;
	   }
    }
return 0;
}
