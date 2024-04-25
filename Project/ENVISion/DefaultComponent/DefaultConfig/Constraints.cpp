/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20235613
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Constraints
//!	Generated Date	: Tue, 23, Apr 2024  
	File Path	: DefaultComponent\DefaultConfig\Constraints.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "Constraints.h"
//## link itsNVIS
#include "NVIS.h"
//#[ ignore
#define System_Analysis_System_Context_Constraints_Constraints_SERIALIZE OM_NO_OP
//#]

//## package System_Analysis::System_Context

//## class Constraints
Constraints::Constraints(void) : itsNVIS(NULL) {
    NOTIFY_CONSTRUCTOR(Constraints, Constraints(), 0, System_Analysis_System_Context_Constraints_Constraints_SERIALIZE);
}

Constraints::~Constraints(void) {
    NOTIFY_DESTRUCTOR(~Constraints, true);
    cleanUpRelations();
}

const NVIS* Constraints::getItsNVIS(void) const {
    return itsNVIS;
}

void Constraints::setItsNVIS(NVIS* const p_NVIS) {
    if(p_NVIS != NULL)
        {
            p_NVIS->_setItsConstraints(this);
        }
    _setItsNVIS(p_NVIS);
}

void Constraints::cleanUpRelations(void) {
    if(itsNVIS != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsNVIS");
            const Constraints* p_Constraints = itsNVIS->getItsConstraints();
            if(p_Constraints != NULL)
                {
                    itsNVIS->__setItsConstraints(NULL);
                }
            itsNVIS = NULL;
        }
}

void Constraints::__setItsNVIS(NVIS* const p_NVIS) {
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

void Constraints::_setItsNVIS(NVIS* const p_NVIS) {
    if(itsNVIS != NULL)
        {
            itsNVIS->__setItsConstraints(NULL);
        }
    __setItsNVIS(p_NVIS);
}

void Constraints::_clearItsNVIS(void) {
    NOTIFY_RELATION_CLEARED("itsNVIS");
    itsNVIS = NULL;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedConstraints::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsNVIS", false, true);
    if(myReal->itsNVIS)
        {
            aomsRelations->ADD_ITEM(myReal->itsNVIS);
        }
}
//#]

IMPLEMENT_META_P(Constraints, System_Analysis_System_Context, System_Analysis::System_Context, false, OMAnimatedConstraints)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Constraints.cpp
*********************************************************************/
