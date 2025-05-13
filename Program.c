#include <stdio.h>
#include <stdlib.h>
#define N 12

struct data {
    char month[20];
    int date;
    float temperature;
};

int main(){
    system("chcp 65001");
    struct data array[N]= {
     {"Травень", 13, 10.1},
     {"Січень", 2, -13.8},
     {"Червень", 30, 28.5},
     {"Вересень", 1, -3.6},
     {"Лютий", 14, -12.5},
     {"Липень", 26, 30.7},
     {"Жовтень", 15, 10.2},
     {"Серпень", 31, 28.4},
     {"Квітень", 11, 23.9},
     {"Листопад", 16, -7.1},
     {"Березень", 8, 19.5},
     {"Грудень", 21, -14.0}
    };

    int i;
    int count = 0;
    for(i=0; i<N; i+=1){
        if(array[i].temperature > 0){
            printf("Дата: %s %d, Температура: %.1f > 0\n", array[i].month, array[i].date, array[i].temperature);
            count+=1;
        }
    }
    printf("Кількість: %d\n", count);
    return 0;
}