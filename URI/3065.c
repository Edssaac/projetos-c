#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

#define MAX 11234

int main() {

    int n, x, ans, i, j;
    bool str[MAX];

    x = 0;
    while (scanf("%d", &n), n)
    {
        char *tmp;
        char string[MAX];
        int nums[MAX];


        scanf("%s", string);

        if (n == 1)
            printf("Teste %d\n%s\n\n", ++x, string);

        else
        {
            i = j = 0;
            while (string[i])
            {
                if (string[i] == '+')
                    str[j++] = true;
                else if (string[i] == '-')
                    str[j++] = false;

                ++i;
            }

            i = 0;
            tmp = strtok(string, "+-");
            nums[i++] = atoi(tmp);

            do
            {
                tmp = strtok(NULL, "+-");
                if (tmp)
                    nums[i++] = atoi(tmp);

            } while (tmp);

            ans = nums[0];
            for (i = 0; i < n - 1; ++i)
                if (str[i])
                    ans += nums[i + 1];
                else
                    ans -= nums[i + 1];

            printf("Teste %d\n%d\n\n", ++x, ans);
        }
    }


    return 0;
}
