#include <stdio.h>
#include "platform.h"
#include "xil_printf.h"
#include <math.h>

int main() {
    int num28, num29, num30, num31;
    double results[12]; 
    int count = 0;      
    double sum = 0.0;   

    printf("Введите первое число (num28): ");
    scanf("%d", &num28);
    printf("Введите второе число (num29): ");
    scanf("%d", &num29);
    printf("Введите третье число (num30): ");
    scanf("%d", &num30);
    printf("Введите четвертое число (num31): ");
    scanf("%d", &num31);

    int numbers[] = {num28, num29, num30, num31};

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            if (i != j) {
                if (numbers[j] != 0) { 
                    double result = (double)numbers[i] / numbers[j];
                    results[count++] = result;
                    printf("%d / %d = %f\n", numbers[i], numbers[j], result);
                } else {
                    printf("Ошибка: Деление на ноль при %d / %d\n", numbers[i], numbers[j]);
                }
            }
        }
    }

    if (count > 0) {
        for (int i = 0; i < count; i++) {
            sum += results[i];
        }
        double average = sum / count;
        printf("Среднее арифметическое: %f\n", average);
    } else {
        printf("Нет доступных результатов для вычисления среднего арифметического.\n");
    }

    return 0;
}
