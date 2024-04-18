/*********************************************************************
	Rhapsody	: 9.0 
	Login		: 20235613
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: IB_Cooler
//!	Generated Date	: Thu, 18, Apr 2024  
	File Path	: DefaultComponent\DefaultConfig\IB_Cooler.h
*********************************************************************/

#ifndef IB_Cooler_H
#define IB_Cooler_H

//## auto_generated
#include <oxf.h>
//## auto_generated
#include <aom.h>
//## auto_generated
#include "Logical_Architecture.h"
//## package Logical_Architecture

//## class IB_Cooler
class IB_Cooler {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedIB_Cooler;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    IB_Cooler(void);
    
    //## auto_generated
    virtual ~IB_Cooler(void) = 0;
    
    ////    Operations    ////
    
    //## operation startCooler()
    virtual void startCooler(void) = 0;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedIB_Cooler : virtual public AOMInstance {
    DECLARE_META(IB_Cooler, OMAnimatedIB_Cooler)
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\IB_Cooler.h
*********************************************************************/
