#include <stdio.h>
int findMax(int a, int b) {
    if (a > b) {
        return a;
    } else {
        return b;
    }
}

int findMin(int a, int b) {
    if (a < b) {
        return a;
    } else {
        return b;
    }
}

int main() {
    int n, num, max, min;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Enter element 1: ");
    scanf("%d", &num);
    max = num;
    min = num;
    for (int i = 2; i <= n; i++) {
        printf("Enter element %d: ", i);
        scanf("%d", &num);
        max = findMax(max, num);
        min = findMin(min, num);
    }
    printf("Maximum = %d\n", max);
    printf("Minimum = %d\n", min);
    
    return 0;
}
