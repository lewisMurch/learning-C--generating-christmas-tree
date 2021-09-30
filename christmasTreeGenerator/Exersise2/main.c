#include <stdio.h> //imports IO library


void main(){
	//Creates my varaibles
	int length = 1;
	int height = 8;
	int trunk_height = 2;
	int x;
	int y;
	int z;
	int a;
	printf("Please enter a height for the tree: ");
	scanf_s("%d", &height);
	printf("Please enter a height for the trunk: ");
	scanf_s("%d", &trunk_height);
	printf("\n");
	printf("Generating.... \n \n \n");
	int spaceCount = height;
	for (x = 0; x < height; x++) { //for each level of vertical height, run the code contained below

		//create spaces before adding the astrix's
		for (z = 0; z < spaceCount; z++) { 
			printf(" ");
		}
		spaceCount--; 
		//creates the following astrix's
		for (y = 0; y < length; y++) {
			printf("*");
		}
		length++;
		length++;
		printf("\n"); //go to the next line
	}
	int trunk_start = height - 1; //create the starting point fore the trunk
	//Generates the trunk in the correct position below the tree
	for (a = 0; a < trunk_height; a++) {
		printf("%*c", trunk_start, ' '); 
		printf("***");
		printf("\n");
	}
	trunk_start = trunk_start - 6;
	printf("\n");
	printf("%*c", trunk_start, ' ');
	printf("Merry Christmas! \n");
}
