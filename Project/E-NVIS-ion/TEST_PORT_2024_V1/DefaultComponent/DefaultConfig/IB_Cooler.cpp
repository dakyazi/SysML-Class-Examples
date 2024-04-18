/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20235613
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: IB_Cooler
//!	Generated Date	: Thu, 18, Apr 2024  
	File Path	: DefaultComponent\DefaultConfig\IB_Cooler.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "IB_Cooler.h"
//#[ ignore
#define Logical_Architecture_IB_Cooler_IB_Cooler_SERIALIZE OM_NO_OP

#define Logical_Architecture_IB_Cooler_startCooler_SERIALIZE OM_NO_OP
//#]

//## package Logical_Architecture

//## class IB_Cooler
IB_Cooler::IB_Cooler(void) {
    NOTIFY_CONSTRUCTOR(IB_Cooler, IB_Cooler(), 0, Logical_Architecture_IB_Cooler_IB_Cooler_SERIALIZE);
}

IB_Cooler::~IB_Cooler(void) {
    NOTIFY_DESTRUCTOR(~IB_Cooler, true);
}

#ifdef _OMINSTRUMENT
IMPLEMENT_META_P(IB_Cooler, Logical_Architecture, Logical_Architecture, false, OMAnimatedIB_Cooler)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\IB_Cooler.cpp
*********************************************************************/
