/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20235613
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: AutoLightControlUnit
//!	Generated Date	: Thu, 18, Apr 2024  
	File Path	: DefaultComponent\DefaultConfig\AutoLightControlUnit.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "AutoLightControlUnit.h"
//## link itsHeadlights
#include "Headlights.h"
//## link itsHighResVideoCam
#include "HighResVideoCam.h"
//## link itsNVIS
#include "NVIS.h"
//#[ ignore
#define System_Analysis_System_Context_AutoLightControlUnit_AutoLightControlUnit_SERIALIZE OM_NO_OP
//#]

//## package System_Analysis::System_Context

//## class AutoLightControlUnit
AutoLightControlUnit::AutoLightControlUnit(void) : itsHeadlights(NULL), itsHighResVideoCam(NULL), itsNVIS(NULL) {
    NOTIFY_CONSTRUCTOR(AutoLightControlUnit, AutoLightControlUnit(), 0, System_Analysis_System_Context_AutoLightControlUnit_AutoLightControlUnit_SERIALIZE);
}

AutoLightControlUnit::~AutoLightControlUnit(void) {
    NOTIFY_DESTRUCTOR(~AutoLightControlUnit, true);
    cleanUpRelations();
}

const Headlights* AutoLightControlUnit::getItsHeadlights(void) const {
    return itsHeadlights;
}

void AutoLightControlUnit::setItsHeadlights(Headlights* const p_Headlights) {
    if(p_Headlights != NULL)
        {
            p_Headlights->_setItsAutoLightControlUnit(this);
        }
    _setItsHeadlights(p_Headlights);
}

const HighResVideoCam* AutoLightControlUnit::getItsHighResVideoCam(void) const {
    return itsHighResVideoCam;
}

void AutoLightControlUnit::setItsHighResVideoCam(HighResVideoCam* const p_HighResVideoCam) {
    if(p_HighResVideoCam != NULL)
        {
            p_HighResVideoCam->_setItsAutoLightControlUnit(this);
        }
    _setItsHighResVideoCam(p_HighResVideoCam);
}

const NVIS* AutoLightControlUnit::getItsNVIS(void) const {
    return itsNVIS;
}

void AutoLightControlUnit::setItsNVIS(NVIS* const p_NVIS) {
    if(p_NVIS != NULL)
        {
            p_NVIS->_setItsAutoLightControlUnit(this);
        }
    _setItsNVIS(p_NVIS);
}

void AutoLightControlUnit::cleanUpRelations(void) {
    if(itsHeadlights != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsHeadlights");
            const AutoLightControlUnit* p_AutoLightControlUnit = itsHeadlights->getItsAutoLightControlUnit();
            if(p_AutoLightControlUnit != NULL)
                {
                    itsHeadlights->__setItsAutoLightControlUnit(NULL);
                }
            itsHeadlights = NULL;
        }
    if(itsHighResVideoCam != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsHighResVideoCam");
            const AutoLightControlUnit* p_AutoLightControlUnit = itsHighResVideoCam->getItsAutoLightControlUnit();
            if(p_AutoLightControlUnit != NULL)
                {
                    itsHighResVideoCam->__setItsAutoLightControlUnit(NULL);
                }
            itsHighResVideoCam = NULL;
        }
    if(itsNVIS != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsNVIS");
            const AutoLightControlUnit* p_AutoLightControlUnit = itsNVIS->getItsAutoLightControlUnit();
            if(p_AutoLightControlUnit != NULL)
                {
                    itsNVIS->__setItsAutoLightControlUnit(NULL);
                }
            itsNVIS = NULL;
        }
}

void AutoLightControlUnit::__setItsHeadlights(Headlights* const p_Headlights) {
    itsHeadlights = p_Headlights;
    if(p_Headlights != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsHeadlights", p_Headlights, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsHeadlights");
        }
}

void AutoLightControlUnit::_setItsHeadlights(Headlights* const p_Headlights) {
    if(itsHeadlights != NULL)
        {
            itsHeadlights->__setItsAutoLightControlUnit(NULL);
        }
    __setItsHeadlights(p_Headlights);
}

void AutoLightControlUnit::_clearItsHeadlights(void) {
    NOTIFY_RELATION_CLEARED("itsHeadlights");
    itsHeadlights = NULL;
}

void AutoLightControlUnit::__setItsHighResVideoCam(HighResVideoCam* const p_HighResVideoCam) {
    itsHighResVideoCam = p_HighResVideoCam;
    if(p_HighResVideoCam != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsHighResVideoCam", p_HighResVideoCam, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsHighResVideoCam");
        }
}

void AutoLightControlUnit::_setItsHighResVideoCam(HighResVideoCam* const p_HighResVideoCam) {
    if(itsHighResVideoCam != NULL)
        {
            itsHighResVideoCam->__setItsAutoLightControlUnit(NULL);
        }
    __setItsHighResVideoCam(p_HighResVideoCam);
}

void AutoLightControlUnit::_clearItsHighResVideoCam(void) {
    NOTIFY_RELATION_CLEARED("itsHighResVideoCam");
    itsHighResVideoCam = NULL;
}

void AutoLightControlUnit::__setItsNVIS(NVIS* const p_NVIS) {
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

void AutoLightControlUnit::_setItsNVIS(NVIS* const p_NVIS) {
    if(itsNVIS != NULL)
        {
            itsNVIS->__setItsAutoLightControlUnit(NULL);
        }
    __setItsNVIS(p_NVIS);
}

void AutoLightControlUnit::_clearItsNVIS(void) {
    NOTIFY_RELATION_CLEARED("itsNVIS");
    itsNVIS = NULL;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedAutoLightControlUnit::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsNVIS", false, true);
    if(myReal->itsNVIS)
        {
            aomsRelations->ADD_ITEM(myReal->itsNVIS);
        }
    aomsRelations->addRelation("itsHighResVideoCam", false, true);
    if(myReal->itsHighResVideoCam)
        {
            aomsRelations->ADD_ITEM(myReal->itsHighResVideoCam);
        }
    aomsRelations->addRelation("itsHeadlights", false, true);
    if(myReal->itsHeadlights)
        {
            aomsRelations->ADD_ITEM(myReal->itsHeadlights);
        }
}
//#]

IMPLEMENT_META_P(AutoLightControlUnit, System_Analysis_System_Context, System_Analysis::System_Context, false, OMAnimatedAutoLightControlUnit)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\AutoLightControlUnit.cpp
*********************************************************************/
