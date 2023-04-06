#include <stdio.h>
#include <math.h>
#include <string.h>


int sum(int number1, int number2){
    int sum;

    sum = number1 + number2;

    return sum;
}

int subtract(int number1, int number2){
    int difference;

    if(number1 > number2){
        difference = number1 - number2;
    }else{
        difference = number2 - number1;
    }

    return difference;
}

int multiply(int number1, int number2){
    int multiplication;

    multiplication = number1 * number2;

    return multiplication;
}

double divide(int number1, int number2){
    double result;

    result = (double)number1/number2;

    return result;
}

double squareRoot(int number){
    double sqrtResult;

    sqrtResult = sqrt(number);

    return sqrtResult;
}

int powerOfANumber(int number, int power){
    int result;

    result = pow(number, power);

    return result;
}

void read(){
    int number1, number2,power;
    char sign;

    printf("Enter the sign of the operation: ");
    scanf("%c", &sign);
    
    int sumResult,subtractResult,multiplicationResult,powResult;
    double divisionResult,sqrtResult;

    switch (sign)
    {

    case '+':
        printf("Enter 2 numbers: ");
        scanf("%d %d", &number1, &number2);
        sumResult = sum(number1,number2);
        printf("The result is: %d",sumResult);
        break;

    case '-':
        printf("Enter 2 numbers: ");
        scanf("%d %d", &number1, &number2);
        subtractResult = subtract(number1,number2);
        printf("%d", subtractResult);
        break;

    case '*':
        printf("Enter 2 numbers: ");
        scanf("%d %d", &number1, &number2);
        multiplicationResult = multiply(number1,number2);
        printf("The result is %d",multiplicationResult);
        break;

    case '/':
        printf("Enter 2 numbers: ");
        scanf("%d %d", &number1, &number2);
        divisionResult = divide(number1,number2);
        printf("The result is %.2lf",divisionResult);
        break;

    case '^':
        printf("Enter 1 number and the power: ");
        scanf("%d %d",&number1,&power);
        powResult = powerOfANumber(number1,power);
        printf("The result is %d",powResult);
        break;

    case 's':
        printf("Enter 1 number:");
        scanf("%d",&number1);
        sqrtResult = squareRoot(number1);
        printf("The result is %.2lf",sqrtResult);
        break; 
    
    default:
        break;
    }
}

int main(){
    read();
}