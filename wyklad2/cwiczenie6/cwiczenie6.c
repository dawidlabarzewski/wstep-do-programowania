#include <stdio.h>

void showText() {
    printf("Usmiech!");
}

int main() {
    for(int i = 3; i > 0; i--) {
        for(int j = 0; j < i; j++) {
            showText();
        }
        printf("\n");
    }

    return 0;
}