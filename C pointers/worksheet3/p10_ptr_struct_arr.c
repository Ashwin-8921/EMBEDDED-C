//Access and modify an array of peripheral register structs using pointer arithmetic.
#include <stdio.h>

struct Peripheral {
    int status;
    int control;
    int data;
};

int main() {
    struct Peripheral devices[5];
    struct Peripheral* ptr = devices;

    for (int i = 0; i < 5; i++) {
        (ptr + i)->status = i;
        (ptr + i)->control = i + 10;
        (ptr + i)->data = (i + 1) * 100;
    }

    for (int i = 0; i < 5; i++) {
        printf("Device %d - Status: %d, Control: %d, Data: %d\n",
               i, devices[i].status, devices[i].control, devices[i].data);
    }

    return 0;
}
