#include "stdio.h"
#include <stdlib.h>
#define inchToCm(inch) inch * 2.54
#define cmToInch(cm) cm/2.54
#define meterToFeet(meter) meter * 3.281
#define feetToMeter(feet) feet/3.281

void decide(int choice, double value);

int main(int argc, char *argv[]) {
    double val = atof(argv[1]);
    int choice = 0;
    printf("Here are the options of what to convert: \n1. Inches to Cm\n2. Cm to Inches\n3. Meter to Feet\n4. Feet to Meter\n");
    while(choice <1 || choice >4){
    printf("Which option would you like to convert %f to: ",val);
    scanf("%d",&choice);
    }
decide(choice,val);   
}

void decide(int choice, double value){
    switch(choice){
        case 1:
            printf("%f inches converted to cm is %f\n",value,inchToCm(value));
            break;
        case 2:
            printf("%f centimeters to inches is %f\n",value,cmToInch(value));
            break;
        case 3:
            printf("%f meters to feet is %f\n",value,meterToFeet(value));
            break;
        case 4:
            printf("%f feet to meters is %f",value,feetToMeter(value));
            break;
    }
}