/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20235613
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Stakeholder
//!	Generated Date	: Mon, 15, Apr 2024  
	File Path	: DefaultComponent\DefaultConfig\Stakeholder.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "Stakeholder.h"
//## link itsTMS
#include "TMS.h"
//#[ ignore
#define System_Analysis_System_Context_Stakeholder_Stakeholder_SERIALIZE OM_NO_OP
//#]

//## package System_Analysis::System_Context

//## class Stakeholder
Stakeholder::Stakeholder(void) : itsTMS(NULL) {
    NOTIFY_CONSTRUCTOR(Stakeholder, Stakeholder(), 0, System_Analysis_System_Context_Stakeholder_Stakeholder_SERIALIZE);
}

Stakeholder::~Stakeholder(void) {
    NOTIFY_DESTRUCTOR(~Stakeholder, true);
    cleanUpRelations();
}

const TMS* Stakeholder::getItsTMS(void) const {
    return itsTMS;
}

void Stakeholder::setItsTMS(TMS* const p_TMS) {
    if(p_TMS != NULL)
        {
            p_TMS->_setItsStakeholder(this);
        }
    _setItsTMS(p_TMS);
}

void Stakeholder::cleanUpRelations(void) {
    if(itsTMS != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsTMS");
            const Stakeholder* p_Stakeholder = itsTMS->getItsStakeholder();
            if(p_Stakeholder != NULL)
                {
                    itsTMS->__setItsStakeholder(NULL);
                }
            itsTMS = NULL;
        }
}

void Stakeholder::__setItsTMS(TMS* const p_TMS) {
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

void Stakeholder::_setItsTMS(TMS* const p_TMS) {
    if(itsTMS != NULL)
        {
            itsTMS->__setItsStakeholder(NULL);
        }
    __setItsTMS(p_TMS);
}

void Stakeholder::_clearItsTMS(void) {
    NOTIFY_RELATION_CLEARED("itsTMS");
    itsTMS = NULL;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedStakeholder::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsTMS", false, true);
    if(myReal->itsTMS)
        {
            aomsRelations->ADD_ITEM(myReal->itsTMS);
        }
}
//#]

IMPLEMENT_META_P(Stakeholder, System_Analysis_System_Context, System_Analysis::System_Context, false, OMAnimatedStakeholder)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Stakeholder.cpp
*********************************************************************/
