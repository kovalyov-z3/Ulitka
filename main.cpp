//------------------------------------------------------------ Ulit04ka -------------------------------------------------------------------------------------//
#include<stdio.h> 
#include<stdlib.h> 
#include<time.h> 
main() 
{ 
	int a[100][100]; 
	int n; int offset = 0;
	scanf("%d", &n);
	int current_n = n-1;
	int k = 1; int buf = 0;
	srand(time(NULL));

	
	while(current_n>0) 
	{
	for(int j = offset; j<(current_n); j++ ) 
	{  
		
		a[offset][j] = k;
		k++; 	 
	} 
	for(int i = offset; i<(current_n); i++ ) 
	{ 
		a[i][current_n] = k; 
		k++; 	 
	}
	for(int j = current_n; j>offset; j-- ) 
	{ 
		a[current_n][j] = k; 
		k++; 	 
	} 
	for(int i=current_n; i>offset; i-- ) 
	{ 
		a[i][offset] = k;
		k++; 	 
	} 
	current_n --; 
	offset++;
	} 
	
	if (n%2>0) 
		a[n/2][n/2] = k;

	for (int i=0; i<n; i++) 
	{ 
	for(int j=0; j<n; j++) 
		{
		printf("%3d", a[i][j]);
		}
	printf("\n");
	} 	
}





