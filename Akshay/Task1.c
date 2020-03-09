#include<stdio.h>

int main()
 {
  	int values[10];
  	int k = 0;
  	int temp = 0;
	
	

    printf("Enter 10 integers: ");

 
  for(int i = 0; i < 10; ++i) 
  	{
    	 scanf("%d", &values[i]);
  	}

  	printf("Enter the you want to break and reverce point = ");
  	scanf("%d", &k);
    temp = k;
  printf("Displaying integers: ");


  for(int i = 0; i < 10; ++i) 
  	{
  		if (k > values[i] || k == values[i])
  			{
  				printf("\t%d", temp);
  				temp--;
  			}
  		else
  			{
     			printf("\t%d", values[i]);
  			}
  	}
  	printf("\n");
  
  return 0;
}