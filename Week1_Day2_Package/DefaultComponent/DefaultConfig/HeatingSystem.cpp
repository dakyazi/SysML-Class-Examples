/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20235613
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: HeatingSystem
//!	Generated Date	: Mon, 15, Apr 2024  
	File Path	: DefaultComponent\DefaultConfig\HeatingSystem.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "HeatingSystem.h"
//## link itsTMS
#include "TMS.h"
//#[ ignore
#define System_Analysis_System_Context_HeatingSystem_HeatingSystem_SERIALIZE OM_NO_OP
//#]

//## package System_Analysis::System_Context

//## class HeatingSystem
HeatingSystem::HeatingSystem(void) : itsTMS(NULL) {
    NOTIFY_CONSTRUCTOR(HeatingSystem, HeatingSystem(), 0, System_Analysis_System_Context_HeatingSystem_HeatingSystem_SERIALIZE);
}

HeatingSystem::~HeatingSystem(void) {
    NOTIFY_DESTRUCTOR(~HeatingSystem, true);
    cleanUpRelations();
}

const TMS* HeatingSystem::getItsTMS(void) const {
    return itsTMS;
}

void HeatingSystem::setItsTMS(TMS* const p_TMS) {
    if(p_TMS != NULL)
        {
            p_TMS->_setItsHeatingSystem(this);
        }
    _setItsTMS(p_TMS);
}

void HeatingSystem::cleanUpRelations(void) {
    if(itsTMS != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsTMS");
            const HeatingSystem* p_HeatingSystem = itsTMS->getItsHeatingSystem();
            if(p_HeatingSystem != NULL)
                {
                    itsTMS->__setItsHeatingSystem(NULL);
                }
            itsTMS = NULL;
        }
}

void HeatingSystem::__setItsTMS(TMS* const p_TMS) {
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

void HeatingSystem::_setItsTMS(TMS* const p_TMS) {
    if(itsTMS != NULL)
        {
            itsTMS->__setItsHeatingSystem(NULL);
        }
    __setItsTMS(p_TMS);
}

void HeatingSystem::_clearItsTMS(void) {
    NOTIFY_RELATION_CLEARED("itsTMS");
    itsTMS = NULL;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedHeatingSystem::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsTMS", false, true);
    if(myReal->itsTMS)
        {
            aomsRelations->ADD_ITEM(myReal->itsTMS);
        }
}
//#]

IMPLEMENT_META_P(HeatingSystem, System_Analysis_System_Context, System_Analysis::System_Context, false, OMAnimatedHeatingSystem)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\HeatingSystem.cpp
*********************************************************************/
