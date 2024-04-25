/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20235613
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Headlights
//!	Generated Date	: Tue, 23, Apr 2024  
	File Path	: DefaultComponent\DefaultConfig\Headlights.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "Headlights.h"
//## link itsNVIS
#include "NVIS.h"
//#[ ignore
#define System_Analysis_System_Context_Headlights_Headlights_SERIALIZE OM_NO_OP
//#]

//## package System_Analysis::System_Context

//## class Headlights
Headlights::Headlights(void) : itsNVIS(NULL) {
    NOTIFY_CONSTRUCTOR(Headlights, Headlights(), 0, System_Analysis_System_Context_Headlights_Headlights_SERIALIZE);
}

Headlights::~Headlights(void) {
    NOTIFY_DESTRUCTOR(~Headlights, true);
    cleanUpRelations();
}

const NVIS* Headlights::getItsNVIS(void) const {
    return itsNVIS;
}

void Headlights::setItsNVIS(NVIS* const p_NVIS) {
    if(p_NVIS != NULL)
        {
            p_NVIS->_setItsHeadlights(this);
        }
    _setItsNVIS(p_NVIS);
}

void Headlights::cleanUpRelations(void) {
    if(itsNVIS != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsNVIS");
            const Headlights* p_Headlights = itsNVIS->getItsHeadlights();
            if(p_Headlights != NULL)
                {
                    itsNVIS->__setItsHeadlights(NULL);
                }
            itsNVIS = NULL;
        }
}

void Headlights::__setItsNVIS(NVIS* const p_NVIS) {
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

void Headlights::_setItsNVIS(NVIS* const p_NVIS) {
    if(itsNVIS != NULL)
        {
            itsNVIS->__setItsHeadlights(NULL);
        }
    __setItsNVIS(p_NVIS);
}

void Headlights::_clearItsNVIS(void) {
    NOTIFY_RELATION_CLEARED("itsNVIS");
    itsNVIS = NULL;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedHeadlights::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsNVIS", false, true);
    if(myReal->itsNVIS)
        {
            aomsRelations->ADD_ITEM(myReal->itsNVIS);
        }
}
//#]

IMPLEMENT_META_P(Headlights, System_Analysis_System_Context, System_Analysis::System_Context, false, OMAnimatedHeadlights)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Headlights.cpp
*********************************************************************/
