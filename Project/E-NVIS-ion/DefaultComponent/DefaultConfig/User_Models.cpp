/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20235613
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: User_Models
//!	Generated Date	: Fri, 19, Apr 2024  
	File Path	: DefaultComponent\DefaultConfig\User_Models.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "User_Models.h"
//## classInstance itsNVIS_1
#include "NVIS.h"
//## package System_Analysis::User_Models


//## classInstance itsNVIS_1
NVIS itsNVIS_1;

#ifdef _OMINSTRUMENT
static void serializeGlobalVars(AOMSAttributes* /* aomsAttributes */);

static void RenameGlobalInstances(void);

IMPLEMENT_META_PACKAGE(System_Analysis_User_Models, System_Analysis::User_Models)
#endif // _OMINSTRUMENT

void User_Models_initRelations(void) {
    {
        {
            itsNVIS_1.setShouldDelete(false);
        }
    }
    
    #ifdef _OMINSTRUMENT
    RenameGlobalInstances();
    #endif // _OMINSTRUMENT
}

bool User_Models_startBehavior(void) {
    bool done = true;
    if(done == true)
        {
            done = itsNVIS_1.startBehavior();
        }
    return done;
}

#ifdef _OMINSTRUMENT
static void serializeGlobalVars(AOMSAttributes* /* aomsAttributes */) {
}

static void RenameGlobalInstances(void) {
    OM_SET_INSTANCE_NAME(&itsNVIS_1, NVIS, "itsNVIS_1", AOMNoMultiplicity);
}
#endif // _OMINSTRUMENT

//#[ ignore
User_Models_OMInitializer::User_Models_OMInitializer(void) {
    User_Models_initRelations();
    (void) User_Models_startBehavior();
}

User_Models_OMInitializer::~User_Models_OMInitializer(void) {
}
//#]

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\User_Models.cpp
*********************************************************************/
