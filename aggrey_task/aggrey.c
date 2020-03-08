#include <stdio.h>
#include <stdlib.h>

float fare = 1000, fare1 = 3000;
float fareReg1(float fare);
float fareReg2(float fare1);

 int main()
 {
     int choice;
     printf("Select region to calculate fare:\n");
     printf("1. Region one.\n2. Region two.\n");
     scanf("%d", &choice);
     switch(choice)
        {
            case 1:
            fareReg1(fare);
            break;
            case 2:
            fareReg2(fare1);
            break;
            default:
            printf("Wrong choice");
        }
    return 0;
 }


 float fareReg1(float fare)
 {
    float amountMale;
    float amountFemale;
    amountFemale =(fare - (fare*0.085));
    amountMale = (fare - (fare*0.115));
    printf("The fare is: %.2f",fare);
    printf("\nThe fare after the discount is:");
   printf("\nMale:\t %.2f \tFemale: %.2f \n", amountMale, amountFemale);
 }


 float fareReg2(float fare1)
 {
    float amountMale;
    float amountFemale;
   
    amountFemale =(fare1 - (fare1*0.12));
    amountMale = (fare1 - (fare1*0.125));
    printf("The fare is: %.2f",fare1);
    printf("The fare after the discount is:");
    printf("\nMale:\t %.2f \tFemale: %.2f \n", amountMale, amountFemale);
    
 }
