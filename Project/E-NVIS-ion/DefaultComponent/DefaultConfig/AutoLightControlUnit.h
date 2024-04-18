/*********************************************************************
	Rhapsody	: 9.0 
	Login		: 20235613
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: AutoLightControlUnit
//!	Generated Date	: Thu, 18, Apr 2024  
	File Path	: DefaultComponent\DefaultConfig\AutoLightControlUnit.h
*********************************************************************/

#ifndef AutoLightControlUnit_H
#define AutoLightControlUnit_H

//## auto_generated
#include <oxf.h>
//## auto_generated
#include <aom.h>
//## auto_generated
#include "System_Context.h"
//## link itsHeadlights
class Headlights;

//## link itsHighResVideoCam
class HighResVideoCam;

//## link itsNVIS
class NVIS;

//## package System_Analysis::System_Context

//## class AutoLightControlUnit
class AutoLightControlUnit {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedAutoLightControlUnit;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    AutoLightControlUnit(void);
    
    //## auto_generated
    ~AutoLightControlUnit(void);
    
    ////    Additional operations    ////
    
    //## auto_generated
    const Headlights* getItsHeadlights(void) const;
    
    //## auto_generated
    void setItsHeadlights(Headlights* const p_Headlights);
    
    //## auto_generated
    const HighResVideoCam* getItsHighResVideoCam(void) const;
    
    //## auto_generated
    void setItsHighResVideoCam(HighResVideoCam* const p_HighResVideoCam);
    
    //## auto_generated
    const NVIS* getItsNVIS(void) const;
    
    //## auto_generated
    void setItsNVIS(NVIS* const p_NVIS);

protected :

    //## auto_generated
    void cleanUpRelations(void);
    
    ////    Relations and components    ////

private :

    Headlights* itsHeadlights;		//## link itsHeadlights
    
    HighResVideoCam* itsHighResVideoCam;		//## link itsHighResVideoCam
    
    NVIS* itsNVIS;		//## link itsNVIS
    
    ////    Framework operations    ////

public :

    //## auto_generated
    void __setItsHeadlights(Headlights* const p_Headlights);
    
    //## auto_generated
    void _setItsHeadlights(Headlights* const p_Headlights);
    
    //## auto_generated
    void _clearItsHeadlights(void);
    
    //## auto_generated
    void __setItsHighResVideoCam(HighResVideoCam* const p_HighResVideoCam);
    
    //## auto_generated
    void _setItsHighResVideoCam(HighResVideoCam* const p_HighResVideoCam);
    
    //## auto_generated
    void _clearItsHighResVideoCam(void);
    
    //## auto_generated
    void __setItsNVIS(NVIS* const p_NVIS);
    
    //## auto_generated
    void _setItsNVIS(NVIS* const p_NVIS);
    
    //## auto_generated
    void _clearItsNVIS(void);
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedAutoLightControlUnit : virtual public AOMInstance {
    DECLARE_META(AutoLightControlUnit, OMAnimatedAutoLightControlUnit)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\AutoLightControlUnit.h
*********************************************************************/
