#ifndef VECTOR3D_H
#define VECTOR3D_H

typedef struct {
    double x;
    double y;
    double z;
} Vector3D;

Vector3D add(Vector3D v1, Vector3D v2);
Vector3D subtract(Vector3D v1, Vector3D v2);
double dotProduct(Vector3D v1, Vector3D v2);
Vector3D crossProduct(Vector3D v1, Vector3D v2);

#endif // VECTOR3D_H
