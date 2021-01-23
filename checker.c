#include <stdio.h>
#include <stdlib.h>

void calculator(double Weight, double Height);

int main(void)
{
    printf("Check BMI, Ready?(Y/N): ");
    char checking;
    scanf(" %c", &checking);
    if(checking == 'y' || checking == 'Y'){
        int count = 1;
        while(count <= 10){
            printf("Weight (KG): ");
            double weight;
            scanf("%lf", &weight);
            printf("Height (CM): ");
            double height;
            scanf("%lf", &height);
            calculator(weight, height); // call the function
	    printf("Again?(Y/N): ");
	    char again;
	    scanf(" %c", &again);

            if(again == 'Y' || again == 'y') {
		system("clear");
	        continue;
            } else {
	        break; // break the programe
            }

            count += 1;
        }
    } else {
        printf("Bye!\n");
    }
    return 0;
}

void calculator(double Weight, double Height) {
    double CM_to_M = Height / 100.0;
    double power_of_height = CM_to_M * CM_to_M;
    double calculate = Weight / power_of_height;

    if(calculate <= 18.5){
        printf("BMI is ( %0.2f ) Underweight!\n", calculate);
    } else if(calculate >= 18.6){
        printf("BMI is ( %0.2f ) Normal!\n", calculate);
    } else if(25.0 <= calculate) {
        printf("BMI is ( %0.2f ) Overweight!\n", calculate);
    } else if(calculate >= 30.0){
        printf("BMI is ( %0.2f ) Obese!\n", calculate);
    }
};
