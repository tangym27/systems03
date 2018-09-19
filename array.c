#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	srand(time(NULL));
	//Create an array large enough to store 10 ints. 
	int array[10];
	printf("------ARRAY1------\n");
	for (int i = 0; i < 9; i++){
		//Populate the array with random values. 
		array[i] = rand();
	}
	//Set the last value in the array to 0. 
	array[9] = 0;
	//Print out the value in this array
	for (int i = 0; i < 10; i++){
		printf("The value of array[%d] is %d.\n", i , array[i]);
	}
	printf("------ARRAY2------\n");
	//Create a separate array large enough to store 10 ints.
	int array2[10];
	//Set pointer to array
	int *ap = array;
	//Pointer set to last value in the array 
	ap = ap + 9;
	//Populating second array w/ first array going in reverse 
	for (int i = 0; i < 10; i+=1){
		*(array2+i)= *ap;
		ap -= 1;
		//Print out the values in the second array
		printf("The value of array2[%d] is %d.\n", i , *(array2+i));
	}
	return 0;
}
