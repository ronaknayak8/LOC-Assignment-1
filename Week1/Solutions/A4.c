#include <stdio.h>

int main() 


{
    float num1, num2;
   
    printf("Enter two numbers: ");
    scanf("%f %f", &num1, &num2);

    
    switch(1) {
        case 1 :
            printf("%.2f + %.2f = %.2f\n", num1, num2, num1 + num2);
            
        case 2 :
            printf("%.2f - %.2f = %.2f\n", num1, num2, num1 - num2);
            
        case 3 :
            printf("%.2f * %.2f = %.2f\n", num1, num2, num1 * num2);
            
        case 4 :
            if(num2 == 0) {
                printf("Error: Cannot divide by zero.\n");
            }
            else {
                printf("%.2f / %.2f = %.2f\n", num1, num2, num1 / num2);
            }
            break;
        default:
            printf("Enter valid input\n");
    }

    return 0;
}
