/*********************************************************************
	Rhapsody	: 9.0 
	Login		: 20235613
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Logical_Architecture
//!	Generated Date	: Thu, 18, Apr 2024  
	File Path	: DefaultComponent\DefaultConfig\Logical_Architecture.h
*********************************************************************/

#ifndef Logical_Architecture_H
#define Logical_Architecture_H

//## auto_generated
#include <oxf.h>
//## auto_generated
#include <aom.h>
//## auto_generated
#include <event.h>
//## auto_generated
class Cooler;

//## classInstance itsHVAC
class HVAC;

//## auto_generated
class Heater;

//## auto_generated
class IB_Cooler;

//## auto_generated
class IB_Heater;

//## classInstance itsTMS
class TMS;

//## package Logical_Architecture


//## classInstance itsHVAC
extern HVAC itsHVAC;

//## classInstance itsTMS
extern TMS itsTMS;

//## auto_generated
void Logical_Architecture_initRelations(void);

//## auto_generated
bool Logical_Architecture_startBehavior(void);

//#[ ignore
class Logical_Architecture_OMInitializer {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    Logical_Architecture_OMInitializer(void);
    
    //## auto_generated
    ~Logical_Architecture_OMInitializer(void);
};
//#]

//## event evTMS_On()
class evTMS_On : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedevTMS_On;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    evTMS_On(void);
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedevTMS_On : virtual public AOMEvent {
    DECLARE_META_EVENT(evTMS_On)
};
//#]
#endif // _OMINSTRUMENT

//#[ ignore
extern const IOxfEvent::ID evTMS_On_Logical_Architecture_id;
//#]

//## event evTMS_Off()
class evTMS_Off : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedevTMS_Off;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    evTMS_Off(void);
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedevTMS_Off : virtual public AOMEvent {
    DECLARE_META_EVENT(evTMS_Off)
};
//#]
#endif // _OMINSTRUMENT

//#[ ignore
extern const IOxfEvent::ID evTMS_Off_Logical_Architecture_id;
//#]

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Logical_Architecture.h
*********************************************************************/
