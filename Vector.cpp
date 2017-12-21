#ifndef VECTOR
#define VECTOR
class vector {
private:
    double x;
    double y;
    double z;
public:
    vector(double x1, double y1, double z1);
    void setX(double x);
    void setY(double y);
    void setZ(double z);
    double getX( void );
    double getY( void );
    double getZ( void );
    double setMagnitude( double x , double y, double z);
    double getMagnitude( void );
    double calcMagnitude(void);
    vector addition (vector x);
    vector subtraction (vector x);
    vector scaling ( double s);
    //vector multi (vector x);
    double dotProduct(vector x);
    double calcAngle(vector x);
    vector crossProduct(vector x);
    /*double getlength( void );
    double multiplcation( vector x);
    double division (vector x);
    double dotproduct( vector x);
    double crossproduct(vector x);
    double rotation(vector x);*/
};
#endif