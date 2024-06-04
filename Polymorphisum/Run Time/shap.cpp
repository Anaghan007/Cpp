#include<iostream>
using namespace std;
class shap
{
    public:
    int Hello(int l,int b,int h)
    {
        cout<<"Area of Cuboid is: "<<l*b*h<<endl;
    }
    int Hello(int a)
    {
        cout<<"Area of Cube is: "<<a*a*a<<endl;
    }
    int Hello(int r, int h)
    {
        cout<<"Area of  Right Circular Cylinder is: "<<3.14*r*h<<endl;
    }
    int Hello3(float r, float h)
    {
        cout<<"Area of  Right Circular Cone is: "<<0.33*3.14*r*h<<endl;
    }
    int Hello1(int r)
    {
        cout<<"Area of  Sphere is: "<<1.33*3.14*r*r*r<<endl;
    }
    int Hello2(int r)
    {
        cout<<"Area of  Hemisphere is: "<<0.66*3.14*r*r*r<<endl;
    }
};

int main()
{
    shap t;
    t.Hello(10,20,30);
    t.Hello(10);
    t.Hello(10,20);
    t.Hello3(10,20);
    t.Hello1(10);
    t.Hello2(10);
}