/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20235613
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Stakeholder
//!	Generated Date	: Thu, 18, Apr 2024  
	File Path	: DefaultComponent\DefaultConfig\Stakeholder.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "Stakeholder.h"
//## link itsNVIS
#include "NVIS.h"
//#[ ignore
#define System_Analysis_System_Context_Stakeholder_Stakeholder_SERIALIZE OM_NO_OP
//#]

//## package System_Analysis::System_Context

//## class Stakeholder
Stakeholder::Stakeholder(void) : itsNVIS(NULL) {
    NOTIFY_CONSTRUCTOR(Stakeholder, Stakeholder(), 0, System_Analysis_System_Context_Stakeholder_Stakeholder_SERIALIZE);
}

Stakeholder::~Stakeholder(void) {
    NOTIFY_DESTRUCTOR(~Stakeholder, true);
    cleanUpRelations();
}

const NVIS* Stakeholder::getItsNVIS(void) const {
    return itsNVIS;
}

void Stakeholder::setItsNVIS(NVIS* const p_NVIS) {
    if(p_NVIS != NULL)
        {
            p_NVIS->_setItsStakeholder(this);
        }
    _setItsNVIS(p_NVIS);
}

void Stakeholder::cleanUpRelations(void) {
    if(itsNVIS != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsNVIS");
            const Stakeholder* p_Stakeholder = itsNVIS->getItsStakeholder();
            if(p_Stakeholder != NULL)
                {
                    itsNVIS->__setItsStakeholder(NULL);
                }
            itsNVIS = NULL;
        }
}

void Stakeholder::__setItsNVIS(NVIS* const p_NVIS) {
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

void Stakeholder::_setItsNVIS(NVIS* const p_NVIS) {
    if(itsNVIS != NULL)
        {
            itsNVIS->__setItsStakeholder(NULL);
        }
    __setItsNVIS(p_NVIS);
}

void Stakeholder::_clearItsNVIS(void) {
    NOTIFY_RELATION_CLEARED("itsNVIS");
    itsNVIS = NULL;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedStakeholder::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsNVIS", false, true);
    if(myReal->itsNVIS)
        {
            aomsRelations->ADD_ITEM(myReal->itsNVIS);
        }
}
//#]

IMPLEMENT_META_P(Stakeholder, System_Analysis_System_Context, System_Analysis::System_Context, false, OMAnimatedStakeholder)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Stakeholder.cpp
*********************************************************************/
