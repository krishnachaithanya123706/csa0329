#include <stdio.h>

int main() {
    int n, i, num, even[100], odd[100], e = 0, o = 0;
    printf("Enter how many numbers: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &num);
        if(num % 2 == 0)
            even[e++] = num;
        else
            odd[o++] = num;
    }

    printf("Even numbers:\n");
    for(i = 0; i < e; i++)
        printf("%d ", even[i]);

    printf("\nOdd numbers:\n");
    for(i = 0; i < o; i++)
        printf("%d ", odd[i]);

    return 0;
}

