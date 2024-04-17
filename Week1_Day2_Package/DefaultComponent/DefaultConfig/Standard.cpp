/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20235604
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Standard
//!	Generated Date	: Wed, 17, Apr 2024  
	File Path	: DefaultComponent\DefaultConfig\Standard.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "Standard.h"
//## link itsTMS
#include "TMS.h"
//#[ ignore
#define System_Analysis_System_Context_Standard_Standard_SERIALIZE OM_NO_OP
//#]

//## package System_Analysis::System_Context

//## class Standard
Standard::Standard(void) : itsTMS(NULL) {
    NOTIFY_CONSTRUCTOR(Standard, Standard(), 0, System_Analysis_System_Context_Standard_Standard_SERIALIZE);
}

Standard::~Standard(void) {
    NOTIFY_DESTRUCTOR(~Standard, true);
    cleanUpRelations();
}

const TMS* Standard::getItsTMS(void) const {
    return itsTMS;
}

void Standard::setItsTMS(TMS* const p_TMS) {
    if(p_TMS != NULL)
        {
            p_TMS->_setItsStandard(this);
        }
    _setItsTMS(p_TMS);
}

void Standard::cleanUpRelations(void) {
    if(itsTMS != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsTMS");
            const Standard* p_Standard = itsTMS->getItsStandard();
            if(p_Standard != NULL)
                {
                    itsTMS->__setItsStandard(NULL);
                }
            itsTMS = NULL;
        }
}

void Standard::__setItsTMS(TMS* const p_TMS) {
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

void Standard::_setItsTMS(TMS* const p_TMS) {
    if(itsTMS != NULL)
        {
            itsTMS->__setItsStandard(NULL);
        }
    __setItsTMS(p_TMS);
}

void Standard::_clearItsTMS(void) {
    NOTIFY_RELATION_CLEARED("itsTMS");
    itsTMS = NULL;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedStandard::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsTMS", false, true);
    if(myReal->itsTMS)
        {
            aomsRelations->ADD_ITEM(myReal->itsTMS);
        }
}
//#]

IMPLEMENT_META_P(Standard, System_Analysis_System_Context, System_Analysis::System_Context, false, OMAnimatedStandard)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Standard.cpp
*********************************************************************/
