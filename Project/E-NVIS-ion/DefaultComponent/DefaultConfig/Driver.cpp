/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20235613
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Driver
//!	Generated Date	: Thu, 18, Apr 2024  
	File Path	: DefaultComponent\DefaultConfig\Driver.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "Driver.h"
//#[ ignore
#define System_Analysis_Use_Cases_NVIS_Use_Case_Driver_Driver_SERIALIZE OM_NO_OP
//#]

//## package System_Analysis::Use_Cases::NVIS_Use_Case

//## actor Driver
Driver::Driver(void) {
    NOTIFY_CONSTRUCTOR(Driver, Driver(), 0, System_Analysis_Use_Cases_NVIS_Use_Case_Driver_Driver_SERIALIZE);
}

Driver::~Driver(void) {
    NOTIFY_DESTRUCTOR(~Driver, true);
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedDriver::serializeRelations(AOMSRelations* aomsRelations) const {
}
//#]

IMPLEMENT_META_P(Driver, System_Analysis_Use_Cases_NVIS_Use_Case, System_Analysis::Use_Cases::NVIS_Use_Case, false, OMAnimatedDriver)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Driver.cpp
*********************************************************************/
