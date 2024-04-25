/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20235613
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: HighResVideoCam
//!	Generated Date	: Tue, 23, Apr 2024  
	File Path	: DefaultComponent\DefaultConfig\HighResVideoCam.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "HighResVideoCam.h"
//## link itsNVIS
#include "NVIS.h"
//#[ ignore
#define System_Analysis_System_Context_HighResVideoCam_HighResVideoCam_SERIALIZE OM_NO_OP
//#]

//## package System_Analysis::System_Context

//## class HighResVideoCam
HighResVideoCam::HighResVideoCam(void) : itsNVIS(NULL) {
    NOTIFY_CONSTRUCTOR(HighResVideoCam, HighResVideoCam(), 0, System_Analysis_System_Context_HighResVideoCam_HighResVideoCam_SERIALIZE);
}

HighResVideoCam::~HighResVideoCam(void) {
    NOTIFY_DESTRUCTOR(~HighResVideoCam, true);
    cleanUpRelations();
}

const NVIS* HighResVideoCam::getItsNVIS(void) const {
    return itsNVIS;
}

void HighResVideoCam::setItsNVIS(NVIS* const p_NVIS) {
    if(p_NVIS != NULL)
        {
            p_NVIS->_setItsHighResVideoCam(this);
        }
    _setItsNVIS(p_NVIS);
}

void HighResVideoCam::cleanUpRelations(void) {
    if(itsNVIS != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsNVIS");
            const HighResVideoCam* p_HighResVideoCam = itsNVIS->getItsHighResVideoCam();
            if(p_HighResVideoCam != NULL)
                {
                    itsNVIS->__setItsHighResVideoCam(NULL);
                }
            itsNVIS = NULL;
        }
}

void HighResVideoCam::__setItsNVIS(NVIS* const p_NVIS) {
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

void HighResVideoCam::_setItsNVIS(NVIS* const p_NVIS) {
    if(itsNVIS != NULL)
        {
            itsNVIS->__setItsHighResVideoCam(NULL);
        }
    __setItsNVIS(p_NVIS);
}

void HighResVideoCam::_clearItsNVIS(void) {
    NOTIFY_RELATION_CLEARED("itsNVIS");
    itsNVIS = NULL;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedHighResVideoCam::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsNVIS", false, true);
    if(myReal->itsNVIS)
        {
            aomsRelations->ADD_ITEM(myReal->itsNVIS);
        }
}
//#]

IMPLEMENT_META_P(HighResVideoCam, System_Analysis_System_Context, System_Analysis::System_Context, false, OMAnimatedHighResVideoCam)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\HighResVideoCam.cpp
*********************************************************************/
