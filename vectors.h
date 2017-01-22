//enter the necessary includes - hint 3 different includes needed - google for which includes need to be added for the C functions used
//Ibrahim Alshubaily
#include <stdio.h>
#include <float.h>
#include <math.h>

typedef struct {
 //definition for float fields for x,y,z,length
		float x;
		float y;
		float z;
		float length;
} vector;

//header for vector_init fucniton
vector vector_init(float x, float y, float z);
//header for vector_add function
vector vector_add(vector v1, vector v2);
//vector_dot function
float vector_dot(vector v1, vector v2);
//vector_normalize function
int vector_normalize(vector *v);
//vector_print function
void vector_print(vector v);
