/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20235604
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: CommunicationSystem
//!	Generated Date	: Wed, 17, Apr 2024  
	File Path	: DefaultComponent\DefaultConfig\CommunicationSystem.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "CommunicationSystem.h"
//## link itsTMS
#include "TMS.h"
//#[ ignore
#define System_Analysis_System_Context_CommunicationSystem_CommunicationSystem_SERIALIZE OM_NO_OP
//#]

//## package System_Analysis::System_Context

//## class CommunicationSystem
CommunicationSystem::CommunicationSystem(void) : itsTMS(NULL) {
    NOTIFY_CONSTRUCTOR(CommunicationSystem, CommunicationSystem(), 0, System_Analysis_System_Context_CommunicationSystem_CommunicationSystem_SERIALIZE);
}

CommunicationSystem::~CommunicationSystem(void) {
    NOTIFY_DESTRUCTOR(~CommunicationSystem, true);
    cleanUpRelations();
}

const TMS* CommunicationSystem::getItsTMS(void) const {
    return itsTMS;
}

void CommunicationSystem::setItsTMS(TMS* const p_TMS) {
    if(p_TMS != NULL)
        {
            p_TMS->_setItsCommunicationSystem(this);
        }
    _setItsTMS(p_TMS);
}

void CommunicationSystem::cleanUpRelations(void) {
    if(itsTMS != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsTMS");
            const CommunicationSystem* p_CommunicationSystem = itsTMS->getItsCommunicationSystem();
            if(p_CommunicationSystem != NULL)
                {
                    itsTMS->__setItsCommunicationSystem(NULL);
                }
            itsTMS = NULL;
        }
}

void CommunicationSystem::__setItsTMS(TMS* const p_TMS) {
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

void CommunicationSystem::_setItsTMS(TMS* const p_TMS) {
    if(itsTMS != NULL)
        {
            itsTMS->__setItsCommunicationSystem(NULL);
        }
    __setItsTMS(p_TMS);
}

void CommunicationSystem::_clearItsTMS(void) {
    NOTIFY_RELATION_CLEARED("itsTMS");
    itsTMS = NULL;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedCommunicationSystem::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsTMS", false, true);
    if(myReal->itsTMS)
        {
            aomsRelations->ADD_ITEM(myReal->itsTMS);
        }
}
//#]

IMPLEMENT_META_P(CommunicationSystem, System_Analysis_System_Context, System_Analysis::System_Context, false, OMAnimatedCommunicationSystem)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\CommunicationSystem.cpp
*********************************************************************/
