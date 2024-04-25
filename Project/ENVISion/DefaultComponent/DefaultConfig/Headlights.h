/*********************************************************************
	Rhapsody	: 9.0 
	Login		: 20235613
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Headlights
//!	Generated Date	: Tue, 23, Apr 2024  
	File Path	: DefaultComponent\DefaultConfig\Headlights.h
*********************************************************************/

#ifndef Headlights_H
#define Headlights_H

//## auto_generated
#include <oxf.h>
//## auto_generated
#include <aom.h>
//## auto_generated
#include "System_Context.h"
//## link itsNVIS
class NVIS;

//## package System_Analysis::System_Context

//## class Headlights
class Headlights {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedHeadlights;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    Headlights(void);
    
    //## auto_generated
    ~Headlights(void);
    
    ////    Additional operations    ////
    
    //## auto_generated
    const NVIS* getItsNVIS(void) const;
    
    //## auto_generated
    void setItsNVIS(NVIS* const p_NVIS);

protected :

    //## auto_generated
    void cleanUpRelations(void);
    
    ////    Relations and components    ////

private :

    NVIS* itsNVIS;		//## link itsNVIS
    
    ////    Framework operations    ////

public :

    //## auto_generated
    void __setItsNVIS(NVIS* const p_NVIS);
    
    //## auto_generated
    void _setItsNVIS(NVIS* const p_NVIS);
    
    //## auto_generated
    void _clearItsNVIS(void);
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedHeadlights : virtual public AOMInstance {
    DECLARE_META(Headlights, OMAnimatedHeadlights)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Headlights.h
*********************************************************************/
