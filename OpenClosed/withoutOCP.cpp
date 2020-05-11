#include<iostream>
#include<string>
#include <vector>
#include <memory>

using namespace std;

class Shape{
public:
    string type;
};

class Rectangle : public Shape{
private:
    double length;
    double width;
public:
    double getWidth(){
        return width;
    }
    double getLength(){
        return length;
    }
    Rectangle(double length1, double width1){
        type = "Rectangle";
        length = length1;
        width = width1;
    }

};

class Circle : public Shape{
private:
    double radius;
public:
    double getRadius(){
        return radius;
    }
    Circle(double radius1){
        radius = radius1;
        type = "Circle";
    }

};

class Square : public Shape{
private:
    double side;
public:
    double getSide(){
        return side;
    }
    Square(double side1){
        type = "Square";
        side = side1;
    }
};

class PrintShapeDetails{
public:
    static void printArea(vector<Shape*> shapes){
        double area;
        for (int i = 0; i < shapes.size(); ++i) {
            cout << "Type: " << shapes[i]->type << "\t";
            if(shapes[i]->type == "Rectangle"){
                Rectangle* shape = static_cast<Rectangle*>(shapes[i]);
                area = shape->getLength() * shape->getWidth();

            }
            else if(shapes[i]->type == "Square"){
                Square* shape = static_cast<Square*>(shapes[i]);
                area = shape->getSide() * shape->getSide();

            }
            else if(shapes[i]->type == "Circle"){
                Circle* shape = static_cast<Circle*>(shapes[i]);
                area = (shape->getRadius() * shape->getRadius()) * 3.1416;

            }
            cout << "Area: " << area << endl;
        }
    }
};

int main(){
    vector<Shape*> shapes;
    shapes.push_back(new Rectangle(12.0,15.0));
    shapes.push_back(new Circle(3.5));
    shapes.push_back(new Square(4));
    PrintShapeDetails::printArea(shapes);
    return 0;
}