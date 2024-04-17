/*********************************************************************
	Rhapsody	: 9.0 
	Login		: 20235604
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Car
//!	Generated Date	: Wed, 17, Apr 2024  
	File Path	: DefaultComponent\DefaultConfig\Car.h
*********************************************************************/

#ifndef Car_H
#define Car_H

//## auto_generated
#include <oxf.h>
//## auto_generated
#include <aom.h>
//## auto_generated
#include "Default.h"
//## classInstance itsEngine
#include "Engine.h"
//## dependency Cloud
class Cloud;

//## package Default

//## class Car
class Car {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedCar;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    Car(void);
    
    //## auto_generated
    virtual ~Car(void);
    
    ////    Operations    ////
    
    //## operation Drive()
    virtual void Drive(void);
    
    ////    Additional operations    ////
    
    //## auto_generated
    const int getSpeed(void) const;
    
    //## auto_generated
    void setSpeed(const int p_Speed);
    
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

    int Speed;		//## attribute Speed
    
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

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedCar : virtual public AOMInstance {
    DECLARE_META(Car, OMAnimatedCar)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeAttributes(AOMSAttributes* aomsAttributes) const;
    
    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Car.h
*********************************************************************/
