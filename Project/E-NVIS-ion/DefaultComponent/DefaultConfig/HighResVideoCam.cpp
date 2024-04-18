/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20235613
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: HighResVideoCam
//!	Generated Date	: Thu, 18, Apr 2024  
	File Path	: DefaultComponent\DefaultConfig\HighResVideoCam.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "HighResVideoCam.h"
//## link itsAutoLightControlUnit
#include "AutoLightControlUnit.h"
//## link itsCentralProcessingUnit
#include "CentralProcessingUnit.h"
//## link itsNVIS
#include "NVIS.h"
//#[ ignore
#define System_Analysis_System_Context_HighResVideoCam_HighResVideoCam_SERIALIZE OM_NO_OP
//#]

//## package System_Analysis::System_Context

//## class HighResVideoCam
HighResVideoCam::HighResVideoCam(void) : itsAutoLightControlUnit(NULL), itsCentralProcessingUnit(NULL), itsNVIS(NULL) {
    NOTIFY_CONSTRUCTOR(HighResVideoCam, HighResVideoCam(), 0, System_Analysis_System_Context_HighResVideoCam_HighResVideoCam_SERIALIZE);
}

HighResVideoCam::~HighResVideoCam(void) {
    NOTIFY_DESTRUCTOR(~HighResVideoCam, true);
    cleanUpRelations();
}

const AutoLightControlUnit* HighResVideoCam::getItsAutoLightControlUnit(void) const {
    return itsAutoLightControlUnit;
}

void HighResVideoCam::setItsAutoLightControlUnit(AutoLightControlUnit* const p_AutoLightControlUnit) {
    if(p_AutoLightControlUnit != NULL)
        {
            p_AutoLightControlUnit->_setItsHighResVideoCam(this);
        }
    _setItsAutoLightControlUnit(p_AutoLightControlUnit);
}

const CentralProcessingUnit* HighResVideoCam::getItsCentralProcessingUnit(void) const {
    return itsCentralProcessingUnit;
}

void HighResVideoCam::setItsCentralProcessingUnit(CentralProcessingUnit* const p_CentralProcessingUnit) {
    if(p_CentralProcessingUnit != NULL)
        {
            p_CentralProcessingUnit->_setItsHighResVideoCam(this);
        }
    _setItsCentralProcessingUnit(p_CentralProcessingUnit);
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
    if(itsAutoLightControlUnit != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsAutoLightControlUnit");
            const HighResVideoCam* p_HighResVideoCam = itsAutoLightControlUnit->getItsHighResVideoCam();
            if(p_HighResVideoCam != NULL)
                {
                    itsAutoLightControlUnit->__setItsHighResVideoCam(NULL);
                }
            itsAutoLightControlUnit = NULL;
        }
    if(itsCentralProcessingUnit != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsCentralProcessingUnit");
            const HighResVideoCam* p_HighResVideoCam = itsCentralProcessingUnit->getItsHighResVideoCam();
            if(p_HighResVideoCam != NULL)
                {
                    itsCentralProcessingUnit->__setItsHighResVideoCam(NULL);
                }
            itsCentralProcessingUnit = NULL;
        }
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

void HighResVideoCam::__setItsAutoLightControlUnit(AutoLightControlUnit* const p_AutoLightControlUnit) {
    itsAutoLightControlUnit = p_AutoLightControlUnit;
    if(p_AutoLightControlUnit != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsAutoLightControlUnit", p_AutoLightControlUnit, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsAutoLightControlUnit");
        }
}

void HighResVideoCam::_setItsAutoLightControlUnit(AutoLightControlUnit* const p_AutoLightControlUnit) {
    if(itsAutoLightControlUnit != NULL)
        {
            itsAutoLightControlUnit->__setItsHighResVideoCam(NULL);
        }
    __setItsAutoLightControlUnit(p_AutoLightControlUnit);
}

void HighResVideoCam::_clearItsAutoLightControlUnit(void) {
    NOTIFY_RELATION_CLEARED("itsAutoLightControlUnit");
    itsAutoLightControlUnit = NULL;
}

void HighResVideoCam::__setItsCentralProcessingUnit(CentralProcessingUnit* const p_CentralProcessingUnit) {
    itsCentralProcessingUnit = p_CentralProcessingUnit;
    if(p_CentralProcessingUnit != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsCentralProcessingUnit", p_CentralProcessingUnit, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsCentralProcessingUnit");
        }
}

void HighResVideoCam::_setItsCentralProcessingUnit(CentralProcessingUnit* const p_CentralProcessingUnit) {
    if(itsCentralProcessingUnit != NULL)
        {
            itsCentralProcessingUnit->__setItsHighResVideoCam(NULL);
        }
    __setItsCentralProcessingUnit(p_CentralProcessingUnit);
}

void HighResVideoCam::_clearItsCentralProcessingUnit(void) {
    NOTIFY_RELATION_CLEARED("itsCentralProcessingUnit");
    itsCentralProcessingUnit = NULL;
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
    aomsRelations->addRelation("itsCentralProcessingUnit", false, true);
    if(myReal->itsCentralProcessingUnit)
        {
            aomsRelations->ADD_ITEM(myReal->itsCentralProcessingUnit);
        }
    aomsRelations->addRelation("itsAutoLightControlUnit", false, true);
    if(myReal->itsAutoLightControlUnit)
        {
            aomsRelations->ADD_ITEM(myReal->itsAutoLightControlUnit);
        }
}
//#]

IMPLEMENT_META_P(HighResVideoCam, System_Analysis_System_Context, System_Analysis::System_Context, false, OMAnimatedHighResVideoCam)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\HighResVideoCam.cpp
*********************************************************************/
