/*********************************************************************
	Rhapsody	: 9.0 
	Login		: 20235613
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: InfraredFilter
//!	Generated Date	: Thu, 18, Apr 2024  
	File Path	: DefaultComponent\DefaultConfig\InfraredFilter.h
*********************************************************************/

#ifndef InfraredFilter_H
#define InfraredFilter_H

//## auto_generated
#include <oxf.h>
//## auto_generated
#include <aom.h>
//## auto_generated
#include "System_Context.h"
//## link itsCentralProcessingUnit
class CentralProcessingUnit;

//## link itsNVIS
class NVIS;

//## package System_Analysis::System_Context

//## class InfraredFilter
class InfraredFilter {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedInfraredFilter;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    InfraredFilter(void);
    
    //## auto_generated
    ~InfraredFilter(void);
    
    ////    Additional operations    ////
    
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

    CentralProcessingUnit* itsCentralProcessingUnit;		//## link itsCentralProcessingUnit
    
    NVIS* itsNVIS;		//## link itsNVIS
    
    ////    Framework operations    ////

public :

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
class OMAnimatedInfraredFilter : virtual public AOMInstance {
    DECLARE_META(InfraredFilter, OMAnimatedInfraredFilter)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\InfraredFilter.h
*********************************************************************/
