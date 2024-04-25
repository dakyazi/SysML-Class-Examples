/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20235613
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: System_Context
//!	Generated Date	: Wed, 24, Apr 2024  
	File Path	: DefaultComponent\DefaultConfig\System_Context.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "System_Context.h"
//## classInstance itsCar
#include "Car.h"
//## classInstance itsNVIS
#include "NVIS.h"
//## auto_generated
#include "CommunicationSystem.h"
//## auto_generated
#include "Constraints.h"
//## auto_generated
#include "Headlights.h"
//## auto_generated
#include "HighResVideoCam.h"
//## auto_generated
#include "IB_NVIS.h"
//## auto_generated
#include "InfraredFilter.h"
//## auto_generated
#include "MonitoringScreen.h"
//## auto_generated
#include "NaturalEnvironment.h"
//## auto_generated
#include "Stakeholder.h"
//## auto_generated
#include "Standards.h"
//#[ ignore
#define reqNVISon_SERIALIZE OM_NO_OP

#define reqNVISon_UNSERIALIZE OM_NO_OP

#define reqNVISon_CONSTRUCTOR reqNVISon()

#define evFaultCleared_SERIALIZE OM_NO_OP

#define evFaultCleared_UNSERIALIZE OM_NO_OP

#define evFaultCleared_CONSTRUCTOR evFaultCleared()

#define reqNVISoff_SERIALIZE OM_NO_OP

#define reqNVISoff_UNSERIALIZE OM_NO_OP

#define reqNVISoff_CONSTRUCTOR reqNVISoff()
//#]

//## package System_Analysis::System_Context


//## classInstance itsCar
Car itsCar;

//## classInstance itsNVIS
NVIS itsNVIS;

#ifdef _OMINSTRUMENT
static void serializeGlobalVars(AOMSAttributes* /* aomsAttributes */);

static void RenameGlobalInstances(void);

IMPLEMENT_META_PACKAGE(System_Analysis_System_Context, System_Analysis::System_Context)
#endif // _OMINSTRUMENT

void System_Context_initRelations(void) {
    {
        {
            itsCar.setShouldDelete(false);
        }
        {
            itsNVIS.setShouldDelete(false);
        }
    }
    {
        
        itsNVIS.get_port_NVIS()->setItsIB_NVIS(itsCar.get_port_Car()->getItsIB_NVIS());
        
    }
    
    #ifdef _OMINSTRUMENT
    RenameGlobalInstances();
    #endif // _OMINSTRUMENT
}

bool System_Context_startBehavior(void) {
    bool done = true;
    if(done == true)
        {
            done = itsCar.startBehavior();
        }
    if(done == true)
        {
            done = itsNVIS.startBehavior();
        }
    return done;
}

#ifdef _OMINSTRUMENT
static void serializeGlobalVars(AOMSAttributes* /* aomsAttributes */) {
}

static void RenameGlobalInstances(void) {
    OM_SET_INSTANCE_NAME(&itsCar, Car, "itsCar", AOMNoMultiplicity);
    OM_SET_INSTANCE_NAME(&itsNVIS, NVIS, "itsNVIS", AOMNoMultiplicity);
}
#endif // _OMINSTRUMENT

//#[ ignore
System_Context_OMInitializer::System_Context_OMInitializer(void) {
    System_Context_initRelations();
    (void) System_Context_startBehavior();
}

System_Context_OMInitializer::~System_Context_OMInitializer(void) {
}
//#]

//## event reqNVISon()
reqNVISon::reqNVISon(void) : OMEvent() {
    NOTIFY_EVENT_CONSTRUCTOR(reqNVISon)
    setId(reqNVISon_System_Context_System_Analysis_id);
}

//#[ ignore
const IOxfEvent::ID reqNVISon_System_Context_System_Analysis_id(10001);
//#]

IMPLEMENT_META_EVENT_P(reqNVISon, System_Analysis_System_Context, System_Analysis::System_Context, reqNVISon())

//## event evFaultCleared()
evFaultCleared::evFaultCleared(void) : OMEvent() {
    NOTIFY_EVENT_CONSTRUCTOR(evFaultCleared)
    setId(evFaultCleared_System_Context_System_Analysis_id);
}

//#[ ignore
const IOxfEvent::ID evFaultCleared_System_Context_System_Analysis_id(10002);
//#]

IMPLEMENT_META_EVENT_P(evFaultCleared, System_Analysis_System_Context, System_Analysis::System_Context, evFaultCleared())

//## event reqNVISoff()
reqNVISoff::reqNVISoff(void) : OMEvent() {
    NOTIFY_EVENT_CONSTRUCTOR(reqNVISoff)
    setId(reqNVISoff_System_Context_System_Analysis_id);
}

//#[ ignore
const IOxfEvent::ID reqNVISoff_System_Context_System_Analysis_id(10003);
//#]

IMPLEMENT_META_EVENT_P(reqNVISoff, System_Analysis_System_Context, System_Analysis::System_Context, reqNVISoff())

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\System_Context.cpp
*********************************************************************/
