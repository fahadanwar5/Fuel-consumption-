#include <stdio.h>
int main(){

float totaldistance, totalfuel, averageconsumption;

printf("Input the distance:\n");
scanf("%f", &totaldistance);
printf("Input the total fuel:\n");
scanf("%f", &totalfuel);

averageconsumption = totaldistance / totalfuel;
printf("average = %f\n", averageconsumption);

return 0;
}
