#include <iostream>

using namespace std;

class vector{
    public:
    double x;
    double y;
    double z;
    vector(double x1, double y1, double z1);
    void setx(double x);
    void sety(double y);
    void setz(double z);
    double getx( void );
    double gety( void );
    double getz( void );
    double setmagnitude( double x );
    void getmagnitude( void );
    void setlength(double x);
    /*double getlength( void );
    double multiplcation( vector x);
    double division (vector x);
    double addition (vector x);
    double subtraction (vector x);
    double dotproduct( vector x);
    double crossproduct(vector x);
    double rotation(vector x);*/
};
vector :: vector(double x1, double y1, double z1){
x = x1;
y =y1;
z =z1;
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


class object{
    public:
    string name;
    double mass;
    double velocity;
    double vi;
    double vf;
    double speed;
    double momentum;
    double density;
    double volume;
    double force;
    object(string n, double m, double v, double s, double mm, double d, double vol, double x, double y,double z, double f);
    void setmass( double m);
    void setvelocity ( double velocity);
    void setmomentum (double m);
    void setname (string n);
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
object :: object(string n, double m, double v, double s, double mm, double d, double vol, double x, double y, double z,double f){
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
while(true){



}
   cout << "Hello World" << endl;
   return 0;
}
