#include <stdio.h>

int main() {
    int time, hh, mm, ss;
    hh = mm = ss = 0;

    scanf("%i", &time);

    while (time > 0) {
        if (time > 0) {
            ss += 1;
            time -= 1;
        }

        if (ss >= 60) {
            mm += 1;
            ss = 0;
        }

        if (mm >= 60) {
            hh += 1;
            mm = 0;
        }
    }

    printf("%i:%i:%i\n", hh, mm, ss);

    return 0;
}
