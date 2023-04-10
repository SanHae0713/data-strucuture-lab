#include <stdio.h>

// Define the SportsCar class
typedef struct {
    int top_speed;
    int acceleration_time;
    int horsepower;
} SportsCar;

// Method to print the car's details
void print_car_details(SportsCar* car) {
    printf("Top Speed: %d mph\n", car->top_speed);
    printf("Acceleration Time: %d seconds\n", car->acceleration_time);
    printf("Horsepower: %d hp\n", car->horsepower);
}

int main() {
    // Create a new SportsCar object
    SportsCar my_car = { 200, 6, 400 };

    // Print the car's details
    printf("My Car:\n");
    print_car_details(&my_car);

    return 0;
}