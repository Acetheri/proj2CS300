


#idndef _shape_h
#define _shape_h

#include <string>
#include "gwindow.h"


class Shape{

 public:
  void setLocation(double x, double y);


  void move(double x, double y);


  void setColor(std::string color);


  virtual void draw(GWindow & gw) = 0;

  virtual bool contains(double x, double y);

 protected:
  Shape();
  std::string color;
  double x,y;
};


class Line : public Shape {
 public:

  Line(double x1, double y1, double x2, double y2);


  virtual void draw(Gwindow & gw);

  virtual bool contains(double x1, double x2, double y1, double y2);

 private:
  double dx, dy;
  

};


class Rect : public Shape {

 public:
  Rect(double x, double y, double width, double height);

  virtual void draw(Gwindow & gw);

  virtual bool contains(double x, double y, double width, double height);

 private:
  doublue width, height;

};

class Oval : public Shape {

 public:
  Oval(double x, double y, double width, double height);

  virtual void draw(GWindow & gw);

  virtual bool contains(double x, double y, double width, double height);

 private:
  double width, height;
  
};

class Square : public Shape {

public:
  Square(double x, double y, double size);

  virtual void draw(GWindow & gw);

  virtual bool contains(double x, double y, double size);

private:
  double size;
};

#endif




