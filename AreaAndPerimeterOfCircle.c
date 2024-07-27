#include <stdio.h>

// Function prototypes
float perimeter(float radius);
float area(float radius);

int main() {
    int type;
    float radius;
    float result;

    // Prompt user for the type of calculation
    printf("What would you like to calculate?\n");
    printf("Please enter 1 for perimeter of a circle or 2 for area of a circle.\n");
    scanf("%d", &type);

    // Prompt user to enter the radius of the circle 
    printf("Enter the radius of the circle in cm.\n");
    scanf("%f", &radius);

    // Perform calculation based on user input
    switch (type) {
        case 1:
            result = perimeter(radius);
            printf("The perimeter of the circle is %.2f cm\n", result);
            break;
        case 2:
            result = area(radius);
            printf("The area of the circle is %.2f cm^2\n", result);
            break;
        default:
            printf("Operation not permitted, please enter 1 or 2\n");
            break;
    }

    return 0;
}

// Function to calculate the area of the circle 
float area(float radius) {
    return 22.0 / 7.0 * radius * radius;
}

// Function to calculate the perimeter of the circle 
float perimeter(float radius) {
    return 2 * 22.0 / 7.0 * radius;
}
