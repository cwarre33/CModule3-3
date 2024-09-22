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
struct box get_larger_box(struct box box1, struct box box2) {
    int volume1 = box1.height * box1.width * box1.depth;
    int volume2 = box2.height * box2.width * box2.depth;

    struct box larger_box = (volume1 > volume2) ? box1 : box2;

    if (volume1 == volume2) {
        larger_box = box2;
    }

    larger_box.x = 0;
    larger_box.y = 0;
    larger_box.z = 0;
    snprintf(larger_box.color, sizeof(larger_box.color), "green");

    printf("Larger box details:\n");
    printf("Item Number: %d\n", larger_box.itemnum);
    printf("Color: %s\n", larger_box.color);
    printf("Dimensions: %d x %d x %d\n", larger_box.height, larger_box.width, larger_box.depth);
    printf("Position: (%.2f, %.2f, %.2f)\n", larger_box.x, larger_box.y, larger_box.z);

    return larger_box;
}

int main() {
    struct box box1 = {1, "red", 10, 20, 30, 0.0, 0.0, 0.0};
    struct box box2 = {2, "blue", 15, 15, 15, 0.0, 0.0, 0.0};

    struct box larger_box = get_larger_box(box1, box2);

    return 0;
}