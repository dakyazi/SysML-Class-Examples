/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20235613
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: NaturalEnvironment
//!	Generated Date	: Thu, 18, Apr 2024  
	File Path	: DefaultComponent\DefaultConfig\NaturalEnvironment.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "NaturalEnvironment.h"
//## link itsNVIS
#include "NVIS.h"
//#[ ignore
#define System_Analysis_System_Context_NaturalEnvironment_NaturalEnvironment_SERIALIZE OM_NO_OP
//#]

//## package System_Analysis::System_Context

//## class NaturalEnvironment
NaturalEnvironment::NaturalEnvironment(void) : itsNVIS(NULL) {
    NOTIFY_CONSTRUCTOR(NaturalEnvironment, NaturalEnvironment(), 0, System_Analysis_System_Context_NaturalEnvironment_NaturalEnvironment_SERIALIZE);
}

NaturalEnvironment::~NaturalEnvironment(void) {
    NOTIFY_DESTRUCTOR(~NaturalEnvironment, true);
    cleanUpRelations();
}

const NVIS* NaturalEnvironment::getItsNVIS(void) const {
    return itsNVIS;
}

void NaturalEnvironment::setItsNVIS(NVIS* const p_NVIS) {
    if(p_NVIS != NULL)
        {
            p_NVIS->_setItsNaturalEnvironment(this);
        }
    _setItsNVIS(p_NVIS);
}

void NaturalEnvironment::cleanUpRelations(void) {
    if(itsNVIS != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsNVIS");
            const NaturalEnvironment* p_NaturalEnvironment = itsNVIS->getItsNaturalEnvironment();
            if(p_NaturalEnvironment != NULL)
                {
                    itsNVIS->__setItsNaturalEnvironment(NULL);
                }
            itsNVIS = NULL;
        }
}

void NaturalEnvironment::__setItsNVIS(NVIS* const p_NVIS) {
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

void NaturalEnvironment::_setItsNVIS(NVIS* const p_NVIS) {
    if(itsNVIS != NULL)
        {
            itsNVIS->__setItsNaturalEnvironment(NULL);
        }
    __setItsNVIS(p_NVIS);
}

void NaturalEnvironment::_clearItsNVIS(void) {
    NOTIFY_RELATION_CLEARED("itsNVIS");
    itsNVIS = NULL;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedNaturalEnvironment::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsNVIS", false, true);
    if(myReal->itsNVIS)
        {
            aomsRelations->ADD_ITEM(myReal->itsNVIS);
        }
}
//#]

IMPLEMENT_META_P(NaturalEnvironment, System_Analysis_System_Context, System_Analysis::System_Context, false, OMAnimatedNaturalEnvironment)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\NaturalEnvironment.cpp
*********************************************************************/
