#include <iostream>
#include "square.h"
#include "triangle.h"
#include "circle.h"
#include "Area.h"

int main() {
  int choice;
  while(true) {
    std::cout << "1. Calculate the area of a square\n";
    std::cout << "2. Calculate the area of a triangle\n";
    std::cout << "3. Calculate the area of a circle\n";
    std::cout << "4. Quit\n";
    std::cin >> choice;
    switch(choice) {
      case 1: {
        double side;
        std::cout << "Enter the side length of the square: ";
        std::cin >> side;
        shapes::Square s(side);
        double area = Area::calculateSquareArea(s);
        std::cout << "The area of the square is: " << area << std::endl;
        break;
      }
      case 2: {
        double base, height;
        std::cout << "Enter the base and height of the triangle: ";
        std::cin >> base >> height;
        shapes::Triangle t(base, height);
        double area = Area::calculateTriangleArea(t);
        std::cout << "The area of the triangle is: " << area << std::endl;
        break;
      }
      case 3: {
        double radius;
        std::cout << "Enter the radius of the circle: ";
        std::cin >> radius;
        shapes::Circle c(radius);
        double area = Area::calculateCircleArea(c);
        std::cout << "The area of the circle is: " << area << std::endl;
        break;
      }
      case 4: {
        return 0;
      }
      default: {
        std::cout << "Invalid choice. Please try again." << std::endl;
      }
    }
  }
  return 0;
};