#include <stdio.h>
#include <stdlib.h>
#include "point.h"
#include "triangle.h"

int main() {

    Point *a = point_constructor(-2, -1.5);
    Point *b = point_constructor(-3, 5);
    Point *c = point_constructor(3, 6.4);
    Point *d = point_constructor(0.0, 0.0);
    Point *e = point_constructor(4.1, -4.1);


    Triangle *t1 = triangle_constructor(a, b, c);
    Triangle *t2 = triangle_constructor(a, d, e);

    printf("t1 perimeter: %f\n", triangle_perimeter(t1));
    printf("t2 perimater: %f\n", triangle_perimeter(t2));
    printf("t1 area: %f\n", triangle_area(t1));
    printf("t2 area: %f\n", triangle_area(t2));

    printf("Is point a the origin: %s\n", (point_is_origin(a)) ? "yes" : "no");
    printf("Is point d the origin: %s\n", (point_is_origin(d)) ? "yes" : "no");

    free(t1);
    free(t2);
    free(a);
    free(b);
    free(c);
    free(d);
    free(e);
}


