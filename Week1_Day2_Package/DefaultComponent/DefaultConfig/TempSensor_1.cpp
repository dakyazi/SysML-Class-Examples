/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20235604
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: TempSensor_1
//!	Generated Date	: Wed, 17, Apr 2024  
	File Path	: DefaultComponent\DefaultConfig\TempSensor_1.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "TempSensor_1.h"
//#[ ignore
#define System_Analysis_TMS_Operating_Environment_TempSensor_1_TempSensor_1_SERIALIZE OM_NO_OP
//#]

//## package System_Analysis::TMS_Operating_Environment

//## class TempSensor_1
TempSensor_1::TempSensor_1(void) {
    NOTIFY_CONSTRUCTOR(TempSensor_1, TempSensor_1(), 0, System_Analysis_TMS_Operating_Environment_TempSensor_1_TempSensor_1_SERIALIZE);
}

TempSensor_1::~TempSensor_1(void) {
    NOTIFY_DESTRUCTOR(~TempSensor_1, true);
}

#ifdef _OMINSTRUMENT
IMPLEMENT_META_P(TempSensor_1, System_Analysis_TMS_Operating_Environment, System_Analysis::TMS_Operating_Environment, false, OMAnimatedTempSensor_1)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\TempSensor_1.cpp
*********************************************************************/
