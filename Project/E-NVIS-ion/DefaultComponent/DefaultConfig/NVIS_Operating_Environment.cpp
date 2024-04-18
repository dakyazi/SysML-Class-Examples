/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20235613
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: NVIS_Operating_Environment
//!	Generated Date	: Thu, 18, Apr 2024  
	File Path	: DefaultComponent\DefaultConfig\NVIS_Operating_Environment.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "NVIS_Operating_Environment.h"
//## classInstance itsAutoLightControlUnit
#include "AutoLightControlUnit.h"
//## classInstance itsCentralProcessingUnit
#include "CentralProcessingUnit.h"
//## classInstance itsCommunicationSystem
#include "CommunicationSystem.h"
//## classInstance itsHeadlights
#include "Headlights.h"
//## classInstance itsHighResVideoCam
#include "HighResVideoCam.h"
//## classInstance itsInfraredFilter
#include "InfraredFilter.h"
//## classInstance itsNaturalEnvironment
#include "NaturalEnvironment.h"
//## classInstance itsNVIS
#include "NVIS.h"
//## package System_Analysis::NVIS_Operating_Environment


//## classInstance itsAutoLightControlUnit
AutoLightControlUnit itsAutoLightControlUnit;

//## classInstance itsCentralProcessingUnit
CentralProcessingUnit itsCentralProcessingUnit;

//## classInstance itsCommunicationSystem
CommunicationSystem itsCommunicationSystem;

//## classInstance itsHeadlights
Headlights itsHeadlights;

//## classInstance itsHighResVideoCam
HighResVideoCam itsHighResVideoCam;

//## classInstance itsInfraredFilter
InfraredFilter itsInfraredFilter;

//## classInstance itsNVIS
NVIS itsNVIS;

//## classInstance itsNaturalEnvironment
NaturalEnvironment itsNaturalEnvironment;

#ifdef _OMINSTRUMENT
static void serializeGlobalVars(AOMSAttributes* /* aomsAttributes */);

static void RenameGlobalInstances(void);

IMPLEMENT_META_PACKAGE(System_Analysis_NVIS_Operating_Environment, System_Analysis::NVIS_Operating_Environment)
#endif // _OMINSTRUMENT

void NVIS_Operating_Environment_initRelations(void) {
    {
        {
            itsNVIS.setShouldDelete(false);
        }
    }
    
    #ifdef _OMINSTRUMENT
    RenameGlobalInstances();
    #endif // _OMINSTRUMENT
}

bool NVIS_Operating_Environment_startBehavior(void) {
    bool done = true;
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
    OM_SET_INSTANCE_NAME(&itsNVIS, NVIS, "itsNVIS", AOMNoMultiplicity);
    OM_SET_INSTANCE_NAME(&itsHighResVideoCam, HighResVideoCam, "itsHighResVideoCam", AOMNoMultiplicity);
    OM_SET_INSTANCE_NAME(&itsInfraredFilter, InfraredFilter, "itsInfraredFilter", AOMNoMultiplicity);
    OM_SET_INSTANCE_NAME(&itsNaturalEnvironment, NaturalEnvironment, "itsNaturalEnvironment", AOMNoMultiplicity);
    OM_SET_INSTANCE_NAME(&itsCentralProcessingUnit, CentralProcessingUnit, "itsCentralProcessingUnit", AOMNoMultiplicity);
    OM_SET_INSTANCE_NAME(&itsAutoLightControlUnit, AutoLightControlUnit, "itsAutoLightControlUnit", AOMNoMultiplicity);
    OM_SET_INSTANCE_NAME(&itsHeadlights, Headlights, "itsHeadlights", AOMNoMultiplicity);
    OM_SET_INSTANCE_NAME(&itsCommunicationSystem, CommunicationSystem, "itsCommunicationSystem", AOMNoMultiplicity);
}
#endif // _OMINSTRUMENT

//#[ ignore
NVIS_Operating_Environment_OMInitializer::NVIS_Operating_Environment_OMInitializer(void) {
    NVIS_Operating_Environment_initRelations();
    (void) NVIS_Operating_Environment_startBehavior();
}

NVIS_Operating_Environment_OMInitializer::~NVIS_Operating_Environment_OMInitializer(void) {
}
//#]

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\NVIS_Operating_Environment.cpp
*********************************************************************/
