#include <iostream>
#include "Vector.cpp"
#include "Object.cpp"
//using namespace std;

vector :: vector(double x2, double y2, double z2){
x = x2;
y =y2;
z =z2;
}
double vector :: getx(){
    return x;
}
double vector :: gety(){
    return y;
}
double vector :: getz(){
    return z;
}
void vector :: setx(double x1){
    x = x1;
}
void vector :: sety(double y1){
    y =y1;
}
void vector :: setz( double z1){
    z = z1;
}

vector vector :: addition(vector x){
    vector ans(this.getx() + x.getx(),this.gety() + x.gety(),this.getz() + x.getz());
    return ans;
}
vector vector :: subtraction(vector x){
    vector ans(this.getx() - x.getx(),this.gety() - x.gety(),this.getz() - x.getz()));
    return ans;
}


object :: object(std::string n, double m, double v, double s, double mm, double d, double vol, double x, double y,double z, double f){
    name = n;
    mass = m;
    density = d;
    velocity = v;
    momentum = mm;
    force = f;
    speed = s;
    volume = vol;
    vector pos(x,y,z);
}


int main()
{
    
double map [100][100][100];
   std::cout << "this will producduce and error"<<std::endl;
   return 0;
}
