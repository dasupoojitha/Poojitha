/* c program to convert celsius to  fahrenheit.
The conversion from Celsius to Fahrenheit can be mathematically expressed as- F = ( 9 5 × C ) + 32. Where, F is the temperature in Fahrenheit. C is the temperature on the Centigrade scale.
Temperature in degrees Fahrenheit (°F) = (Temperature in degrees Celsius (°C) * 9/5) + 32.
Celsius to Fahrenheit formula is °F = °C×(9/5)+32.
*/
#include <stdio.h>
int main()
{
    float fahrenheit,celsius;
    printf("enter the value celsius:\n");
    scanf("%f",&celsius);
    fahrenheit=((celsius*(9)/5))+32;
    printf("temperature in fahrenheit is %f\n",fahrenheit);
}