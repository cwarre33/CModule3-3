#include <stdio.h>

struct box {
    int itemnum;
    char color[20];
    int height;
    int width;
    int depth;
    float x;
    float y;
    float z;
};



int main() {
    struct box b[100];
    struct box b1 = {3, "red", 3, 2, 5, 10.21, 20.62, 35.72};
    struct box b2 = {4, "green", 4, 3, 6, 11.21, 21.62, 36.72};
    b[0] = b1;
    b[1] = b2;

    printf("Item: %d, Color: %s, Position: (%.2f, %.2f, %.2f), Height: %d, Width: %d, Depth: %d\n", b[0].itemnum, b[0].color, b[0].x, b[0].y, b[0].z, b[0].height, b[0].width, b[0].depth);
    printf("Item: %d, Color: %s, Position: (%.2f, %.2f, %.2f), Height: %d, Width: %d, Depth: %d\n", b[1].itemnum, b[1].color, b[1].x, b[1].y, b[1].z, b[1].height, b[1].width, b[1].depth);
    return 0;
}