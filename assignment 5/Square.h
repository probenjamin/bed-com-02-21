namespace shapes {
  class Square {
    private:
      double sideLength;
    public:
      Square() {}
      Square(double side) : sideLength(side) {}
      ~Square() {}
      double getSideLength() { return sideLength; }
      void setSideLength(double side) { sideLength = side; }
  };
}
