#include "vector3d.h"
#include <stdio.h>

int main(){
    Vector3D v1 = {1.0, 2.0, 3.0};
    Vector3D v2 = {3.0, 2.0, 1.0};

    Vector3D sum = add(v1, v2);
    Vector3D diff = subtract(v1, v2);
    double dot = dotProduct(v1, v2);
    Vector3D cross = crossProduct(v1, v2);

    printf("Sum: (%.2f, %.2f, %.2f)\n", sum.x, sum.y, sum.z);
    printf("Difference: (%.2f, %.2f, %.2f)\n", diff.x, diff.y, diff.z);
    printf("Dot Product: %.2f\n", dot);
    printf("Cross Product: (%.2f, %.2f, %.2f)\n", cross.x, cross.y, cross.z);


    return 0;
}