/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20235613
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: InfraredFilter
//!	Generated Date	: Tue, 23, Apr 2024  
	File Path	: DefaultComponent\DefaultConfig\InfraredFilter.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "InfraredFilter.h"
//## link itsNVIS
#include "NVIS.h"
//#[ ignore
#define System_Analysis_System_Context_InfraredFilter_InfraredFilter_SERIALIZE OM_NO_OP
//#]

//## package System_Analysis::System_Context

//## class InfraredFilter
InfraredFilter::InfraredFilter(void) : itsNVIS(NULL) {
    NOTIFY_CONSTRUCTOR(InfraredFilter, InfraredFilter(), 0, System_Analysis_System_Context_InfraredFilter_InfraredFilter_SERIALIZE);
}

InfraredFilter::~InfraredFilter(void) {
    NOTIFY_DESTRUCTOR(~InfraredFilter, true);
    cleanUpRelations();
}

const NVIS* InfraredFilter::getItsNVIS(void) const {
    return itsNVIS;
}

void InfraredFilter::setItsNVIS(NVIS* const p_NVIS) {
    if(p_NVIS != NULL)
        {
            p_NVIS->_setItsInfraredFilter(this);
        }
    _setItsNVIS(p_NVIS);
}

void InfraredFilter::cleanUpRelations(void) {
    if(itsNVIS != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsNVIS");
            const InfraredFilter* p_InfraredFilter = itsNVIS->getItsInfraredFilter();
            if(p_InfraredFilter != NULL)
                {
                    itsNVIS->__setItsInfraredFilter(NULL);
                }
            itsNVIS = NULL;
        }
}

void InfraredFilter::__setItsNVIS(NVIS* const p_NVIS) {
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

void InfraredFilter::_setItsNVIS(NVIS* const p_NVIS) {
    if(itsNVIS != NULL)
        {
            itsNVIS->__setItsInfraredFilter(NULL);
        }
    __setItsNVIS(p_NVIS);
}

void InfraredFilter::_clearItsNVIS(void) {
    NOTIFY_RELATION_CLEARED("itsNVIS");
    itsNVIS = NULL;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedInfraredFilter::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsNVIS", false, true);
    if(myReal->itsNVIS)
        {
            aomsRelations->ADD_ITEM(myReal->itsNVIS);
        }
}
//#]

IMPLEMENT_META_P(InfraredFilter, System_Analysis_System_Context, System_Analysis::System_Context, false, OMAnimatedInfraredFilter)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\InfraredFilter.cpp
*********************************************************************/
