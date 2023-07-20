#ifndef VECTOR_H
#define VECTOR_H

typedef struct vec2_s {
    double x;
    double y;
} vec2;

typedef struct vec3_s {
    double x;
    double y;
    double z;
} vec3;

vec2 vec2_create(double x, double y);
vec2 vec2_add(vec2 v1, vec2 v2);
vec2 vec2_subtract(vec2 v1, vec2 v2);
double vec2_dot(vec2 v1, vec2 v2);
vec2 vec2_cross(vec2 v1, vec2 v2);
double vec2_magnitude(vec2 v);
vec2 vec2_normalize(vec2 v);
double vec2_distanceTo(vec2 v1, vec2 v2);
vec2 vec2_rotateX(vec2 v, double angle);
vec2 vec2_rotateY(vec2 v, double angle);
vec2 vec2_negate(vec2 v);
const char* vec2_toString(vec2 v);

vec3 vec3_create(double x, double y, double z);
vec3 vec3_add(vec3 v1, vec3 v2);
vec3 vec3_subtract(vec3 v1, vec3 v2);
double vec3_dot(vec3 v1, vec3 v2);
vec3 vec3_cross(vec3 v1, vec3 v2);
double vec3_magnitude(vec3 v);
vec3 vec3_normalize(vec3 v);
double vec3_distance(vec3 v1, vec3 v2);
vec3 vec3_rotateX(vec3 v, double angle);
vec3 vec3_rotateY(vec3 v, double angle);
vec3 vec3_rotateZ(vec3 v, double angle);
vec3 vec3_negate(vec3 v);
const char* vec3_toString(vec3 v);
void vec3_toArray(vec3 v, double arr[3]);
vec3 vec3_scale(vec3 v, double scalar); 

#endif // VECTOR_H
