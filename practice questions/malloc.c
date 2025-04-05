#include <stdio.h>
#include <stdlib.h>

int main()
{
int* ptr; // This pointer will hold the  // base address of the block created
int n, i;
printf("Enter number of elements:");  // Get the number of elements for the array
scanf("%d",&n);
printf("Entered number of elements: %d\n", n);
ptr = (int*)malloc(n * sizeof(int));      // Dynamically allocate memory using malloc()
// Check if the memory has been successfully  // allocated by malloc or not
		if (ptr == NULL) {
		printf("Memory not allocated.\n");
		exit(0);
}
}		
	