#include<iostream>
#include<string>
#include <vector>

using namespace std;

class IArea {
public:
    string type;
    virtual double calculateArea() = 0;
};


class Rectangle : public IArea{
private:
    double length;
    double width;
public:
    Rectangle(double length1, double width1){
        type = "Rectangle";
        length = length1;
        width = width1;
    }
    virtual double calculateArea(){
        return length*width;
    }
};

class Circle : public IArea{
private:
    double radius;
public:
    Circle(double radius1){
        radius = radius1;
        type = "Circle";
    }
    virtual double calculateArea(){
        // PI = 3.1416
        return (radius*radius)*3.1416;
    }
};

class Square : public IArea{
private:
    double side;
public:
    Square(double side1){
        type = "Square";
        side = side1;
    }
    virtual double calculateArea(){
        return (side*side);
    }
};

class PrintShapeDetails{
public:
    static void printArea(vector<IArea*> shapes){
        for (int i = 0; i < shapes.size(); ++i) {
            cout << "Type: " << shapes[i]->type <<
                "\tArea: " << shapes[i]->calculateArea() << endl;
        }
    }
};

int main(){
    vector<IArea*> shapes;
    shapes.push_back(new Rectangle(12.0,15.0));
    shapes.push_back(new Circle(3.5));
    shapes.push_back(new Square(4));
    PrintShapeDetails::printArea(shapes);
    return 0;
}