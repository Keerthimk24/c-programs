#include <stdio.h>
#define PI 3.14159
void calculateTriangleArea();
void calculateRectangleArea();
void calculateSquareArea();
void calculateCircleArea();
int main() {
    int choice;
    while (1) {
        printf("\nChoose a shape to calculate the area:\n");
        printf("1. Triangle\n2. Rectangle\n3. Square\n4. Circle\n5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        
        switch (choice) {
            case 1:
                calculateTriangleArea();
                break;
            case 2:
                calculateRectangleArea();
                break;
            case 3:
                calculateSquareArea();
                break;
            case 4:
                calculateCircleArea();
                break;
            case 5:
                return 0;
            default:
                printf("Invalid choice! Please try again.\n");
        }
    }
    return 0;
}
void calculateTriangleArea() {
    float base, height, area;
    printf("Enter base and height of the triangle: ");
    scanf("%f %f", &base, &height);
    area = (base * height) / 2;
    printf("Area of the triangle: %.2f\n", area);
}
void calculateRectangleArea() {
    float length, breadth, area;
    printf("Enter length and breadth of the rectangle: ");
    scanf("%f %f", &length, &breadth);
    area = length * breadth;
    printf("Area of the rectangle: %.2f\n", area);
}
void calculateSquareArea() {
    float side, area;
    printf("Enter side of the square: ");
    scanf("%f", &side);
    area = side * side;
    printf("Area of the square: %.2f\n", area);
}
void calculateCircleArea() {
    float radius, area;
    printf("Enter radius of the circle: ");
    scanf("%f", &radius);
    area = PI * radius * radius;
    printf("Area of the circle: %.2f\n", area);
}
