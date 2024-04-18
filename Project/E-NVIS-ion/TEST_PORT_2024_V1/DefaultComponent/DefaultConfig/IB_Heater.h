/*********************************************************************
	Rhapsody	: 9.0 
	Login		: 20235613
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: IB_Heater
//!	Generated Date	: Thu, 18, Apr 2024  
	File Path	: DefaultComponent\DefaultConfig\IB_Heater.h
*********************************************************************/

#ifndef IB_Heater_H
#define IB_Heater_H

//## auto_generated
#include <oxf.h>
//## auto_generated
#include <aom.h>
//## auto_generated
#include "Logical_Architecture.h"
//## package Logical_Architecture

//## class IB_Heater
class IB_Heater {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedIB_Heater;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    IB_Heater(void);
    
    //## auto_generated
    virtual ~IB_Heater(void) = 0;
    
    ////    Operations    ////
    
    //## operation startHeater()
    virtual void startHeater(void) = 0;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedIB_Heater : virtual public AOMInstance {
    DECLARE_META(IB_Heater, OMAnimatedIB_Heater)
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\IB_Heater.h
*********************************************************************/
