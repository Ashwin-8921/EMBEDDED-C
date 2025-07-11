// Log Session an embedded command interface using an array of function pointers.
#include <stdio.h>

void init(void) {
    printf("Device Initialized\n");
}

void start(void) {
    printf("Device Started\n");
}

void stop(void) {
    printf("Device Stopped\n");
}

typedef enum {
    CMD_INIT = 0,
    CMD_START,
    CMD_STOP
} Command;

int main() {
    void (*cmd_table[])(void) = {init, start, stop};
    int user_input = CMD_START;
    cmd_table[user_input]();
    return 0;
}
