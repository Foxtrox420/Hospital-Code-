#include <stdio.h>

int main(){

    
    int amountseeDoctor, amountgetTreatment, amountMedication, patientStatus; 

    printf("Enter patient status (0 = cured, 1 = critical, 2 = serious, 3 = fair\n");
    scanf("%d", &patientStatus);

    while(patientStatus != 0){
        switch(patientStatus){
            case 1 : {
                printf("Need to see doctor 5x\n");
                printf("Enter the amount you've seen the doctor :\n");
                scanf("%d", &amountseeDoctor);
                printf("Need to treatment 10x\n");
                printf("Enter the amount you've done treatment :\n");
                scanf("%d", &amountgetTreatment); 
                printf("Need medication, 3x for each treatment\n");
                printf("Enter the amount of medication you've taken:\n");
                scanf("%d", &amountMedication);
                    if(amountseeDoctor >= 5 && amountgetTreatment >= 10 && amountMedication >= 30){
                        patientStatus = 0; 
                    }
                    else {
                        printf("patient is not cured.\n");
                    }
                break; 
            }
            case 2 : {
                printf("Need to see doctor 2x\n");
                printf("Enter the amount you've seen the doctor :\n");
                scanf("%d", &amountseeDoctor);
                printf("Need to treatment 5x\n");
                printf("Enter the amount you've done treatment :\n");
                scanf("%d", &amountgetTreatment); 
                printf("Need medication, 2x for each treatment\n");
                printf("Enter the amount of medication you've taken:\n");
                scanf("%d", &amountMedication);
                    if(amountseeDoctor >= 2 && amountgetTreatment >= 5 && amountMedication >= 10){
                        patientStatus = 0; 
                    }
                    else {
                        printf("patient is not cured.\n");
                    }
                break; 
            }
            case 3 : {
                printf("Need to see doctor 1x\n");
                printf("Enter the amount you've seen the doctor :\n");
                scanf("%d", &amountseeDoctor);
                printf("Need to treatment 2x\n");
                printf("Enter the amount you've done treatment :\n");
                scanf("%d", &amountgetTreatment); 
                printf("Need medication, 1x for each treatment\n");
                printf("Enter the amount of medication you've taken:\n");
                scanf("%d", &amountMedication);
                    if(amountseeDoctor >= 1 && amountgetTreatment >= 2 && amountMedication >= 2){
                        patientStatus = 0; 
                    }
                    else {
                        printf("patient is not cured.\n");
                    }
                break; 
            }
        }
    }

    printf("The patient is now cured and may be discharged \n"); 

    return 0; 
}
