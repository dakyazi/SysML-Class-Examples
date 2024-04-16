/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20235613
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: CoolingSystem
//!	Generated Date	: Mon, 15, Apr 2024  
	File Path	: DefaultComponent\DefaultConfig\CoolingSystem.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "CoolingSystem.h"
//## link itsTMS
#include "TMS.h"
//#[ ignore
#define System_Analysis_System_Context_CoolingSystem_CoolingSystem_SERIALIZE OM_NO_OP
//#]

//## package System_Analysis::System_Context

//## class CoolingSystem
CoolingSystem::CoolingSystem(void) : itsTMS(NULL) {
    NOTIFY_CONSTRUCTOR(CoolingSystem, CoolingSystem(), 0, System_Analysis_System_Context_CoolingSystem_CoolingSystem_SERIALIZE);
}

CoolingSystem::~CoolingSystem(void) {
    NOTIFY_DESTRUCTOR(~CoolingSystem, true);
    cleanUpRelations();
}

const TMS* CoolingSystem::getItsTMS(void) const {
    return itsTMS;
}

void CoolingSystem::setItsTMS(TMS* const p_TMS) {
    if(p_TMS != NULL)
        {
            p_TMS->_setItsCoolingSystem(this);
        }
    _setItsTMS(p_TMS);
}

void CoolingSystem::cleanUpRelations(void) {
    if(itsTMS != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsTMS");
            const CoolingSystem* p_CoolingSystem = itsTMS->getItsCoolingSystem();
            if(p_CoolingSystem != NULL)
                {
                    itsTMS->__setItsCoolingSystem(NULL);
                }
            itsTMS = NULL;
        }
}

void CoolingSystem::__setItsTMS(TMS* const p_TMS) {
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

void CoolingSystem::_setItsTMS(TMS* const p_TMS) {
    if(itsTMS != NULL)
        {
            itsTMS->__setItsCoolingSystem(NULL);
        }
    __setItsTMS(p_TMS);
}

void CoolingSystem::_clearItsTMS(void) {
    NOTIFY_RELATION_CLEARED("itsTMS");
    itsTMS = NULL;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedCoolingSystem::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsTMS", false, true);
    if(myReal->itsTMS)
        {
            aomsRelations->ADD_ITEM(myReal->itsTMS);
        }
}
//#]

IMPLEMENT_META_P(CoolingSystem, System_Analysis_System_Context, System_Analysis::System_Context, false, OMAnimatedCoolingSystem)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\CoolingSystem.cpp
*********************************************************************/
