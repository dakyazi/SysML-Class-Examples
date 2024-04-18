/*********************************************************************
	Rhapsody	: 9.0 
	Login		: 20235613
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: CentralProcessingUnit
//!	Generated Date	: Thu, 18, Apr 2024  
	File Path	: DefaultComponent\DefaultConfig\CentralProcessingUnit.h
*********************************************************************/

#ifndef CentralProcessingUnit_H
#define CentralProcessingUnit_H

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

//## link itsInfraredFilter
class InfraredFilter;

//## link itsNVIS
class NVIS;

//## package System_Analysis::System_Context

//## class CentralProcessingUnit
class CentralProcessingUnit {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedCentralProcessingUnit;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    CentralProcessingUnit(void);
    
    //## auto_generated
    ~CentralProcessingUnit(void);
    
    ////    Additional operations    ////
    
    //## auto_generated
    const Headlights* getItsHeadlights(void) const;
    
    //## auto_generated
    void setItsHeadlights(Headlights* const p_Headlights);
    
    //## auto_generated
    const Headlights* getItsHeadlights_1(void) const;
    
    //## auto_generated
    void setItsHeadlights_1(Headlights* const p_Headlights);
    
    //## auto_generated
    const HighResVideoCam* getItsHighResVideoCam(void) const;
    
    //## auto_generated
    void setItsHighResVideoCam(HighResVideoCam* const p_HighResVideoCam);
    
    //## auto_generated
    const InfraredFilter* getItsInfraredFilter(void) const;
    
    //## auto_generated
    void setItsInfraredFilter(InfraredFilter* const p_InfraredFilter);
    
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
    
    Headlights* itsHeadlights_1;		//## link itsHeadlights_1
    
    HighResVideoCam* itsHighResVideoCam;		//## link itsHighResVideoCam
    
    InfraredFilter* itsInfraredFilter;		//## link itsInfraredFilter
    
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
    void __setItsHeadlights_1(Headlights* const p_Headlights);
    
    //## auto_generated
    void _setItsHeadlights_1(Headlights* const p_Headlights);
    
    //## auto_generated
    void _clearItsHeadlights_1(void);
    
    //## auto_generated
    void __setItsHighResVideoCam(HighResVideoCam* const p_HighResVideoCam);
    
    //## auto_generated
    void _setItsHighResVideoCam(HighResVideoCam* const p_HighResVideoCam);
    
    //## auto_generated
    void _clearItsHighResVideoCam(void);
    
    //## auto_generated
    void __setItsInfraredFilter(InfraredFilter* const p_InfraredFilter);
    
    //## auto_generated
    void _setItsInfraredFilter(InfraredFilter* const p_InfraredFilter);
    
    //## auto_generated
    void _clearItsInfraredFilter(void);
    
    //## auto_generated
    void __setItsNVIS(NVIS* const p_NVIS);
    
    //## auto_generated
    void _setItsNVIS(NVIS* const p_NVIS);
    
    //## auto_generated
    void _clearItsNVIS(void);
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedCentralProcessingUnit : virtual public AOMInstance {
    DECLARE_META(CentralProcessingUnit, OMAnimatedCentralProcessingUnit)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\CentralProcessingUnit.h
*********************************************************************/
