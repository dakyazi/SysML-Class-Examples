/*********************************************************************
	Rhapsody	: 9.0 
	Login		: 20235613
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Driver
//!	Generated Date	: Tue, 23, Apr 2024  
	File Path	: DefaultComponent\DefaultConfig\Driver.h
*********************************************************************/

#ifndef Driver_H
#define Driver_H

//## auto_generated
#include <oxf.h>
//## auto_generated
#include <aom.h>
//## auto_generated
#include "NVIS_Use_Case.h"
//## package System_Analysis::Use_Cases::NVIS_Use_Case

//## actor Driver
class Driver {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedDriver;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    Driver(void);
    
    //## auto_generated
    ~Driver(void);
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedDriver : virtual public AOMInstance {
    DECLARE_META(Driver, OMAnimatedDriver)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Driver.h
*********************************************************************/
