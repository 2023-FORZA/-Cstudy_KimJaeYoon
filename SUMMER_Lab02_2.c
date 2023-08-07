#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct Point {
    int	x;
    int	y;
};

int	triangle(double c, double a, double b) {
    if (sqrt(c) >= (sqrt(a) + sqrt(b))) {
        printf("X");
    }
    else if (c > (a + b)) {
        printf("Dunkak");
    }
    else if (c == (a + b)) {
        printf("Jikkak");
    }
    else if (c < (a + b)) {
        printf("Yeahkak");
    }
}

int	main(void) {
    struct Point p1, p2, p3;
    double	a, b, c;
    int	n = 0;

    scanf("%*d %*d", p1.x, p1.y);
    scanf("%*d %*d", p2.x, p2.y);
    scanf("%*d %*d", p3.x, p3.y);

    a = pow(p2.x - p1.x, 2) + pow(p2.y - p1.y, 2);
    b = pow(p3.x - p2.x, 2) + pow(p3.y - p2.y, 2);
    c = pow(p3.x - p1.x, 2) + pow(p3.y - p1.y, 2);

    if (a >= b && a >= c) {
        n = triangle(a, b, c);
    }
    else if (b >= a && b >= c) {
        n = triangle(b, c, a);
    }
    else if (c >= a && c >= b) {
        n = triangle(c, b, a);
    }

    if (!n) {
        if (a == b || b == c || c == a) {
            printf("2");
        }
    }

    if (!n && a == b && b == c && c == a) {
        printf("Jung");
    }
    if (!n) {
        printf("Triangle");
    }

    return 0;

}