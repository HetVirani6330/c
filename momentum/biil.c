#include<stdio.h>
int main(){

    float unit,charge,bill;

    printf("\n Enter unit:");
    scanf("%f",&unit);

    if(unit <=50){
        bill=unit*0.5;
    }
    else if(unit>=51 && unit <= 150){
        bill=25+(unit-50)*0.75;
    }
    else if(unit>=151 && unit <= 250){
        bill=100+(unit-150)*1.2;
    }
    else {
        bill=220+(unit-250)*1.5;
    }
    printf("\n bill = %.2f",bill);

    charge = bill*20/100;
    printf("\n Charge = %.2f",charge);

    bill+=charge;
    printf("\n flinal bill = %.2f",bill);

    return 0;
}