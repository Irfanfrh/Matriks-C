#include <stdio.h>

int main()
{
	int ordo, i,j ;
	float a[3][3];
	float det;
	
	printf("Masukkan ordo matrix yang diinginkan (2x2 atau 3x3) :");
	scanf("%d", &ordo);
	
	if (ordo == 3)
	{
		printf("masukkan angka matrix :\n");
		for (i =0; i < 3; i++)
			for (j = 0; j < 3; j++)
			{
				printf("masukkan index [%d][%d] : ", i,j);
				scanf("%f", &a[i][j]);
			}
			
			printf("\nHasil Inputan :");
				for(i = 0; i < 3; i++)
				{
					printf("\n");
					for (j = 0; j < 3; j++)
						printf("%.1f\t", a[i][j]);
				}
				
				det = a[0][0] * ((a[1][1] * a[2][2])-(a[2][1] * a[1][2]))
				  -   a[0][1] * (a[1][0] * a[2][2]- a[2][0] *  a[1][2])
				  +   a[0][2] * (a[1][0] * a[2][1]- a[2][0] *  a[1][1]);
				  
				  printf("\nNilai determinan yang dihasilkan adalah : %.2f", det);
	}
	if (ordo == 2)
	{
		printf("masukkan angka matrix : \n");
		for (i =0; i <2; i++)
			for (j =0; j < 2; j++)
			{
				printf("masukkan index [%d][%d] ; ",i,j);
				scanf("%f", &a[i][j]);
			}
			
			printf("\hasil inputan :");
				for (i =0; i<2; i++)
				{
					printf("\n");
					for (j =0; j<2; j++)
						printf("%.1f\t", a[i][j]);
				}
			det = a[0][0] * a[1][1] - a[1][0] * a[0][1];
			
			printf("\nNilai determinan yang dihasilkan adalah : %.2f", det);
			
	}	
			
	return 0;
}