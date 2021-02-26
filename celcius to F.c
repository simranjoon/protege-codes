//To convert celcius to fahrenheit
#include<stdio.h>

int main()
{ 
    float C;
    printf("Enter the temperature in celsius\n");
    scanf("%f", &C);

    printf("The temperature in Fahrenheit is %.2f",C*1.8+32);
    return 0;

}
