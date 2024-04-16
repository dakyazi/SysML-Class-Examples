/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20235613
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: TMS_Operating_Environment
//!	Generated Date	: Mon, 15, Apr 2024  
	File Path	: DefaultComponent\DefaultConfig\TMS_Operating_Environment.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "TMS_Operating_Environment.h"
//## classInstance itsCommunicationSystem
#include "CommunicationSystem.h"
//## classInstance itsCoolingSystem
#include "CoolingSystem.h"
//## classInstance itsHeatingSystem
#include "HeatingSystem.h"
//## classInstance itsNaturalEnvironment
#include "NaturalEnvironment.h"
//## classInstance itsPresenceSensor
#include "PresenceSensor.h"
//## classInstance itsTempSensor
#include "TempSensor.h"
//## classInstance itsTMS
#include "TMS.h"
//## package System_Analysis::TMS_Operating_Environment


//## classInstance itsCommunicationSystem
CommunicationSystem itsCommunicationSystem;

//## classInstance itsCoolingSystem
CoolingSystem itsCoolingSystem;

//## classInstance itsHeatingSystem
HeatingSystem itsHeatingSystem;

//## classInstance itsNaturalEnvironment
NaturalEnvironment itsNaturalEnvironment;

//## classInstance itsPresenceSensor
PresenceSensor itsPresenceSensor;

//## classInstance itsTMS
TMS itsTMS;

//## classInstance itsTempSensor
TempSensor itsTempSensor;

#ifdef _OMINSTRUMENT
static void serializeGlobalVars(AOMSAttributes* /* aomsAttributes */);

static void RenameGlobalInstances(void);

IMPLEMENT_META_PACKAGE(System_Analysis_TMS_Operating_Environment, System_Analysis::TMS_Operating_Environment)
#endif // _OMINSTRUMENT

void TMS_Operating_Environment_initRelations(void) {
    
    #ifdef _OMINSTRUMENT
    RenameGlobalInstances();
    #endif // _OMINSTRUMENT
}

#ifdef _OMINSTRUMENT
static void serializeGlobalVars(AOMSAttributes* /* aomsAttributes */) {
}

static void RenameGlobalInstances(void) {
    OM_SET_INSTANCE_NAME(&itsCommunicationSystem, CommunicationSystem, "itsCommunicationSystem", AOMNoMultiplicity);
    OM_SET_INSTANCE_NAME(&itsHeatingSystem, HeatingSystem, "itsHeatingSystem", AOMNoMultiplicity);
    OM_SET_INSTANCE_NAME(&itsCoolingSystem, CoolingSystem, "itsCoolingSystem", AOMNoMultiplicity);
    OM_SET_INSTANCE_NAME(&itsTempSensor, TempSensor, "itsTempSensor", AOMNoMultiplicity);
    OM_SET_INSTANCE_NAME(&itsPresenceSensor, PresenceSensor, "itsPresenceSensor", AOMNoMultiplicity);
    OM_SET_INSTANCE_NAME(&itsNaturalEnvironment, NaturalEnvironment, "itsNaturalEnvironment", AOMNoMultiplicity);
    OM_SET_INSTANCE_NAME(&itsTMS, TMS, "itsTMS", AOMNoMultiplicity);
}
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\TMS_Operating_Environment.cpp
*********************************************************************/
