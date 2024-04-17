/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20235604
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: USERMODEL
//!	Generated Date	: Wed, 17, Apr 2024  
	File Path	: DefaultComponent\DefaultConfig\USERMODEL.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "USERMODEL.h"
//## classInstance itsPowerSource
#include "PowerSource.h"
//## classInstance itsTempSensor
#include "TempSensor.h"
//## classInstance itsTMS
#include "TMS.h"
//## package System_Analysis::USERMODEL


//## classInstance itsPowerSource
PowerSource itsPowerSource;

//## classInstance itsPowerSource_1
PowerSource itsPowerSource_1;

//## classInstance itsTMS
TMS itsTMS;

//## classInstance itsTempSensor
TempSensor itsTempSensor;

#ifdef _OMINSTRUMENT
static void serializeGlobalVars(AOMSAttributes* /* aomsAttributes */);

static void RenameGlobalInstances(void);

IMPLEMENT_META_PACKAGE(System_Analysis_USERMODEL, System_Analysis::USERMODEL)
#endif // _OMINSTRUMENT

void USERMODEL_initRelations(void) {
    {
        {
            itsPowerSource.setShouldDelete(false);
        }
        {
            itsPowerSource_1.setShouldDelete(false);
        }
    }
    {
        
        itsTMS.get_p_TempSensor()->setItsInt_setTmpMax_ProxyFlowPropertyInterface(itsTempSensor.get_p_TempSensor()->getItsInt_setTmpMax_ProxyFlowPropertyInterface());
        
        itsTMS.get_p_TempSensor()->setItsInt_setTmpMin_ProxyFlowPropertyInterface(itsTempSensor.get_p_TempSensor()->getItsInt_setTmpMin_ProxyFlowPropertyInterface());
        
    }{
        
        itsTempSensor.get_p_TempSensor()->setItsInt_currentTmp_ProxyFlowPropertyInterface(itsTMS.get_p_TempSensor()->getItsInt_currentTmp_ProxyFlowPropertyInterface());
        
    }
    {
        
        itsPowerSource_1.get_p_PowerSource()->setItsInt_voltage_ProxyFlowPropertyInterface(itsTMS.get_p_PowerSource()->getItsInt_voltage_ProxyFlowPropertyInterface());
        
    }
    
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
    if(done == true)
        {
            done = itsPowerSource_1.startBehavior();
        }
    return done;
}

#ifdef _OMINSTRUMENT
static void serializeGlobalVars(AOMSAttributes* /* aomsAttributes */) {
}

static void RenameGlobalInstances(void) {
    OM_SET_INSTANCE_NAME(&itsPowerSource, PowerSource, "itsPowerSource", AOMNoMultiplicity);
    OM_SET_INSTANCE_NAME(&itsTMS, TMS, "itsTMS", AOMNoMultiplicity);
    OM_SET_INSTANCE_NAME(&itsTempSensor, TempSensor, "itsTempSensor", AOMNoMultiplicity);
    OM_SET_INSTANCE_NAME(&itsPowerSource_1, PowerSource, "itsPowerSource_1", AOMNoMultiplicity);
}
#endif // _OMINSTRUMENT

//#[ ignore
USERMODEL_OMInitializer::USERMODEL_OMInitializer(void) {
    USERMODEL_initRelations();
    (void) USERMODEL_startBehavior();
}

USERMODEL_OMInitializer::~USERMODEL_OMInitializer(void) {
}
//#]

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\USERMODEL.cpp
*********************************************************************/
