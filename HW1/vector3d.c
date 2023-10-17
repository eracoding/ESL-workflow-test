#include "vector3d.h"

Vector3D add(Vector3D v1, Vector3D v2){
    Vector3D output;
    output.x = v1.x + v2.x;
    output.y = v1.y + v2.y;
    output.z = v1.z + v2.z;
    
    return output;
}

Vector3D subtract(Vector3D v1, Vector3D v2){
    Vector3D output;
    output.x = v1.x - v2.x;
    output.y = v1.y - v2.y;
    output.z = v1.z - v2.z;
    
    return output;
}

double dotProduct(Vector3D v1, Vector3D v2){
    double output;
    output = v1.x * v2.x + v1.y * v2.y + v1.z * v2.z;
    return output;
}

Vector3D crossProduct(Vector3D v1, Vector3D v2){
    // i j k  
    // x y z => i(y*z - y*z) - j(...) + k(...)
    // x y z 
    Vector3D output;
    
    output.x = v1.y * v2.z - v1.z * v2.y;
    output.y = - (v1.x * v2.z - v1.z * v2.x);
    output.z = v1.x * v2.y - v1.y * v2.x;

    return output;
}