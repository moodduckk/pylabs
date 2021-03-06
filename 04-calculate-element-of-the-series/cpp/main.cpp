#include <stdio.h>

using namespace std;

int main() {
    float prev,  // попередній елемент xₖ₋₁
          temp,  // тимчасова змінна для обчислення поточно елементу xₖ
          curr,  // поточний елемент xₖ
          q,     // константа, що множиться на xₖ₋₁
          r,     // константа, що множиться на xₖ₋₂
          b;     // константа, що додається
    int   n;     // порядковий номер елементу, який потрібно обчислити

    printf("Введіть перший елемент ряду x0: "); scanf("%f", &prev);
    printf("Введіть другий елемент ряду x1: "); scanf("%f", &curr);
    printf("Введіть q: "); scanf("%f", &q);
    printf("Введіть r: "); scanf("%f", &r);
    printf("Введіть b: "); scanf("%f", &b);
    printf("Введіть порядковий номер елементу n: "); scanf("%d", &n);

    // виводимо початок таблиці
    printf(" n         an       \n");
    printf("====================\n");
    printf("%3d %16f\n", 0, prev);
    printf("%3d %16f\n", 1, curr);

    for (int k = 2; k <= n; k++) {
        temp = q*curr + r*prev + b;  // обчислюємо поточний елемент xₖ
        prev = curr;                 // зберігаємо попередній елемент xₖ₋₁
        curr = temp;                 // зберігаємо поточний елемент xₖ

        printf("%3d %16f\n", k, curr);
    }

    printf("\nЕлемент ряду з порядковим номером n=%d дорівнює %.6g\n", n, curr);
    return 0;
}
