#ifndef VECTOR
#define VECTOR
class vector {
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
    double setmagnitude( double x , double y, double z);
    double getmagnitude( void );
    vector addition (vector x);
    vector subtraction (vector x);
    /*double getlength( void );
    double multiplcation( vector x);
    double division (vector x);
    double addition (vector x);
    double subtraction (vector x);
    double dotproduct( vector x);
    double crossproduct(vector x);
    double rotation(vector x);*/
};
#endif