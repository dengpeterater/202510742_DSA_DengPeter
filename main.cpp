#include <stdio.h>

void congratulate() {
    char name[50];
    printf("Enter your name: ");
    scanf("%s", name);
    printf("Congratulations %s!\n", name);
}

int main() {
    congratulate();
    return 0;
}
