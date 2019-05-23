#include <stdio.h>
#include <math.h>
int main(){
int arr[10]; //declaration of array
int *ptr1, *ptr2; //declare pointers
int i,k,a;
//makes the rand() function change everytime the program is ran 
srand(time(NULL));
//for loop to populate the array with random numbers
printf("Original Array ...\n");
for (k = 0;k<10;k++)
	{
		a = rand() % 11;
		arr[k]=a;
		printf("%d\n", arr[k]);
	}

ptr1=&(arr[0]); //initialize pointer address 
ptr2=&(arr[1]); //initialize pointer address
printf("New Array ...\n");
for(i=0;i<10;i+=2)
printf("%d\n%d\n", *(ptr2+i), *(ptr1+i)); //swaps the array elements in pairs
return 0;
}

