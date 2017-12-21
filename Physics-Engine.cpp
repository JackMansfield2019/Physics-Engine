#include <iostream>
#include "Vector.cpp"
#include "Object.cpp"
//#include <cmath>
#include <math.h>
//using namespace std;

vector :: vector(double x2, double y2, double z2){
x = x2;
y =y2;
z =z2;
}
double vector :: getX(){
    return x;
}
double vector :: getY(){
    return y;
}
double vector :: getZ(){
    return z;
}
void vector :: setX(double x1){
    x = x1;
}
void vector :: setY(double y1){
    y =y1;
}
void vector :: setZ( double z1){
    z = z1;
}
vector vector :: addition(vector x1){
    vector ans((this->getX() + x1.getX()),(this->getY() + x1.getY()),(this->getZ() + x1.getZ()));
    return ans;
}
vector vector :: subtraction(vector x1){
    vector ans((this->getX() - x1.getX()),(this->getY() - x1.getY()),(this->getZ() - x1.getZ()));
    return ans;
}
vector vector :: scaling( double s ){
    vector ans((this->getX() * s),(this->getY() * s),(this->getZ()* s));
    return ans;
    }
/*vector vector :: multi(){
    vector ans(this.getX() * s)(this.getY() * s)(this.getZ * S);
}*/
double vector :: dotProduct(vector x){
    return((this->getX() * x.getX()) + (this->getY() * x.getY()) + (this->getZ() * x.getZ()));
}
double vector :: calcMagnitude(void){
        return abs(sqrt( pow(this->getX(),2) + pow(this->getY(),2) + pow(this->getZ(),2)));
}
double vector :: calcAngle(vector x){
    return acos(this->dotProduct(x) / (sqrt(this->calcMagnitude()) * sqrt(x.calcMagnitude())));
}

vector vector :: crossProduct(vector v){
    vector ans((this->getY() * v.getZ()) - (this->getZ() * v.getY()),((this->getZ() * v.getX()) - (this->getX() * v.getZ())),
    ((this->getX() * v.getY()) - (this->getY() * v.getX())));
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
double x = 0;
double y = 0;
double z = 0;
std::cin>> x;
std::cin>> y;
std::cin>> z;
    vector pos(x,y,z);
    std::cout<<"next"<<std::endl;
std::cin>> x;
std::cin>> y;
std::cin>> z;
    vector pos2(x,y,z);
    
    vector& cp = pos.crossProduct(pos2);
   std::cout << "x: " << cp.getX()<<" y: " << cp.getY() << " Z: " << cp.getZ() << std::endl;
   return 0;
}
