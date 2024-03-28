/*********************************************************************
	Rhapsody	: 9.0 
	Login		: 20235604
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Car
//!	Generated Date	: Tue, 26, Mar 2024  
	File Path	: DefaultComponent\DefaultConfig\Car.h
*********************************************************************/

#ifndef Car_H
#define Car_H

//## auto_generated
#include <oxf.h>
//## classInstance itsEngine
#include "Engine.h"
//## link itsCloud
class Cloud;

//## package Default

//## class Car
class Car {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    Car(void);
    
    //## auto_generated
    ~Car(void);
    
    ////    Additional operations    ////
    
    //## auto_generated
    const int getSpeed(void) const;
    
    //## auto_generated
    void setSpeed(const int p_speed);
    
    //## auto_generated
    const Cloud* getItsCloud(void) const;
    
    //## auto_generated
    void setItsCloud(Cloud* const p_Cloud);
    
    //## auto_generated
    const Engine* getItsEngine(void) const;

protected :

    //## auto_generated
    void cleanUpRelations(void);
    
    ////    Attributes    ////

private :

    int speed;		//## attribute speed
    
    ////    Relations and components    ////
    
    Cloud* itsCloud;		//## link itsCloud
    
    Engine itsEngine;		//## classInstance itsEngine
    
    ////    Framework operations    ////

public :

    //## auto_generated
    void __setItsCloud(Cloud* const p_Cloud);
    
    //## auto_generated
    void _setItsCloud(Cloud* const p_Cloud);
    
    //## auto_generated
    void _clearItsCloud(void);
};

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Car.h
*********************************************************************/
