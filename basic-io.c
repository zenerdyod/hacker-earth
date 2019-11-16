#include <stdio.h>

int main() {
    int get_val = 0;
    char get_string[15] = {0};

    scanf("%d", &get_val);
    if(get_val > 10) {
        return -1;
    }
    scanf("%s", get_string);
    printf("%d\n%s", get_val, get_string);

    return 0;
}
