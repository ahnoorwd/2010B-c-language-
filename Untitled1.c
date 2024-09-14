#include <stdio.h>

int main() {
    int a = 1, b = 2, c = 3;
    int x, y;


    scanf("%d %d", &x, &y);


    if ((x == a && y == b) || (x == b && y == a)) {
        printf("%d\n", c);  // The third brother is late
    }
    else if ((x == a && y == c) || (x == c && y == a)) {
        printf("%d\n", b);
    }
    else {
        printf("%d\n", a);
    }

    return 0;
}

