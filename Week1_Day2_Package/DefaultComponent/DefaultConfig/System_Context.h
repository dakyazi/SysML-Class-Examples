/*********************************************************************
	Rhapsody	: 9.0 
	Login		: 20235613
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: System_Context
//!	Generated Date	: Mon, 15, Apr 2024  
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
//## auto_generated
class CommunicationSystem;

//## auto_generated
class Constraints;

//## auto_generated
class CoolingSystem;

//## auto_generated
class HeatingSystem;

//## auto_generated
class NaturalEnvironment;

//## auto_generated
class PowerSource;

//## auto_generated
class PresenceSensor;

//## auto_generated
class Stakeholder;

//## auto_generated
class Standard;

//## auto_generated
class TMS;

//## auto_generated
class TempSensor;

//## package System_Analysis::System_Context


//#[ ignore
// We create the System context showing in what context the system TMS (Temperature Monitoring System) is to be built.
//#]


//## event reqPowerOn()
class reqPowerOn : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedreqPowerOn;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    reqPowerOn(void);
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedreqPowerOn : virtual public AOMEvent {
    DECLARE_META_EVENT(reqPowerOn)
};
//#]
#endif // _OMINSTRUMENT

//#[ ignore
extern const IOxfEvent::ID reqPowerOn_System_Context_System_Analysis_id;
//#]

//## event reqPowerOff()
class reqPowerOff : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedreqPowerOff;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    reqPowerOff(void);
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedreqPowerOff : virtual public AOMEvent {
    DECLARE_META_EVENT(reqPowerOff)
};
//#]
#endif // _OMINSTRUMENT

//#[ ignore
extern const IOxfEvent::ID reqPowerOff_System_Context_System_Analysis_id;
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

//## event reqLpowPower()
class reqLpowPower : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedreqLpowPower;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    reqLpowPower(void);
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedreqLpowPower : virtual public AOMEvent {
    DECLARE_META_EVENT(reqLpowPower)
};
//#]
#endif // _OMINSTRUMENT

//#[ ignore
extern const IOxfEvent::ID reqLpowPower_System_Context_System_Analysis_id;
//#]

//## event reqLowPower()
class reqLowPower : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedreqLowPower;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    reqLowPower(void);
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedreqLowPower : virtual public AOMEvent {
    DECLARE_META_EVENT(reqLowPower)
};
//#]
#endif // _OMINSTRUMENT

//#[ ignore
extern const IOxfEvent::ID reqLowPower_System_Context_System_Analysis_id;
//#]

//## event reqLPOwer()
class reqLPOwer : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedreqLPOwer;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    reqLPOwer(void);
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedreqLPOwer : virtual public AOMEvent {
    DECLARE_META_EVENT(reqLPOwer)
};
//#]
#endif // _OMINSTRUMENT

//#[ ignore
extern const IOxfEvent::ID reqLPOwer_System_Context_System_Analysis_id;
//#]

//## event reqHighPower()
class reqHighPower : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedreqHighPower;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    reqHighPower(void);
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedreqHighPower : virtual public AOMEvent {
    DECLARE_META_EVENT(reqHighPower)
};
//#]
#endif // _OMINSTRUMENT

//#[ ignore
extern const IOxfEvent::ID reqHighPower_System_Context_System_Analysis_id;
//#]

//## event reqFullPower()
class reqFullPower : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedreqFullPower;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    reqFullPower(void);
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedreqFullPower : virtual public AOMEvent {
    DECLARE_META_EVENT(reqFullPower)
};
//#]
#endif // _OMINSTRUMENT

//#[ ignore
extern const IOxfEvent::ID reqFullPower_System_Context_System_Analysis_id;
//#]

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\System_Context.h
*********************************************************************/
