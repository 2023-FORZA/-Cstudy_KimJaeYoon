#include <stdio.h>
#include <math.h>

int main() {

    double l, h, w;
    float x;
    scanf("%lf %lf %lf", &l, &h, &w);
    x = l / sqrt(pow(h, 2) + pow(w, 2));
    printf("%d ", (int)sqrt((l * l * h * h / (h * h + w * w))));
    printf("%d", (int)sqrt((l * l * w * w / (h * h + w * w))));
    
}
