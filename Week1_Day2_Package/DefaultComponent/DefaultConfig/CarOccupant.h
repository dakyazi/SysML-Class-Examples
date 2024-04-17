/*********************************************************************
	Rhapsody	: 9.0 
	Login		: 20235604
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: CarOccupant
//!	Generated Date	: Wed, 17, Apr 2024  
	File Path	: DefaultComponent\DefaultConfig\CarOccupant.h
*********************************************************************/

#ifndef CarOccupant_H
#define CarOccupant_H

//## auto_generated
#include <oxf.h>
//## auto_generated
#include <aom.h>
//## auto_generated
#include "Temperature_UC.h"
//## link itsTMS
class TMS;

//## package System_Analysis::Use_Cases::Temperature_UC

//## actor CarOccupant
class CarOccupant {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedCarOccupant;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    CarOccupant(void);
    
    //## auto_generated
    ~CarOccupant(void);
    
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
class OMAnimatedCarOccupant : virtual public AOMInstance {
    DECLARE_META(CarOccupant, OMAnimatedCarOccupant)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\CarOccupant.h
*********************************************************************/
