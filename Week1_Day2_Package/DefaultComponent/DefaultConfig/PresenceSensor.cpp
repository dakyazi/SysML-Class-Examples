/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20235613
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: PresenceSensor
//!	Generated Date	: Mon, 15, Apr 2024  
	File Path	: DefaultComponent\DefaultConfig\PresenceSensor.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "PresenceSensor.h"
//## link itsTMS
#include "TMS.h"
//#[ ignore
#define System_Analysis_System_Context_PresenceSensor_PresenceSensor_SERIALIZE OM_NO_OP
//#]

//## package System_Analysis::System_Context

//## class PresenceSensor
PresenceSensor::PresenceSensor(void) : itsTMS(NULL) {
    NOTIFY_CONSTRUCTOR(PresenceSensor, PresenceSensor(), 0, System_Analysis_System_Context_PresenceSensor_PresenceSensor_SERIALIZE);
}

PresenceSensor::~PresenceSensor(void) {
    NOTIFY_DESTRUCTOR(~PresenceSensor, true);
    cleanUpRelations();
}

const TMS* PresenceSensor::getItsTMS(void) const {
    return itsTMS;
}

void PresenceSensor::setItsTMS(TMS* const p_TMS) {
    if(p_TMS != NULL)
        {
            p_TMS->_setItsPresenceSensor(this);
        }
    _setItsTMS(p_TMS);
}

void PresenceSensor::cleanUpRelations(void) {
    if(itsTMS != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsTMS");
            const PresenceSensor* p_PresenceSensor = itsTMS->getItsPresenceSensor();
            if(p_PresenceSensor != NULL)
                {
                    itsTMS->__setItsPresenceSensor(NULL);
                }
            itsTMS = NULL;
        }
}

void PresenceSensor::__setItsTMS(TMS* const p_TMS) {
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

void PresenceSensor::_setItsTMS(TMS* const p_TMS) {
    if(itsTMS != NULL)
        {
            itsTMS->__setItsPresenceSensor(NULL);
        }
    __setItsTMS(p_TMS);
}

void PresenceSensor::_clearItsTMS(void) {
    NOTIFY_RELATION_CLEARED("itsTMS");
    itsTMS = NULL;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedPresenceSensor::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsTMS", false, true);
    if(myReal->itsTMS)
        {
            aomsRelations->ADD_ITEM(myReal->itsTMS);
        }
}
//#]

IMPLEMENT_META_P(PresenceSensor, System_Analysis_System_Context, System_Analysis::System_Context, false, OMAnimatedPresenceSensor)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\PresenceSensor.cpp
*********************************************************************/
