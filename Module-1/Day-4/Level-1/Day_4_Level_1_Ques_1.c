#include <stdio.h>
struct Box {
    float length;
    float width;
    float height;
};
float Volume(struct Box* boxPtr) {
    return boxPtr->length * boxPtr->width * boxPtr->height;
}
float SurfaceArea(struct Box* boxPtr) {
    return 2 * (boxPtr->length * boxPtr->width + boxPtr->length * boxPtr->height + boxPtr->width * boxPtr->height);
}

int main() {
    struct Box myBox;
    myBox.length = 5.0;
    myBox.width = 3.0;
    myBox.height = 2.0;

    struct Box* boxPtr = &myBox;
    float volume = Volume(boxPtr);
    float surfaceArea = SurfaceArea(boxPtr);
    printf("Box Volume: %.2f\n", volume);
    printf("Box Surface Area: %.2f\n", surfaceArea);

    return 0;
}

