/*********************************************************************
	Rhapsody	: 9.0 
	Login		: 20235613
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: System_Context
//!	Generated Date	: Wed, 24, Apr 2024  
	File Path	: DefaultComponent\DefaultConfig\System_Context.h
*********************************************************************/

#ifndef System_Context_H
#define System_Context_H

//## auto_generated
#include <oxf.h>
//## auto_generated
#include <aom.h>
//## auto_generated
#include <event.h>
//## classInstance itsCar
class Car;

//## auto_generated
class CommunicationSystem;

//## auto_generated
class Constraints;

//## auto_generated
class Headlights;

//## auto_generated
class HighResVideoCam;

//## auto_generated
class IB_NVIS;

//## auto_generated
class InfraredFilter;

//## auto_generated
class MonitoringScreen;

//## classInstance itsNVIS
class NVIS;

//## auto_generated
class NaturalEnvironment;

//## auto_generated
class Stakeholder;

//## auto_generated
class Standards;

//## package System_Analysis::System_Context


//## classInstance itsCar
extern Car itsCar;

//## classInstance itsNVIS
extern NVIS itsNVIS;

//## auto_generated
void System_Context_initRelations(void);

//## auto_generated
bool System_Context_startBehavior(void);

//#[ ignore
class System_Context_OMInitializer {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    System_Context_OMInitializer(void);
    
    //## auto_generated
    ~System_Context_OMInitializer(void);
};
//#]

//## event reqNVISon()
class reqNVISon : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedreqNVISon;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    reqNVISon(void);
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedreqNVISon : virtual public AOMEvent {
    DECLARE_META_EVENT(reqNVISon)
};
//#]
#endif // _OMINSTRUMENT

//#[ ignore
extern const IOxfEvent::ID reqNVISon_System_Context_System_Analysis_id;
//#]

//## event evFaultCleared()
class evFaultCleared : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedevFaultCleared;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    evFaultCleared(void);
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedevFaultCleared : virtual public AOMEvent {
    DECLARE_META_EVENT(evFaultCleared)
};
//#]
#endif // _OMINSTRUMENT

//#[ ignore
extern const IOxfEvent::ID evFaultCleared_System_Context_System_Analysis_id;
//#]

//## event reqNVISoff()
class reqNVISoff : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedreqNVISoff;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    reqNVISoff(void);
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedreqNVISoff : virtual public AOMEvent {
    DECLARE_META_EVENT(reqNVISoff)
};
//#]
#endif // _OMINSTRUMENT

//#[ ignore
extern const IOxfEvent::ID reqNVISoff_System_Context_System_Analysis_id;
//#]

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\System_Context.h
*********************************************************************/
