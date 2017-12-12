#ifndef OBJECT
#define OBJECT

class object{
private:
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
public:
    object(std::string n, double m, double v, double s, double mm, double d, double vol, double x, double y,double z, double f);
    void setMass( double m);
    void setVelocity ( double velocity);
    void setMomentum (double m);
    void setName (std::string n);
    void setDensity (double d);
    void setVolume (double v);
    void setForce (double f);
    void setVF( double vi);
    void setVF(double vf);
    double getMass ( void );
    double getVelocity ( void );
    double getSpeed ( void );
    double getDensity ( void );
    double getVolume ( void );
    double getForce ( void );
    double getMomentum ( void );
    double getVF( void );
    double getVI(void);
    double calcMomentum();
    double calcForce();
    double calcVelocity();
    double calcMass();
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