#include <stdio.h>
#include <stdlib.h>
#include "vectors.h"

//Ibrahim Alshubaily

int main(int argc, char *argv[]){
	vector v1,v2;

 if(argc != 7){
		printf("The correct format is testVectors x1 y1 z1 x2 y2 z2\n");
		return 1;
	}
	
	//initialize vectors 
	v1=vector_init(atof(argv[1]),	atof(argv[2]),atof(argv[3]));
	v2=vector_init(atof(argv[4]),	atof(argv[5]),atof(argv[6]));
	
	//print v1 v2
	printf("\n\nThe original vectors are:\n");
	printf("\n");
	vector_print(v1);
	printf("\n");
	vector_print(v2);
	printf("\n\n");
	
	//add v1 to v2 and print out the result
	printf("The sum of the two vectors is:\n");
	printf("\n");
    vector_print(vector_add(v1, v2));
    printf("\n\n");
	

	//find dot product of v1 and v2 and print it out
	printf("The vectors dot product = %.6f\n", vector_dot(v1, v2));
	printf("\n");
	//normalize v1 by v2 using the normalize method and print out v1 and v2 after normalization
	//if the length is 0 then print out an additional warning message saying that the vector was not normalized
	
	if ( vector_normalize(&v1) == 1) {
		printf("the vector was not normalized \n");
		printf("\n");
	} else {
		printf("v1 was normalized: \n");
	    vector_print(v1);
	    printf("\n");
	}

	if ( vector_normalize(&v2) == 1) {
		printf("the vector was not normalized \n");
		printf("\n");
	} else {
		printf("v2 was normalized: \n");
	    vector_print(v2);
	    printf("\n");
	}
			
 return 0;
}
