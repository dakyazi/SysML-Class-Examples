/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20235613
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: IB_Heater
//!	Generated Date	: Thu, 18, Apr 2024  
	File Path	: DefaultComponent\DefaultConfig\IB_Heater.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "IB_Heater.h"
//#[ ignore
#define Logical_Architecture_IB_Heater_IB_Heater_SERIALIZE OM_NO_OP

#define Logical_Architecture_IB_Heater_startHeater_SERIALIZE OM_NO_OP
//#]

//## package Logical_Architecture

//## class IB_Heater
IB_Heater::IB_Heater(void) {
    NOTIFY_CONSTRUCTOR(IB_Heater, IB_Heater(), 0, Logical_Architecture_IB_Heater_IB_Heater_SERIALIZE);
}

IB_Heater::~IB_Heater(void) {
    NOTIFY_DESTRUCTOR(~IB_Heater, true);
}

#ifdef _OMINSTRUMENT
IMPLEMENT_META_P(IB_Heater, Logical_Architecture, Logical_Architecture, false, OMAnimatedIB_Heater)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\IB_Heater.cpp
*********************************************************************/
