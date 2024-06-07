
class Area {
  public:
    static double calculateSquareArea(shapes::Square s) {
      return s.getSideLength() * s.getSideLength();
    }
    static double calculateTriangleArea(shapes::Triangle t) {
      return 0.5 * t.getBase() * t.getHeight();
    }
    static double calculateCircleArea(shapes::Circle c) {
      return 3.14159265359 * c.getRadius() * c.getRadius();
    }
};