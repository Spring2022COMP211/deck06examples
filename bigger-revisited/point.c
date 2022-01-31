#include <math.h>
#include <stdlib.h>
#include "point.h"

Point *point_constructor(double x, double y) {
    Point *p = (Point *) malloc(sizeof(Point));
    p->x = x;
    p->y = y;
    return p;
}

double point_distance(const Point *p1, const Point *p2) {
    double dx = p1->x - p2->x;
    double dy = p1->y - p2->y;

    return sqrt(dx*dx+dy*dy);
}

int point_is_origin(const Point *p) {
    return ((fabs(p->x) < POINT_ORIGIN_TEST_EPSILON) &&
            (fabs(p->y) < POINT_ORIGIN_TEST_EPSILON));
}

Point *point_clone(const Point *src) {
    return point_constructor(src->x, src->y);
}

