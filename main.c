#include <stdio.h>
#include <stdlib.h>
#define FULL_DEGREE 360

void quadrant(double angle);

int main()
{
    double angle;
    printf("What is the angle: ");
    scanf("%lf", &angle);

    quadrant(angle);
    return 0;
}

void quadrant(double angle){

    if(angle == 0.0){
        printf("\nIt is not in a quadrant but lies on the positive X-axis");
    }else if( 0.0 < angle && angle < 90.0 ){
        printf("\nIt lies on the quadrant 1");
    }else if(angle == 90.0){
        printf("\nIt lies on the positive Y-axis");
    }else if(90.0 < angle && angle < 180.0){
        printf("\nIt lies on the quadrant 2");
    }else if(angle == 180.0){
        printf("\nIt lies on the negative X-axis");
    }else if(180.0 < angle && angle < 270.0){
        printf("\nIt lies on the quadrant 3");
    }else if(angle == 270.0){
        printf("\nIt lies on the negative Y-axis");
    }else if(270.0 < angle && angle <= 360.0){
        printf("\nIt lies on the quadrant 4");
    }else{
        angle /= FULL_DEGREE;
        if( 0.0 < angle && angle < 90.0 ){
            printf("\nIt lies on the quadrant 1");
        }else if(90.0 < angle && angle < 180.0){
            printf("\nIt lies on the quadrant 2");
        }else if(180.0 < angle && angle < 270.0){
            printf("\nIt lies on the quadrant 3");
        }else if(270.0 < angle && angle <= 360.0){
            printf("\nIt lies on the quadrant 4");
        }
    }
}

