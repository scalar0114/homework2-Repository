//lab2-1.c

#include <stdio.h>

int main()
{
    char charType;
    int integerType;
    float floatType;
    double doubleType;

    printf("[----- [������] [2023041001] -----]");
    
    // ���� ũ�� ���
    printf("Size of char: %ld byte\n", sizeof(charType));
    printf("Size of int: %ld bytes\n", sizeof(integerType));
    printf("Size of float: %ld bytes\n", sizeof(floatType));
    printf("Size of double: %ld bytes\n", sizeof(doubleType));

    printf("-----------------------------------------\n");
    
    // ������ Ÿ���� ũ�� ���
    printf("Size of char: %ld byte\n", sizeof(char));
    printf("Size of int: %ld bytes\n", sizeof(int));
    printf("Size of float: %ld bytes\n", sizeof(float));
    printf("Size of double: %ld bytes\n", sizeof(double));
    
    printf("-----------------------------------------\n");
    
    // ������ Ÿ���� ������ ũ�� ���
    printf("Size of char*: %ld byte\n", sizeof(char *));
    printf("Size of int*: %ld bytes\n", sizeof(int *));
    printf("Size of float*: %ld bytes\n", sizeof(float *));
    printf("Size of double*: %ld bytes\n", sizeof(double *));
    
    return 0;
}