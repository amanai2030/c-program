
#include<stdio.h>

     int main ( ){

          float km, m ,f , k, in, cm;
          printf("enter the distance in kilometers:");

          scanf("%f", &km );

          m = km *1000 ;
          cm = km *100000;
          f = m * 3.28084 ;
          in = f *12;


          printf("distance in meter : %f\n",m );
          printf("distance in centimeters : %f\n", cm );
          printf("distance in  feet : %f\n",f);
        printf("distance in inches:%f\n", in);

                }
