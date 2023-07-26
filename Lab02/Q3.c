#include <stdio.h>
/*int main(){
    int dist, time, avgspeed;
    printf("Enter distance in meters(m): ");
    scanf("%d", &dist);
    printf("Enter time taken in seconds(s): ");
    scanf("%d", &time);
    avgspeed = dist/time;
    printf("Your average speed is, %d meters per second",avgspeed);
}*/
int main(){
    float dist, time, avgspeed;
    printf("Enter distance in meters(m): ");
    scanf("%f", &dist);
    printf("Enter time taken in seconds(s): ");
    scanf("%f", &time);
    avgspeed = dist/time;
    printf("Your average speed is, %.2f meters per second", avgspeed);
}
