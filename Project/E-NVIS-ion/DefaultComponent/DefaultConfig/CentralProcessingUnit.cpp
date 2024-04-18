/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20235613
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: CentralProcessingUnit
//!	Generated Date	: Thu, 18, Apr 2024  
	File Path	: DefaultComponent\DefaultConfig\CentralProcessingUnit.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "CentralProcessingUnit.h"
//## link itsHeadlights
#include "Headlights.h"
//## link itsHighResVideoCam
#include "HighResVideoCam.h"
//## link itsInfraredFilter
#include "InfraredFilter.h"
//## link itsNVIS
#include "NVIS.h"
//#[ ignore
#define System_Analysis_System_Context_CentralProcessingUnit_CentralProcessingUnit_SERIALIZE OM_NO_OP
//#]

//## package System_Analysis::System_Context

//## class CentralProcessingUnit
CentralProcessingUnit::CentralProcessingUnit(void) : itsHeadlights(NULL), itsHeadlights_1(NULL), itsHighResVideoCam(NULL), itsInfraredFilter(NULL), itsNVIS(NULL) {
    NOTIFY_CONSTRUCTOR(CentralProcessingUnit, CentralProcessingUnit(), 0, System_Analysis_System_Context_CentralProcessingUnit_CentralProcessingUnit_SERIALIZE);
}

CentralProcessingUnit::~CentralProcessingUnit(void) {
    NOTIFY_DESTRUCTOR(~CentralProcessingUnit, true);
    cleanUpRelations();
}

const Headlights* CentralProcessingUnit::getItsHeadlights(void) const {
    return itsHeadlights;
}

void CentralProcessingUnit::setItsHeadlights(Headlights* const p_Headlights) {
    if(p_Headlights != NULL)
        {
            p_Headlights->_setItsCentralProcessingUnit(this);
        }
    _setItsHeadlights(p_Headlights);
}

const Headlights* CentralProcessingUnit::getItsHeadlights_1(void) const {
    return itsHeadlights_1;
}

void CentralProcessingUnit::setItsHeadlights_1(Headlights* const p_Headlights) {
    if(p_Headlights != NULL)
        {
            p_Headlights->_setItsCentralProcessingUnit_1(this);
        }
    _setItsHeadlights_1(p_Headlights);
}

const HighResVideoCam* CentralProcessingUnit::getItsHighResVideoCam(void) const {
    return itsHighResVideoCam;
}

void CentralProcessingUnit::setItsHighResVideoCam(HighResVideoCam* const p_HighResVideoCam) {
    if(p_HighResVideoCam != NULL)
        {
            p_HighResVideoCam->_setItsCentralProcessingUnit(this);
        }
    _setItsHighResVideoCam(p_HighResVideoCam);
}

const InfraredFilter* CentralProcessingUnit::getItsInfraredFilter(void) const {
    return itsInfraredFilter;
}

void CentralProcessingUnit::setItsInfraredFilter(InfraredFilter* const p_InfraredFilter) {
    if(p_InfraredFilter != NULL)
        {
            p_InfraredFilter->_setItsCentralProcessingUnit(this);
        }
    _setItsInfraredFilter(p_InfraredFilter);
}

const NVIS* CentralProcessingUnit::getItsNVIS(void) const {
    return itsNVIS;
}

void CentralProcessingUnit::setItsNVIS(NVIS* const p_NVIS) {
    if(p_NVIS != NULL)
        {
            p_NVIS->_setItsCentralProcessingUnit(this);
        }
    _setItsNVIS(p_NVIS);
}

void CentralProcessingUnit::cleanUpRelations(void) {
    if(itsHeadlights != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsHeadlights");
            const CentralProcessingUnit* p_CentralProcessingUnit = itsHeadlights->getItsCentralProcessingUnit();
            if(p_CentralProcessingUnit != NULL)
                {
                    itsHeadlights->__setItsCentralProcessingUnit(NULL);
                }
            itsHeadlights = NULL;
        }
    if(itsHeadlights_1 != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsHeadlights_1");
            const CentralProcessingUnit* p_CentralProcessingUnit = itsHeadlights_1->getItsCentralProcessingUnit_1();
            if(p_CentralProcessingUnit != NULL)
                {
                    itsHeadlights_1->__setItsCentralProcessingUnit_1(NULL);
                }
            itsHeadlights_1 = NULL;
        }
    if(itsHighResVideoCam != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsHighResVideoCam");
            const CentralProcessingUnit* p_CentralProcessingUnit = itsHighResVideoCam->getItsCentralProcessingUnit();
            if(p_CentralProcessingUnit != NULL)
                {
                    itsHighResVideoCam->__setItsCentralProcessingUnit(NULL);
                }
            itsHighResVideoCam = NULL;
        }
    if(itsInfraredFilter != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsInfraredFilter");
            const CentralProcessingUnit* p_CentralProcessingUnit = itsInfraredFilter->getItsCentralProcessingUnit();
            if(p_CentralProcessingUnit != NULL)
                {
                    itsInfraredFilter->__setItsCentralProcessingUnit(NULL);
                }
            itsInfraredFilter = NULL;
        }
    if(itsNVIS != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsNVIS");
            const CentralProcessingUnit* p_CentralProcessingUnit = itsNVIS->getItsCentralProcessingUnit();
            if(p_CentralProcessingUnit != NULL)
                {
                    itsNVIS->__setItsCentralProcessingUnit(NULL);
                }
            itsNVIS = NULL;
        }
}

void CentralProcessingUnit::__setItsHeadlights(Headlights* const p_Headlights) {
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

void CentralProcessingUnit::_setItsHeadlights(Headlights* const p_Headlights) {
    if(itsHeadlights != NULL)
        {
            itsHeadlights->__setItsCentralProcessingUnit(NULL);
        }
    __setItsHeadlights(p_Headlights);
}

void CentralProcessingUnit::_clearItsHeadlights(void) {
    NOTIFY_RELATION_CLEARED("itsHeadlights");
    itsHeadlights = NULL;
}

void CentralProcessingUnit::__setItsHeadlights_1(Headlights* const p_Headlights) {
    itsHeadlights_1 = p_Headlights;
    if(p_Headlights != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsHeadlights_1", p_Headlights, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsHeadlights_1");
        }
}

void CentralProcessingUnit::_setItsHeadlights_1(Headlights* const p_Headlights) {
    if(itsHeadlights_1 != NULL)
        {
            itsHeadlights_1->__setItsCentralProcessingUnit_1(NULL);
        }
    __setItsHeadlights_1(p_Headlights);
}

void CentralProcessingUnit::_clearItsHeadlights_1(void) {
    NOTIFY_RELATION_CLEARED("itsHeadlights_1");
    itsHeadlights_1 = NULL;
}

void CentralProcessingUnit::__setItsHighResVideoCam(HighResVideoCam* const p_HighResVideoCam) {
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

void CentralProcessingUnit::_setItsHighResVideoCam(HighResVideoCam* const p_HighResVideoCam) {
    if(itsHighResVideoCam != NULL)
        {
            itsHighResVideoCam->__setItsCentralProcessingUnit(NULL);
        }
    __setItsHighResVideoCam(p_HighResVideoCam);
}

void CentralProcessingUnit::_clearItsHighResVideoCam(void) {
    NOTIFY_RELATION_CLEARED("itsHighResVideoCam");
    itsHighResVideoCam = NULL;
}

void CentralProcessingUnit::__setItsInfraredFilter(InfraredFilter* const p_InfraredFilter) {
    itsInfraredFilter = p_InfraredFilter;
    if(p_InfraredFilter != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsInfraredFilter", p_InfraredFilter, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsInfraredFilter");
        }
}

void CentralProcessingUnit::_setItsInfraredFilter(InfraredFilter* const p_InfraredFilter) {
    if(itsInfraredFilter != NULL)
        {
            itsInfraredFilter->__setItsCentralProcessingUnit(NULL);
        }
    __setItsInfraredFilter(p_InfraredFilter);
}

void CentralProcessingUnit::_clearItsInfraredFilter(void) {
    NOTIFY_RELATION_CLEARED("itsInfraredFilter");
    itsInfraredFilter = NULL;
}

void CentralProcessingUnit::__setItsNVIS(NVIS* const p_NVIS) {
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

void CentralProcessingUnit::_setItsNVIS(NVIS* const p_NVIS) {
    if(itsNVIS != NULL)
        {
            itsNVIS->__setItsCentralProcessingUnit(NULL);
        }
    __setItsNVIS(p_NVIS);
}

void CentralProcessingUnit::_clearItsNVIS(void) {
    NOTIFY_RELATION_CLEARED("itsNVIS");
    itsNVIS = NULL;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedCentralProcessingUnit::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsNVIS", false, true);
    if(myReal->itsNVIS)
        {
            aomsRelations->ADD_ITEM(myReal->itsNVIS);
        }
    aomsRelations->addRelation("itsInfraredFilter", false, true);
    if(myReal->itsInfraredFilter)
        {
            aomsRelations->ADD_ITEM(myReal->itsInfraredFilter);
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
    aomsRelations->addRelation("itsHeadlights_1", false, true);
    if(myReal->itsHeadlights_1)
        {
            aomsRelations->ADD_ITEM(myReal->itsHeadlights_1);
        }
}
//#]

IMPLEMENT_META_P(CentralProcessingUnit, System_Analysis_System_Context, System_Analysis::System_Context, false, OMAnimatedCentralProcessingUnit)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\CentralProcessingUnit.cpp
*********************************************************************/
