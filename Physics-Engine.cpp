#include <iostream>

using namespace std;

class point{
    public:
    double x;
    double y;
    void setx(double x);
    void sety(double y);
    void setz(double z);
    double getx( void );
    double gety( void );
    double getz( void );
};
point :: point(double x1, double y1){
x = x1;
y =y1;
}
double point :: getx(){
    return x;
}
double point :: gety(){
    return y;
}
double point :: getz(){
    return z;
}
void point :: setx(double x1){
    x = x1;
}
void point :: sety(double y1){
    y =y1;
}

class objects{
    public:
    String name;
    double mass;
    double velocity;
    double speed;
    double momentum;
    double density;
    double volume;
    double force;
};
objects :: objects(String n, double m, double v, double s, double mm, double d, double v, double x, double y, double f){
    name = n;
    mass = m;
    density = d;
    volume = v;
    point pos(x,y);

}

int main()
{
double map = [100][100];
while(true){



}
   cout << "Hello World" << endl;
   return 0;
}