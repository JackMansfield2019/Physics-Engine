#ifndef OBJECT
#define OBJECT

class object{
    public:
    std::string name;
    double mass;
    double velocity;
    double vi;
    double vf;
    double speed;
    double momentum;
    double density;
    double volume;
    double force;
    object(std::string n, double m, double v, double s, double mm, double d, double vol, double x, double y,double z, double f);
    void setmass( double m);
    void setvelocity ( double velocity);
    void setmomentum (double m);
    void setname (std::string n);
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
#endif