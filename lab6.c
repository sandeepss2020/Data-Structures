#include <stdio.h>
#include<stdlib.h>
#include<time.h>

// int num = 0, count =0 ,i=1;
// int main()
// {
//      int number;
//      int *ptr;
//      int arr[100];
//     for (int j = 0 ; j <100 ;j++)
//     {
//         srand(time(0));
//         number = rand() % 100 +1;
//         arr[i] = number;
//         //printf("%d\n" , number);
//     }
//     for (int j = 0 ; j <100 ;j++)
//     {
//         printf("The VALUE of %d element is  %d\n",j,arr[j]);
//     }
//     //  guess(number);
//      return 0;
// }



#include<stdio.h>
#include<time.h>
int main()
{
	// generating 100 randam elements in range 1 to 200
	srand(time(0));
	int i,j, data, x,k; 
	int a[100];
	for(i = 0; i<100; i++)
	{	
		data= (rand() % ((200  - 1)+1));
        printf(" %d ", data);
 		a[i] = data;
 	}
 	
 	
    x= (rand() % ((200  - 1)+1));
    printf("\n\n element to be searched is %d", x);
    for(k=0;k<100;++k)
        if(a[k]==x)
            break;
     
    if(k<100)
        printf("\n\nElement found at index %d",k);
    else
        printf("\n\nElement not found");
  

    return 0;
}