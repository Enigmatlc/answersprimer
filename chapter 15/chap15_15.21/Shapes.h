// Exercise 15.21: Choose one of the following general abstractions containing
// a family of types (or choose one of your own). Organize the types into an
// inheritance hierarchy:
// (a) Graphical file formats (such as gif, tiff, jpeg, bmp)
// (b) Geometric primitives (such as box, circle, sphere, cone)
// (c) C++ language types (such as class, function, member function)

#pragma once
#include<string>
#include<math.h>

static const float PI=3.14159265359;

class Shape
{
public:
    virtual std::string name()=0;
};
class TWO_D_SHAPE:public Shape{
public:
    TWO_D_SHAPE()=default;
    TWO_D_SHAPE(float l,float h):len(l),he(h){}
    virtual float area()=0;
    virtual float diameter()=0;
    virtual float circumference()=0;
protected:
    float len;
    float he;
};
class THREE_D_SHAPE:public Shape
{
public:
    THREE_D_SHAPE()=default;
    THREE_D_SHAPE(float l,float h,float w):len(l),he(h),wid(w){}
    virtual float  area()=0;
    virtual float  volume()=0;

protected:
float len;
float he;
float wid;
};
//3d shapes
class Box: public THREE_D_SHAPE{
public:
    Box()=default;
    Box(float len,float he,float wit):THREE_D_SHAPE(len,he,wid){}
    virtual float volume() override{
        return len * wid * he;
    }
    virtual float perimeter(){
        return 4*(len+wid+he);
    }
    virtual float diagonal(){
        return sqrt(pow(len,2)+pow(wid,2)+pow(he,2));
    }  
    virtual std::string name() override{return "Box";}
};
class Sphere:public THREE_D_SHAPE{
public:
    Sphere()=default;
    Sphere(float r):radius(r){}

    virtual float volume() override{
        return (4.f/3.f)*PI*pow(radius,3);
    }
    virtual float surface_area(){
        return 4.f*PI*pow(radius,2);
    }
    virtual float diameter(){
        return radius*2;
    }
    virtual std::string name() override{
        return "Sphere";
    }
protected:
    float radius;
};
class Cone: THREE_D_SHAPE{
public:
    Cone()=default;
    Cone(float r,float h):radius(r),height(h){}
    virtual float volume() override{
        return (1.f/3.f)*PI*pow(radius,2)*height;
    }
    virtual float surface_area() {
        return PI*radius*(radius+sqrt(pow(height,2)+pow(radius,2)));
    }
    virtual float base_area(){
        return PI*pow(radius,2);
    }
protected:
    float radius;
    float height;
};
//2d shapes
class Circle:public TWO_D_SHAPE
{
public:
Circle()=default;
Circle(float r):ra(r){}
virtual float area() override{
    return PI*pow(ra,2);
}
virtual float circumference() override{
    return 2*PI*ra;
}
virtual float diameter() override{
    return 2* ra;
}
virtual float radius() {
    return sqrt(area()/PI);
}
protected:
    float ra;
};
