/*********************************************************************
	Rhapsody	: 9.0 
	Login		: 20235613
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: HighResVideoCam
//!	Generated Date	: Thu, 18, Apr 2024  
	File Path	: DefaultComponent\DefaultConfig\HighResVideoCam.h
*********************************************************************/

#ifndef HighResVideoCam_H
#define HighResVideoCam_H

//## auto_generated
#include <oxf.h>
//## auto_generated
#include <aom.h>
//## auto_generated
#include "System_Context.h"
//## link itsAutoLightControlUnit
class AutoLightControlUnit;

//## link itsCentralProcessingUnit
class CentralProcessingUnit;

//## link itsNVIS
class NVIS;

//## package System_Analysis::System_Context

//## class HighResVideoCam
class HighResVideoCam {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedHighResVideoCam;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    HighResVideoCam(void);
    
    //## auto_generated
    ~HighResVideoCam(void);
    
    ////    Additional operations    ////
    
    //## auto_generated
    const AutoLightControlUnit* getItsAutoLightControlUnit(void) const;
    
    //## auto_generated
    void setItsAutoLightControlUnit(AutoLightControlUnit* const p_AutoLightControlUnit);
    
    //## auto_generated
    const CentralProcessingUnit* getItsCentralProcessingUnit(void) const;
    
    //## auto_generated
    void setItsCentralProcessingUnit(CentralProcessingUnit* const p_CentralProcessingUnit);
    
    //## auto_generated
    const NVIS* getItsNVIS(void) const;
    
    //## auto_generated
    void setItsNVIS(NVIS* const p_NVIS);

protected :

    //## auto_generated
    void cleanUpRelations(void);
    
    ////    Relations and components    ////

private :

    AutoLightControlUnit* itsAutoLightControlUnit;		//## link itsAutoLightControlUnit
    
    CentralProcessingUnit* itsCentralProcessingUnit;		//## link itsCentralProcessingUnit
    
    NVIS* itsNVIS;		//## link itsNVIS
    
    ////    Framework operations    ////

public :

    //## auto_generated
    void __setItsAutoLightControlUnit(AutoLightControlUnit* const p_AutoLightControlUnit);
    
    //## auto_generated
    void _setItsAutoLightControlUnit(AutoLightControlUnit* const p_AutoLightControlUnit);
    
    //## auto_generated
    void _clearItsAutoLightControlUnit(void);
    
    //## auto_generated
    void __setItsCentralProcessingUnit(CentralProcessingUnit* const p_CentralProcessingUnit);
    
    //## auto_generated
    void _setItsCentralProcessingUnit(CentralProcessingUnit* const p_CentralProcessingUnit);
    
    //## auto_generated
    void _clearItsCentralProcessingUnit(void);
    
    //## auto_generated
    void __setItsNVIS(NVIS* const p_NVIS);
    
    //## auto_generated
    void _setItsNVIS(NVIS* const p_NVIS);
    
    //## auto_generated
    void _clearItsNVIS(void);
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedHighResVideoCam : virtual public AOMInstance {
    DECLARE_META(HighResVideoCam, OMAnimatedHighResVideoCam)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\HighResVideoCam.h
*********************************************************************/
