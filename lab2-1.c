//lab2-1.c

#include <stdio.h>

int main()
{
    char charType;
    int integerType;
    float floatType;
    double doubleType;

    printf("[----- [오현승] [2023041001] -----]");
    
    // 변수 크기 출력
    printf("Size of char: %ld byte\n", sizeof(charType));
    printf("Size of int: %ld bytes\n", sizeof(integerType));
    printf("Size of float: %ld bytes\n", sizeof(floatType));
    printf("Size of double: %ld bytes\n", sizeof(doubleType));

    printf("-----------------------------------------\n");
    
    // 데이터 타입의 크기 출력
    printf("Size of char: %ld byte\n", sizeof(char));
    printf("Size of int: %ld bytes\n", sizeof(int));
    printf("Size of float: %ld bytes\n", sizeof(float));
    printf("Size of double: %ld bytes\n", sizeof(double));
    
    printf("-----------------------------------------\n");
    
    // 데이터 타입의 포인터 크기 출력
    printf("Size of char*: %ld byte\n", sizeof(char *));
    printf("Size of int*: %ld bytes\n", sizeof(int *));
    printf("Size of float*: %ld bytes\n", sizeof(float *));
    printf("Size of double*: %ld bytes\n", sizeof(double *));
    
    return 0;
}