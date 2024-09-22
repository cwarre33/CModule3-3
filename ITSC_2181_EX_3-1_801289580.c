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
    struct box b = {3, "red", 3, 2, 5, 10.21, 20.62, 35.72};
    printf("Item: %d, Color: %s, Position: (%.2f, %.2f, %.2f), Height: %d, Width: %d, Depth: %d\n", b.itemnum, b.color, b.x, b.y, b.z, b.height, b.width, b.depth);
    return 0;
}