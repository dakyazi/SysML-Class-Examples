/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20235604
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: System_Context
//!	Generated Date	: Wed, 17, Apr 2024  
	File Path	: DefaultComponent\DefaultConfig\System_Context.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "System_Context.h"
//## auto_generated
#include "CommunicationSystem.h"
//## auto_generated
#include "Constraints.h"
//## auto_generated
#include "CoolingSystem.h"
//## auto_generated
#include "HeatingSystem.h"
//## auto_generated
#include "NaturalEnvironment.h"
//## auto_generated
#include "PowerSource.h"
//## auto_generated
#include "PresenceSensor.h"
//## auto_generated
#include "Stakeholder.h"
//## auto_generated
#include "Standard.h"
//## auto_generated
#include "TempSensor.h"
//## auto_generated
#include "TMS.h"
//#[ ignore
#define reqPowerOn_SERIALIZE OM_NO_OP

#define reqPowerOn_UNSERIALIZE OM_NO_OP

#define reqPowerOn_CONSTRUCTOR reqPowerOn()

#define reqPowerOff_SERIALIZE OM_NO_OP

#define reqPowerOff_UNSERIALIZE OM_NO_OP

#define reqPowerOff_CONSTRUCTOR reqPowerOff()

#define evFaultCleared_SERIALIZE OM_NO_OP

#define evFaultCleared_UNSERIALIZE OM_NO_OP

#define evFaultCleared_CONSTRUCTOR evFaultCleared()

#define reqLpowPower_SERIALIZE OM_NO_OP

#define reqLpowPower_UNSERIALIZE OM_NO_OP

#define reqLpowPower_CONSTRUCTOR reqLpowPower()

#define reqLowPower_SERIALIZE OM_NO_OP

#define reqLowPower_UNSERIALIZE OM_NO_OP

#define reqLowPower_CONSTRUCTOR reqLowPower()

#define reqLPOwer_SERIALIZE OM_NO_OP

#define reqLPOwer_UNSERIALIZE OM_NO_OP

#define reqLPOwer_CONSTRUCTOR reqLPOwer()

#define reqHighPower_SERIALIZE OM_NO_OP

#define reqHighPower_UNSERIALIZE OM_NO_OP

#define reqHighPower_CONSTRUCTOR reqHighPower()

#define reqFullPower_SERIALIZE OM_NO_OP

#define reqFullPower_UNSERIALIZE OM_NO_OP

#define reqFullPower_CONSTRUCTOR reqFullPower()
//#]

//## package System_Analysis::System_Context


#ifdef _OMINSTRUMENT
static void serializeGlobalVars(AOMSAttributes* /* aomsAttributes */);

IMPLEMENT_META_PACKAGE(System_Analysis_System_Context, System_Analysis::System_Context)

static void serializeGlobalVars(AOMSAttributes* /* aomsAttributes */) {
}
#endif // _OMINSTRUMENT

//## event reqPowerOn()
reqPowerOn::reqPowerOn(void) : OMEvent() {
    NOTIFY_EVENT_CONSTRUCTOR(reqPowerOn)
    setId(reqPowerOn_System_Context_System_Analysis_id);
}

//#[ ignore
const IOxfEvent::ID reqPowerOn_System_Context_System_Analysis_id(10001);
//#]

IMPLEMENT_META_EVENT_P(reqPowerOn, System_Analysis_System_Context, System_Analysis::System_Context, reqPowerOn())

//## event reqPowerOff()
reqPowerOff::reqPowerOff(void) : OMEvent() {
    NOTIFY_EVENT_CONSTRUCTOR(reqPowerOff)
    setId(reqPowerOff_System_Context_System_Analysis_id);
}

//#[ ignore
const IOxfEvent::ID reqPowerOff_System_Context_System_Analysis_id(10002);
//#]

IMPLEMENT_META_EVENT_P(reqPowerOff, System_Analysis_System_Context, System_Analysis::System_Context, reqPowerOff())

//## event evFaultCleared()
evFaultCleared::evFaultCleared(void) : OMEvent() {
    NOTIFY_EVENT_CONSTRUCTOR(evFaultCleared)
    setId(evFaultCleared_System_Context_System_Analysis_id);
}

//#[ ignore
const IOxfEvent::ID evFaultCleared_System_Context_System_Analysis_id(10003);
//#]

IMPLEMENT_META_EVENT_P(evFaultCleared, System_Analysis_System_Context, System_Analysis::System_Context, evFaultCleared())

//## event reqLpowPower()
reqLpowPower::reqLpowPower(void) : OMEvent() {
    NOTIFY_EVENT_CONSTRUCTOR(reqLpowPower)
    setId(reqLpowPower_System_Context_System_Analysis_id);
}

//#[ ignore
const IOxfEvent::ID reqLpowPower_System_Context_System_Analysis_id(10004);
//#]

IMPLEMENT_META_EVENT_P(reqLpowPower, System_Analysis_System_Context, System_Analysis::System_Context, reqLpowPower())

//## event reqLowPower()
reqLowPower::reqLowPower(void) : OMEvent() {
    NOTIFY_EVENT_CONSTRUCTOR(reqLowPower)
    setId(reqLowPower_System_Context_System_Analysis_id);
}

//#[ ignore
const IOxfEvent::ID reqLowPower_System_Context_System_Analysis_id(10005);
//#]

IMPLEMENT_META_EVENT_P(reqLowPower, System_Analysis_System_Context, System_Analysis::System_Context, reqLowPower())

//## event reqLPOwer()
reqLPOwer::reqLPOwer(void) : OMEvent() {
    NOTIFY_EVENT_CONSTRUCTOR(reqLPOwer)
    setId(reqLPOwer_System_Context_System_Analysis_id);
}

//#[ ignore
const IOxfEvent::ID reqLPOwer_System_Context_System_Analysis_id(10006);
//#]

IMPLEMENT_META_EVENT_P(reqLPOwer, System_Analysis_System_Context, System_Analysis::System_Context, reqLPOwer())

//## event reqHighPower()
reqHighPower::reqHighPower(void) : OMEvent() {
    NOTIFY_EVENT_CONSTRUCTOR(reqHighPower)
    setId(reqHighPower_System_Context_System_Analysis_id);
}

//#[ ignore
const IOxfEvent::ID reqHighPower_System_Context_System_Analysis_id(10007);
//#]

IMPLEMENT_META_EVENT_P(reqHighPower, System_Analysis_System_Context, System_Analysis::System_Context, reqHighPower())

//## event reqFullPower()
reqFullPower::reqFullPower(void) : OMEvent() {
    NOTIFY_EVENT_CONSTRUCTOR(reqFullPower)
    setId(reqFullPower_System_Context_System_Analysis_id);
}

//#[ ignore
const IOxfEvent::ID reqFullPower_System_Context_System_Analysis_id(10008);
//#]

IMPLEMENT_META_EVENT_P(reqFullPower, System_Analysis_System_Context, System_Analysis::System_Context, reqFullPower())

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\System_Context.cpp
*********************************************************************/
