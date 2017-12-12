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
    vector ans(this.getX() + x1.getX(),this.getY() + x1.getY(),this.getZ() + x1.getZ());
    return ans;
}
vector vector :: subtraction(vector x1){
    vector ans(this.getX() - x1.getX(),this.getY() - x1.getY(),this.getZ() - x1.getZ()));
    return ans;
}
vector vector :: scaling( double s ){
    vector ans(this.getX() * s)(this.getY() * s)(this.getZ * S);
    return ans;
    }
/*vector vector :: multi(){
    vector ans(this.getX() * s)(this.getY() * s)(this.getZ * S);
}*/
double vector :: dotProduct(vector x){
    return(this.getX() * x1.getX()) + (this.getY() * x1.getY()) + (this.getZ() * x1.getZ()));
}
double vector :: calcMagnitude(void){
        return Math.abs(Math.sqrt( Math.pow(this.getX(),2) + Math.pow(this.getY(),2) + Math.pow(this.getZ(),2)));
}
double vector :: calcAngle(vector x){
    return Math.acos(this.dotProduct(vector x) / (Math.sqrt(this.calcMagnitude()) * Math.sqrt(x.calcMagnitude())));
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
