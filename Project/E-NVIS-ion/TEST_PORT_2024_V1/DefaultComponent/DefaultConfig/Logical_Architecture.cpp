/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20235613
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Logical_Architecture
//!	Generated Date	: Thu, 18, Apr 2024  
	File Path	: DefaultComponent\DefaultConfig\Logical_Architecture.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "Logical_Architecture.h"
//## classInstance itsHVAC
#include "HVAC.h"
//## classInstance itsTMS
#include "TMS.h"
//## auto_generated
#include "Cooler.h"
//## auto_generated
#include "Heater.h"
//## auto_generated
#include "IB_Cooler.h"
//## auto_generated
#include "IB_Heater.h"
//#[ ignore
#define evTMS_On_SERIALIZE OM_NO_OP

#define evTMS_On_UNSERIALIZE OM_NO_OP

#define evTMS_On_CONSTRUCTOR evTMS_On()

#define evTMS_Off_SERIALIZE OM_NO_OP

#define evTMS_Off_UNSERIALIZE OM_NO_OP

#define evTMS_Off_CONSTRUCTOR evTMS_Off()
//#]

//## package Logical_Architecture


//## classInstance itsHVAC
HVAC itsHVAC;

//## classInstance itsTMS
TMS itsTMS;

#ifdef _OMINSTRUMENT
static void serializeGlobalVars(AOMSAttributes* /* aomsAttributes */);

static void RenameGlobalInstances(void);

IMPLEMENT_META_PACKAGE(Logical_Architecture, Logical_Architecture)
#endif // _OMINSTRUMENT

void Logical_Architecture_initRelations(void) {
    {
        {
            itsHVAC.setShouldDelete(false);
        }
        {
            itsTMS.setShouldDelete(false);
        }
    }
    {
        
        itsTMS.get_p_TMS()->setItsIB_Heater(itsHVAC.get_p_HVAC()->getItsIB_Heater());
        
        itsTMS.get_p_TMS()->setItsIB_Cooler(itsHVAC.get_p_HVAC()->getItsIB_Cooler());
        
    }
    
    #ifdef _OMINSTRUMENT
    RenameGlobalInstances();
    #endif // _OMINSTRUMENT
}

bool Logical_Architecture_startBehavior(void) {
    bool done = true;
    if(done == true)
        {
            done = itsHVAC.startBehavior();
        }
    if(done == true)
        {
            done = itsTMS.startBehavior();
        }
    return done;
}

#ifdef _OMINSTRUMENT
static void serializeGlobalVars(AOMSAttributes* /* aomsAttributes */) {
}

static void RenameGlobalInstances(void) {
    OM_SET_INSTANCE_NAME(&itsHVAC, HVAC, "itsHVAC", AOMNoMultiplicity);
    OM_SET_INSTANCE_NAME(&itsTMS, TMS, "itsTMS", AOMNoMultiplicity);
}
#endif // _OMINSTRUMENT

//#[ ignore
Logical_Architecture_OMInitializer::Logical_Architecture_OMInitializer(void) {
    Logical_Architecture_initRelations();
    (void) Logical_Architecture_startBehavior();
}

Logical_Architecture_OMInitializer::~Logical_Architecture_OMInitializer(void) {
}
//#]

//## event evTMS_On()
evTMS_On::evTMS_On(void) : OMEvent() {
    NOTIFY_EVENT_CONSTRUCTOR(evTMS_On)
    setId(evTMS_On_Logical_Architecture_id);
}

//#[ ignore
const IOxfEvent::ID evTMS_On_Logical_Architecture_id(16001);
//#]

IMPLEMENT_META_EVENT_P(evTMS_On, Logical_Architecture, Logical_Architecture, evTMS_On())

//## event evTMS_Off()
evTMS_Off::evTMS_Off(void) : OMEvent() {
    NOTIFY_EVENT_CONSTRUCTOR(evTMS_Off)
    setId(evTMS_Off_Logical_Architecture_id);
}

//#[ ignore
const IOxfEvent::ID evTMS_Off_Logical_Architecture_id(16002);
//#]

IMPLEMENT_META_EVENT_P(evTMS_Off, Logical_Architecture, Logical_Architecture, evTMS_Off())

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Logical_Architecture.cpp
*********************************************************************/
