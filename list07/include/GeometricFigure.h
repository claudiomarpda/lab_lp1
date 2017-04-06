#ifndef LIST07_1_GEOMETRICFIGURE_H
#define LIST07_1_GEOMETRICFIGURE_H

#include <string>

using namespace std;

/**
 * This abstract class must not be instantiated.
 */
class GeometricFigure {

private:
    string name;

public:
    GeometricFigure(const string &name);

    /**
     Pure vitual function makes this class abstract.
     Each concrete subtype must implement this method.
    */
    virtual double calculateArea() const = 0 ;

    const string &getName() const;
};


#endif //LIST07_1_GEOMETRICFIGURE_H
