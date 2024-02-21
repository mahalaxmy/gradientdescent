#include <stdio.h>

float grad_w1(float x1, float x2, float y, float w1, float w2) {
    return 2 * (y - (w1 * x1 + w2 * x2))* (-x1);
}

float grad_w2(float x1, float x2, float y, float w1, float w2) {
    return 2 * (y - (w1 * x1 + w2 * x2)) *(-x2);
}

int main() {
    float arr[4][3] = {
        {0, 1, 1}, {2, 1, 9}, {1, 0, 1}, {-2, 1, 7}
    };
    float w1 = 0.1, w2 = 0.7;
    
    for (int i = 0; i < 4; i++) {
                float x1 = arr[i][0], x2 = arr[i][1], y = arr[i][2];

        printf("(%f, %f, %f): grad_w1 = %f, grad_w2 = %f\n",
               x1, x2, y, grad_w1(x1, x2, y, w1, w2), grad_w2(x1, x2, y, w1, w2));
    }
    return 0;
}
