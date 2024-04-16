/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20235613
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: USERMODEL
//!	Generated Date	: Tue, 16, Apr 2024  
	File Path	: DefaultComponent\DefaultConfig\USERMODEL.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "USERMODEL.h"
//## classInstance itsPowerSource
#include "PowerSource.h"
//## package System_Analysis::USERMODEL


//## classInstance itsPowerSource
PowerSource itsPowerSource;

#ifdef _OMINSTRUMENT
static void serializeGlobalVars(AOMSAttributes* /* aomsAttributes */);

static void RenameGlobalInstances(void);

IMPLEMENT_META_PACKAGE(System_Analysis_USERMODEL, System_Analysis::USERMODEL)
#endif // _OMINSTRUMENT

void USERMODEL_initRelations(void) {
    
    #ifdef _OMINSTRUMENT
    RenameGlobalInstances();
    #endif // _OMINSTRUMENT
}

bool USERMODEL_startBehavior(void) {
    bool done = true;
    if(done == true)
        {
            done = itsPowerSource.startBehavior();
        }
    return done;
}

#ifdef _OMINSTRUMENT
static void serializeGlobalVars(AOMSAttributes* /* aomsAttributes */) {
}

static void RenameGlobalInstances(void) {
    OM_SET_INSTANCE_NAME(&itsPowerSource, PowerSource, "itsPowerSource", AOMNoMultiplicity);
}
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\USERMODEL.cpp
*********************************************************************/
