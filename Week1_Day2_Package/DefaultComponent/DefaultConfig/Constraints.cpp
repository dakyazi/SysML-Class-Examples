/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20235613
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Constraints
//!	Generated Date	: Mon, 15, Apr 2024  
	File Path	: DefaultComponent\DefaultConfig\Constraints.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "Constraints.h"
//## link itsTMS
#include "TMS.h"
//#[ ignore
#define System_Analysis_System_Context_Constraints_Constraints_SERIALIZE OM_NO_OP
//#]

//## package System_Analysis::System_Context

//## class Constraints
Constraints::Constraints(void) : itsTMS(NULL) {
    NOTIFY_CONSTRUCTOR(Constraints, Constraints(), 0, System_Analysis_System_Context_Constraints_Constraints_SERIALIZE);
}

Constraints::~Constraints(void) {
    NOTIFY_DESTRUCTOR(~Constraints, true);
    cleanUpRelations();
}

const TMS* Constraints::getItsTMS(void) const {
    return itsTMS;
}

void Constraints::setItsTMS(TMS* const p_TMS) {
    if(p_TMS != NULL)
        {
            p_TMS->_setItsConstraints(this);
        }
    _setItsTMS(p_TMS);
}

void Constraints::cleanUpRelations(void) {
    if(itsTMS != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsTMS");
            const Constraints* p_Constraints = itsTMS->getItsConstraints();
            if(p_Constraints != NULL)
                {
                    itsTMS->__setItsConstraints(NULL);
                }
            itsTMS = NULL;
        }
}

void Constraints::__setItsTMS(TMS* const p_TMS) {
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

void Constraints::_setItsTMS(TMS* const p_TMS) {
    if(itsTMS != NULL)
        {
            itsTMS->__setItsConstraints(NULL);
        }
    __setItsTMS(p_TMS);
}

void Constraints::_clearItsTMS(void) {
    NOTIFY_RELATION_CLEARED("itsTMS");
    itsTMS = NULL;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedConstraints::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsTMS", false, true);
    if(myReal->itsTMS)
        {
            aomsRelations->ADD_ITEM(myReal->itsTMS);
        }
}
//#]

IMPLEMENT_META_P(Constraints, System_Analysis_System_Context, System_Analysis::System_Context, false, OMAnimatedConstraints)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Constraints.cpp
*********************************************************************/
