/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20235613
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: NaturalEnvironment
//!	Generated Date	: Mon, 15, Apr 2024  
	File Path	: DefaultComponent\DefaultConfig\NaturalEnvironment.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "NaturalEnvironment.h"
//## link itsTMS
#include "TMS.h"
//#[ ignore
#define System_Analysis_System_Context_NaturalEnvironment_NaturalEnvironment_SERIALIZE OM_NO_OP
//#]

//## package System_Analysis::System_Context

//## class NaturalEnvironment
NaturalEnvironment::NaturalEnvironment(void) : itsTMS(NULL) {
    NOTIFY_CONSTRUCTOR(NaturalEnvironment, NaturalEnvironment(), 0, System_Analysis_System_Context_NaturalEnvironment_NaturalEnvironment_SERIALIZE);
}

NaturalEnvironment::~NaturalEnvironment(void) {
    NOTIFY_DESTRUCTOR(~NaturalEnvironment, true);
    cleanUpRelations();
}

const TMS* NaturalEnvironment::getItsTMS(void) const {
    return itsTMS;
}

void NaturalEnvironment::setItsTMS(TMS* const p_TMS) {
    if(p_TMS != NULL)
        {
            p_TMS->_setItsNaturalEnvironment(this);
        }
    _setItsTMS(p_TMS);
}

void NaturalEnvironment::cleanUpRelations(void) {
    if(itsTMS != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsTMS");
            const NaturalEnvironment* p_NaturalEnvironment = itsTMS->getItsNaturalEnvironment();
            if(p_NaturalEnvironment != NULL)
                {
                    itsTMS->__setItsNaturalEnvironment(NULL);
                }
            itsTMS = NULL;
        }
}

void NaturalEnvironment::__setItsTMS(TMS* const p_TMS) {
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

void NaturalEnvironment::_setItsTMS(TMS* const p_TMS) {
    if(itsTMS != NULL)
        {
            itsTMS->__setItsNaturalEnvironment(NULL);
        }
    __setItsTMS(p_TMS);
}

void NaturalEnvironment::_clearItsTMS(void) {
    NOTIFY_RELATION_CLEARED("itsTMS");
    itsTMS = NULL;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedNaturalEnvironment::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsTMS", false, true);
    if(myReal->itsTMS)
        {
            aomsRelations->ADD_ITEM(myReal->itsTMS);
        }
}
//#]

IMPLEMENT_META_P(NaturalEnvironment, System_Analysis_System_Context, System_Analysis::System_Context, false, OMAnimatedNaturalEnvironment)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\NaturalEnvironment.cpp
*********************************************************************/
