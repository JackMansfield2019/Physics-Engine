#include <iostream>

using namespace std;

class point{
    public:
    double x;
    double y;
    double z;
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

class object{
    public:
    String name;
    double mass;
    double velocity;
    double vi;
    double vf;
    double speed;
    double momentum;
    double density;
    double volume;
    double force;
    void setmass( double m);
    void setvelocity ( double velocity);
    void setmomentum (double m;
    void setname (String n);
    void setdensity (double d);
    void setvolume (double v);
    void setforce (double f);
    void setvi( double vi);
    void setvf(double vf);
    double getmass ( void );
    double getvelocity ( void );
    double getspeed ( void );
    double getdensity ( void );
    double getvolume ( void );
    double getforce ( void );
    double getmomentum ( void );
    double getvf( void );
    double getvi(void);
    double calcmomentum();
    double calcforce();
    double calcvelocity();
    double calcmass();
    
    

};
object :: object(String n, double m, double v, double s, double mm, double d, double v, double x, double y, double f){
    name = n;
    mass = m;
    density = d;
    volume = v
    point pos(x,y);

}

int main()
{
double map = [100][100][100];
while(true){



}
   cout << "Hello World" << endl;
   return 0;
}
