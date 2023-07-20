#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include "vector.h"

vec2 vec2_create(double x, double y)
{
    vec2 v;
    v.x = x;
    v.y = y;
    return v;
}

vec2 vec2_add(vec2 v1, vec2 v2)
{
    vec2 result;
    result.x = v1.x + v2.x;
    result.y = v1.y + v2.y;
    return result;
}

vec2 vec2_subtract(vec2 v1, vec2 v2)
{
    vec2 result;
    result.x = v1.x - v2.x;
    result.y = v1.y - v2.y;
    return result;
}

double vec2_dot(vec2 v1, vec2 v2)
{
    vec2 result;
    result.x = v1.x * v2.x;
    result.y = v1.y * v2.y;
    return result;
}

vec2 vec2_cross(vec2 v1, vec2 v2)
{
    vec2 result;
    result.x = v1.y * v2.x;
    result.y = v1.x * v2.y;
    return result;
}

double vec2_magnitude(vec2 v)
{
    return sqrt(v.x * v.x + v.y * v.y);
}

vec2 vec2_normalize(vec2 v)
{
    double magnitude = vec2_magnitude(v);
    vec2 result;
    result.x = v.x / magnitude;
    result.y = v.y / magnitude;
    return result;
}

double vec2_distanceTo(vec2 v1, vec2 v2)
{
    double dx = v1.x - v2.x;
    double dy = v1.y - v2.y;
    return sqrt(dx * dx + dy * dy);
}

vec2 vec2_rotateX(vec2 v, double angle)
{
    double radian_angle = M_PI / 180.0 * angle;
    double sin_theta = sin(radian_angle);
    double cos_theta = cos(radian_angle);

    vec2 result;
    result.x = v.x * cos_theta - v.y * sin_theta;
    result.y = v.x * sin_theta + v.y * cos_theta;
    return result;
}

vec2 vec2_rotateY(vec2 v, double angle)
{
    double radian_angle = M_PI / 180.0 * angle;
    double sin_theta = sin(radian_angle);
    double cos_theta = cos(radian_angle);

    vec2 result;
    result.x = v.x * cos_theta - v.y * sin_theta;
    result.y = v.x * sin_theta + v.y * cos_theta;
    return result;
}

vec2 vec2_negate(vec2 v)
{
    vec2 result;
    result.x = -v.x;
    result.y = -v.y;
    return result;
}

const char *vec2_toString(vec2 v)
{
    static char str[50];
    snprintf(str, sizeof(str), "<%lf, %lf>", v.x, v.y);
    return str;
}

vec3 vec3_create(double x, double y, double z)
{
    vec3 v;
    v.x = x;
    v.y = y;
    v.z = z;
    return v;
}

vec3 vec3_add(vec3 v1, vec3 v2)
{
    vec3 result;
    result.x = v1.x + v2.x;
    result.y = v1.y + v2.y;
    result.z = v1.z + v2.z;
    return result;
}

vec3 vec3_subtract(vec3 v1, vec3 v2)
{
    vec3 result;
    result.x = v1.x - v2.x;
    result.y = v1.y - v2.y;
    result.z = v1.z - v2.z;
    return result;
}

vec3 vec3_dot(vec3 v1, vec3 v2)
{
    vec3 result;
    result.x = v1.x * v2.x;
    result.y = v1.y * v2.y;
    result.z = v1.z * v2.z;
    return result;
}

vec3 vec3_cross(vec3 v1, vec3 v2)
{
    vec3 result;
    result.x = v1.y * v2.z - v1.z * v2.y;
    result.y = v1.z * v2.x - v1.x * v2.z;
    result.z = v1.x * v2.y - v1.y * v2.x;
    return result;
}

double vec3_magnitude(vec3 v)
{
    return sqrt(v.x * v.x + v.y * v.y + v.z * v.z);
}

vec3 vec3_normalize(vec3 v)
{
    double magnitude = vec3_magnitude(v);
    vec3 result;
    result.x = v.x / magnitude;
    result.y = v.y / magnitude;
    result.z = v.z / magnitude;
    return result;
}

double vec3_distance(vec3 v1, vec3 v2)
{
    double dx = v1.x - v2.x;
    double dy = v1.y - v2.y;
    double dz = v1.z - v2.z;
    return sqrt(dx * dx + dy * dy + dz * dz);
}

vec3 vec3_rotateX(vec3 v, double angle)
{
    double radian_angle = M_PI / 180.0 * angle;
    double sin_theta = sin(radian_angle);
    double cos_theta = cos(radian_angle);

    vec3 result;
    result.x = v.x;
    result.y = v.y * cos_theta - v.z * sin_theta;
    result.z = v.y * sin_theta + v.z * cos_theta;
    return result;
}

vec3 vec3_rotateY(vec3 v, double angle)
{
    double radian_angle = M_PI / 180.0 * angle;
    double sin_theta = sin(radian_angle);
    double cos_theta = cos(radian_angle);

    vec3 result;
    result.x = v.x * cos_theta + v.z * sin_theta;
    result.y = v.y;
    result.z = -v.x * sin_theta + v.z * cos_theta;
    return result;
}

vec3 vec3_rotateZ(vec3 v, double angle)
{
    double radian_angle = M_PI / 180.0 * angle;
    double sin_theta = sin(radian_angle);
    double cos_theta = cos(radian_angle);

    vec3 result;
    result.x = v.x * cos_theta - v.y * sin_theta;
    result.y = v.x * sin_theta + v.y * cos_theta;
    result.z = v.z;
    return result;
}

vec3 vec3_negate(vec3 v)
{
    vec3 result;
    result.x = -v.x;
    result.y = -v.y;
    result.z = -v.z;
    return result;
}

const char *vec3_toString(vec3 v)
{
    static char str[50];
    snprintf(str, sizeof(str), "<%lf, %lf, %lf>", v.x, v.y, v.z);
    return str;
}

void vec3_toArray(vec3 v, double arr[3])
{
    arr[0] = v.x;
    arr[1] = v.y;
    arr[2] = v.z;
}

vec3 vec3_project(vec3 v1, vec3 v2)
{
    double dot = v1.x * v2.x + v1.y * v2.y + v1.z * v2.z;
    double len = v2.x * v2.x + v2.y * v2.y + v2.z * v2.z;
    vec3 result;
    result.x = (dot / len) * v2.x;
    result.y = (dot / len) * v2.y;
    result.z = (dot / len) * v2.z;
    return result;
}

vec3 vec3_reflect(vec3 v1, vec3 v2)
{
    double dot = v1.x * v2.x + v1.y * v2.y + v1.z * v2.z;
    double len = v2.x * v2.x + v2.y * v2.y + v2.z * v2.z;
    vec3 scaled = v2;
    scaled.x = (dot / len) * v2.x;
    scaled.y = (dot / len) * v2.y;
    scaled.z = (dot / len) * v2.z;
    vec3 result;
    result.x = 2 * scaled.x - v1.x;
    result.y = 2 * scaled.y - v1.y;
    result.z = 2 * scaled.z - v1.z;
    return result;
}

vec3 vec3_scale(vec3 v, double scalar)
{
    vec3 result;
    result.x *= scalar;
    result.y *= scalar;
    return result;
}