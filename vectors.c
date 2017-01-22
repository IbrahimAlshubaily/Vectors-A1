#include "vectors.h"
//Ibrahim Alshubaily

//vector init function
vector vector_init(float x, float y, float z){
 vector v;
 v.x=x;
 v.y=y;
 v.z=z;
 v.length=sqrt(x*x+y*y+z*z);
	return v;
}

//write vector_add function that takes two vectors as parameters and returns a vector that is the sum of the two vectors
vector vector_add(vector v1, vector v2) {
	return vector_init(v1.x + v2.x, v1.y + v2.y, v1.z + v2.z);	
}

//write vector_dot function that takes two vectors as parameters and returns a float which is the dot product 
//(look it up if you don't know what a dot product is) 

float vector_dot(vector v1, vector v2) {
	return (v1.x * v2.x) + (v1.y * v2.y) + (v1.z * v2.z);
}

//write vector_normalize function that takes a pointer to a vector as a parameter 
//and modify the vector by dividing each of the x,y,z components by its length. 
//Check if the length is zero and return 1 if it is zero (unsuccessful normalization) 
// otherwise return 0 (successful normalization)
int vector_normalize(vector *v) {
	if (v->length == 0) {
		return 1;
	}else {
		v->x = v->x  / v->length;
		v->y = v->y  / v->length;
		v->z = v->z  / v->length;
	}
	return 0;
}
//write vector_print function that prints out the x,y,z and length of a vector on separate lines
void vector_print(vector v) {
	printf("The vector's x = %f \n", v.x);
	printf("The vector's y = %f\n", v.y);
	printf("The vector's z = %f\n", v.z);
	printf("The vector's length = %f\n", v.length);
}

