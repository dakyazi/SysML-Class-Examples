/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20235613
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: CommunicationSystem
//!	Generated Date	: Tue, 23, Apr 2024  
	File Path	: DefaultComponent\DefaultConfig\CommunicationSystem.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "CommunicationSystem.h"
//## link itsNVIS
#include "NVIS.h"
//#[ ignore
#define System_Analysis_System_Context_CommunicationSystem_CommunicationSystem_SERIALIZE OM_NO_OP
//#]

//## package System_Analysis::System_Context

//## class CommunicationSystem
CommunicationSystem::CommunicationSystem(void) : itsNVIS(NULL) {
    NOTIFY_CONSTRUCTOR(CommunicationSystem, CommunicationSystem(), 0, System_Analysis_System_Context_CommunicationSystem_CommunicationSystem_SERIALIZE);
}

CommunicationSystem::~CommunicationSystem(void) {
    NOTIFY_DESTRUCTOR(~CommunicationSystem, true);
    cleanUpRelations();
}

const NVIS* CommunicationSystem::getItsNVIS(void) const {
    return itsNVIS;
}

void CommunicationSystem::setItsNVIS(NVIS* const p_NVIS) {
    if(p_NVIS != NULL)
        {
            p_NVIS->_setItsCommunicationSystem(this);
        }
    _setItsNVIS(p_NVIS);
}

void CommunicationSystem::cleanUpRelations(void) {
    if(itsNVIS != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsNVIS");
            const CommunicationSystem* p_CommunicationSystem = itsNVIS->getItsCommunicationSystem();
            if(p_CommunicationSystem != NULL)
                {
                    itsNVIS->__setItsCommunicationSystem(NULL);
                }
            itsNVIS = NULL;
        }
}

void CommunicationSystem::__setItsNVIS(NVIS* const p_NVIS) {
    itsNVIS = p_NVIS;
    if(p_NVIS != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsNVIS", p_NVIS, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsNVIS");
        }
}

void CommunicationSystem::_setItsNVIS(NVIS* const p_NVIS) {
    if(itsNVIS != NULL)
        {
            itsNVIS->__setItsCommunicationSystem(NULL);
        }
    __setItsNVIS(p_NVIS);
}

void CommunicationSystem::_clearItsNVIS(void) {
    NOTIFY_RELATION_CLEARED("itsNVIS");
    itsNVIS = NULL;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedCommunicationSystem::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsNVIS", false, true);
    if(myReal->itsNVIS)
        {
            aomsRelations->ADD_ITEM(myReal->itsNVIS);
        }
}
//#]

IMPLEMENT_META_P(CommunicationSystem, System_Analysis_System_Context, System_Analysis::System_Context, false, OMAnimatedCommunicationSystem)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\CommunicationSystem.cpp
*********************************************************************/
