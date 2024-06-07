

namespace shapes {
  class Triangle {
    private:
      double base, height;
    public:
      Triangle() {}
      Triangle(double b, double h) : base(b), height(h) {}
      ~Triangle() {}
      double getBase() { return base; }
      void setBase(double b) { base = b; }
      double getHeight() { return height; }
      void setHeight(double h) { height = h; }
  };
}