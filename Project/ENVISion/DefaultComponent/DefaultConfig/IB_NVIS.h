/*********************************************************************
	Rhapsody	: 9.0 
	Login		: 20235613
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: IB_NVIS
//!	Generated Date	: Wed, 24, Apr 2024  
	File Path	: DefaultComponent\DefaultConfig\IB_NVIS.h
*********************************************************************/

#ifndef IB_NVIS_H
#define IB_NVIS_H

//## auto_generated
#include <oxf.h>
//## auto_generated
#include <aom.h>
//## auto_generated
#include "System_Context.h"
//## package System_Analysis::System_Context

//## class IB_NVIS
class IB_NVIS {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedIB_NVIS;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    IB_NVIS(void);
    
    //## auto_generated
    virtual ~IB_NVIS(void) = 0;
    
    ////    Operations    ////
    
    //## operation runCar()
    virtual double runCar(void) = 0;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedIB_NVIS : virtual public AOMInstance {
    DECLARE_META(IB_NVIS, OMAnimatedIB_NVIS)
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\IB_NVIS.h
*********************************************************************/
