/*********************************************************************
	Rhapsody	: 9.0 
	Login		: 20235613
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: runCar
//!	Generated Date	: Tue, 23, Apr 2024  
	File Path	: DefaultComponent\DefaultConfig\runCar.h
*********************************************************************/

#ifndef runCar_H
#define runCar_H

//## auto_generated
#include <oxf.h>
//## auto_generated
#include <aom.h>
//## auto_generated
#include "System_Context.h"
//## package System_Analysis::System_Context

//## class runCar
class runCar {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedrunCar;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    runCar(void);
    
    //## auto_generated
    virtual ~runCar(void) = 0;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedrunCar : virtual public AOMInstance {
    DECLARE_META(runCar, OMAnimatedrunCar)
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\runCar.h
*********************************************************************/
