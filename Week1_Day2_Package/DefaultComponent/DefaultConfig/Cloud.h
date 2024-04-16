/*********************************************************************
	Rhapsody	: 9.0 
	Login		: 20235613
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Cloud
//!	Generated Date	: Mon, 15, Apr 2024  
	File Path	: DefaultComponent\DefaultConfig\Cloud.h
*********************************************************************/

#ifndef Cloud_H
#define Cloud_H

//## auto_generated
#include <oxf.h>
//## auto_generated
#include <aom.h>
//## auto_generated
#include "Default.h"
//## link itsCar
class Car;

//## package Default

//## class Cloud
class Cloud {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedCloud;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    Cloud(void);
    
    //## auto_generated
    ~Cloud(void);
    
    ////    Additional operations    ////
    
    //## auto_generated
    const Car* getItsCar(void) const;
    
    //## auto_generated
    void setItsCar(Car* const p_Car);

protected :

    //## auto_generated
    void cleanUpRelations(void);
    
    ////    Relations and components    ////

private :

    Car* itsCar;		//## link itsCar
    
    ////    Framework operations    ////

public :

    //## auto_generated
    void __setItsCar(Car* const p_Car);
    
    //## auto_generated
    void _setItsCar(Car* const p_Car);
    
    //## auto_generated
    void _clearItsCar(void);
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedCloud : virtual public AOMInstance {
    DECLARE_META(Cloud, OMAnimatedCloud)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Cloud.h
*********************************************************************/
