/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20235613
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: TempSensor
//!	Generated Date	: Mon, 15, Apr 2024  
	File Path	: DefaultComponent\DefaultConfig\TempSensor.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "TempSensor.h"
//## link itsTMS
#include "TMS.h"
//#[ ignore
#define System_Analysis_System_Context_TempSensor_TempSensor_SERIALIZE OM_NO_OP
//#]

//## package System_Analysis::System_Context

//## class TempSensor
TempSensor::TempSensor(void) : itsTMS(NULL) {
    NOTIFY_CONSTRUCTOR(TempSensor, TempSensor(), 0, System_Analysis_System_Context_TempSensor_TempSensor_SERIALIZE);
}

TempSensor::~TempSensor(void) {
    NOTIFY_DESTRUCTOR(~TempSensor, true);
    cleanUpRelations();
}

const TMS* TempSensor::getItsTMS(void) const {
    return itsTMS;
}

void TempSensor::setItsTMS(TMS* const p_TMS) {
    if(p_TMS != NULL)
        {
            p_TMS->_setItsTempSensor(this);
        }
    _setItsTMS(p_TMS);
}

void TempSensor::cleanUpRelations(void) {
    if(itsTMS != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsTMS");
            const TempSensor* p_TempSensor = itsTMS->getItsTempSensor();
            if(p_TempSensor != NULL)
                {
                    itsTMS->__setItsTempSensor(NULL);
                }
            itsTMS = NULL;
        }
}

void TempSensor::__setItsTMS(TMS* const p_TMS) {
    itsTMS = p_TMS;
    if(p_TMS != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsTMS", p_TMS, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsTMS");
        }
}

void TempSensor::_setItsTMS(TMS* const p_TMS) {
    if(itsTMS != NULL)
        {
            itsTMS->__setItsTempSensor(NULL);
        }
    __setItsTMS(p_TMS);
}

void TempSensor::_clearItsTMS(void) {
    NOTIFY_RELATION_CLEARED("itsTMS");
    itsTMS = NULL;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedTempSensor::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsTMS", false, true);
    if(myReal->itsTMS)
        {
            aomsRelations->ADD_ITEM(myReal->itsTMS);
        }
}
//#]

IMPLEMENT_META_P(TempSensor, System_Analysis_System_Context, System_Analysis::System_Context, false, OMAnimatedTempSensor)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\TempSensor.cpp
*********************************************************************/
