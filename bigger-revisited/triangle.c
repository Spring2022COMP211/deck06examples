#include <math.h>
#include <stdlib.h>
#include "triangle.h"

Triangle *triangle_constructor(const Point *a, const Point *b, const Point *c) {
    Triangle *t = (Triangle *) malloc(sizeof(Triangle));
    t->a = a;
    t->b = b;
    t->c = c;
    return t;
}

double triangle_perimeter(const Triangle *t) {
    return (point_distance(t->a, t->b) + 
            point_distance(t->b, t->c) + 
            point_distance(t->c, t->a));
}

double triangle_area(const Triangle *t) {
    double s = triangle_perimeter(t) / 2.0;
    double ab = point_distance(t->a, t->b);
    double bc = point_distance(t->b, t->c);
    double ca = point_distance(t->c, t->a);

    return sqrt(s*(s-ab)*(s-bc)*(s-ca));
}

Triangle *triangle_clone(const Triangle *src) {
    return triangle_constructor(src->a, src->b, src->c);
}


