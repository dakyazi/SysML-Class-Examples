/*********************************************************************
	Rhapsody	: 9.0 
	Login		: 20235604
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Stakeholder
//!	Generated Date	: Wed, 17, Apr 2024  
	File Path	: DefaultComponent\DefaultConfig\Stakeholder.h
*********************************************************************/

#ifndef Stakeholder_H
#define Stakeholder_H

//## auto_generated
#include <oxf.h>
//## auto_generated
#include <aom.h>
//## auto_generated
#include "System_Context.h"
//## link itsTMS
class TMS;

//## package System_Analysis::System_Context

//## class Stakeholder
class Stakeholder {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedStakeholder;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    Stakeholder(void);
    
    //## auto_generated
    ~Stakeholder(void);
    
    ////    Additional operations    ////
    
    //## auto_generated
    const TMS* getItsTMS(void) const;
    
    //## auto_generated
    void setItsTMS(TMS* const p_TMS);

protected :

    //## auto_generated
    void cleanUpRelations(void);
    
    ////    Relations and components    ////

private :

    TMS* itsTMS;		//## link itsTMS
    
    ////    Framework operations    ////

public :

    //## auto_generated
    void __setItsTMS(TMS* const p_TMS);
    
    //## auto_generated
    void _setItsTMS(TMS* const p_TMS);
    
    //## auto_generated
    void _clearItsTMS(void);
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedStakeholder : virtual public AOMInstance {
    DECLARE_META(Stakeholder, OMAnimatedStakeholder)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Stakeholder.h
*********************************************************************/
