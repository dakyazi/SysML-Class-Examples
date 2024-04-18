/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20235613
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Standards
//!	Generated Date	: Thu, 18, Apr 2024  
	File Path	: DefaultComponent\DefaultConfig\Standards.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "Standards.h"
//## link itsNVIS
#include "NVIS.h"
//#[ ignore
#define System_Analysis_System_Context_Standards_Standards_SERIALIZE OM_NO_OP
//#]

//## package System_Analysis::System_Context

//## class Standards
Standards::Standards(void) : itsNVIS(NULL) {
    NOTIFY_CONSTRUCTOR(Standards, Standards(), 0, System_Analysis_System_Context_Standards_Standards_SERIALIZE);
}

Standards::~Standards(void) {
    NOTIFY_DESTRUCTOR(~Standards, true);
    cleanUpRelations();
}

const NVIS* Standards::getItsNVIS(void) const {
    return itsNVIS;
}

void Standards::setItsNVIS(NVIS* const p_NVIS) {
    if(p_NVIS != NULL)
        {
            p_NVIS->_setItsStandards(this);
        }
    _setItsNVIS(p_NVIS);
}

void Standards::cleanUpRelations(void) {
    if(itsNVIS != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsNVIS");
            const Standards* p_Standards = itsNVIS->getItsStandards();
            if(p_Standards != NULL)
                {
                    itsNVIS->__setItsStandards(NULL);
                }
            itsNVIS = NULL;
        }
}

void Standards::__setItsNVIS(NVIS* const p_NVIS) {
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

void Standards::_setItsNVIS(NVIS* const p_NVIS) {
    if(itsNVIS != NULL)
        {
            itsNVIS->__setItsStandards(NULL);
        }
    __setItsNVIS(p_NVIS);
}

void Standards::_clearItsNVIS(void) {
    NOTIFY_RELATION_CLEARED("itsNVIS");
    itsNVIS = NULL;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedStandards::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsNVIS", false, true);
    if(myReal->itsNVIS)
        {
            aomsRelations->ADD_ITEM(myReal->itsNVIS);
        }
}
//#]

IMPLEMENT_META_P(Standards, System_Analysis_System_Context, System_Analysis::System_Context, false, OMAnimatedStandards)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Standards.cpp
*********************************************************************/
