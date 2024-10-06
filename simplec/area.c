#include <stdio.h>
#define PI 3.14159
int main(){
    float radius, area;
    printf("Radius: ");
    scanf("%f",&radius);
    area = PI * radius * radius;
    printf("area = %f\n",area);
}