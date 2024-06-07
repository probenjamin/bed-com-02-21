
namespace shapes {
  class Circle {
    private:
      double radius;
    public:
      Circle() {}
      Circle(double r) : radius(r) {}
      ~Circle() {}
      double getRadius() { return radius; }
      void setRadius(double r) { radius = r; }
  };
}