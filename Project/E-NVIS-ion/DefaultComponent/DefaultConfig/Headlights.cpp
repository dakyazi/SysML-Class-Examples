/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20235613
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Headlights
//!	Generated Date	: Thu, 18, Apr 2024  
	File Path	: DefaultComponent\DefaultConfig\Headlights.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "Headlights.h"
//## link itsAutoLightControlUnit
#include "AutoLightControlUnit.h"
//## link itsCentralProcessingUnit
#include "CentralProcessingUnit.h"
//## link itsNVIS
#include "NVIS.h"
//#[ ignore
#define System_Analysis_System_Context_Headlights_Headlights_SERIALIZE OM_NO_OP
//#]

//## package System_Analysis::System_Context

//## class Headlights
Headlights::Headlights(void) : itsAutoLightControlUnit(NULL), itsCentralProcessingUnit(NULL), itsCentralProcessingUnit_1(NULL), itsNVIS(NULL) {
    NOTIFY_CONSTRUCTOR(Headlights, Headlights(), 0, System_Analysis_System_Context_Headlights_Headlights_SERIALIZE);
}

Headlights::~Headlights(void) {
    NOTIFY_DESTRUCTOR(~Headlights, true);
    cleanUpRelations();
}

const AutoLightControlUnit* Headlights::getItsAutoLightControlUnit(void) const {
    return itsAutoLightControlUnit;
}

void Headlights::setItsAutoLightControlUnit(AutoLightControlUnit* const p_AutoLightControlUnit) {
    if(p_AutoLightControlUnit != NULL)
        {
            p_AutoLightControlUnit->_setItsHeadlights(this);
        }
    _setItsAutoLightControlUnit(p_AutoLightControlUnit);
}

const CentralProcessingUnit* Headlights::getItsCentralProcessingUnit(void) const {
    return itsCentralProcessingUnit;
}

void Headlights::setItsCentralProcessingUnit(CentralProcessingUnit* const p_CentralProcessingUnit) {
    if(p_CentralProcessingUnit != NULL)
        {
            p_CentralProcessingUnit->_setItsHeadlights(this);
        }
    _setItsCentralProcessingUnit(p_CentralProcessingUnit);
}

const CentralProcessingUnit* Headlights::getItsCentralProcessingUnit_1(void) const {
    return itsCentralProcessingUnit_1;
}

void Headlights::setItsCentralProcessingUnit_1(CentralProcessingUnit* const p_CentralProcessingUnit) {
    if(p_CentralProcessingUnit != NULL)
        {
            p_CentralProcessingUnit->_setItsHeadlights_1(this);
        }
    _setItsCentralProcessingUnit_1(p_CentralProcessingUnit);
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
    if(itsAutoLightControlUnit != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsAutoLightControlUnit");
            const Headlights* p_Headlights = itsAutoLightControlUnit->getItsHeadlights();
            if(p_Headlights != NULL)
                {
                    itsAutoLightControlUnit->__setItsHeadlights(NULL);
                }
            itsAutoLightControlUnit = NULL;
        }
    if(itsCentralProcessingUnit != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsCentralProcessingUnit");
            const Headlights* p_Headlights = itsCentralProcessingUnit->getItsHeadlights();
            if(p_Headlights != NULL)
                {
                    itsCentralProcessingUnit->__setItsHeadlights(NULL);
                }
            itsCentralProcessingUnit = NULL;
        }
    if(itsCentralProcessingUnit_1 != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsCentralProcessingUnit_1");
            const Headlights* p_Headlights = itsCentralProcessingUnit_1->getItsHeadlights_1();
            if(p_Headlights != NULL)
                {
                    itsCentralProcessingUnit_1->__setItsHeadlights_1(NULL);
                }
            itsCentralProcessingUnit_1 = NULL;
        }
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

void Headlights::__setItsAutoLightControlUnit(AutoLightControlUnit* const p_AutoLightControlUnit) {
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

void Headlights::_setItsAutoLightControlUnit(AutoLightControlUnit* const p_AutoLightControlUnit) {
    if(itsAutoLightControlUnit != NULL)
        {
            itsAutoLightControlUnit->__setItsHeadlights(NULL);
        }
    __setItsAutoLightControlUnit(p_AutoLightControlUnit);
}

void Headlights::_clearItsAutoLightControlUnit(void) {
    NOTIFY_RELATION_CLEARED("itsAutoLightControlUnit");
    itsAutoLightControlUnit = NULL;
}

void Headlights::__setItsCentralProcessingUnit(CentralProcessingUnit* const p_CentralProcessingUnit) {
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

void Headlights::_setItsCentralProcessingUnit(CentralProcessingUnit* const p_CentralProcessingUnit) {
    if(itsCentralProcessingUnit != NULL)
        {
            itsCentralProcessingUnit->__setItsHeadlights(NULL);
        }
    __setItsCentralProcessingUnit(p_CentralProcessingUnit);
}

void Headlights::_clearItsCentralProcessingUnit(void) {
    NOTIFY_RELATION_CLEARED("itsCentralProcessingUnit");
    itsCentralProcessingUnit = NULL;
}

void Headlights::__setItsCentralProcessingUnit_1(CentralProcessingUnit* const p_CentralProcessingUnit) {
    itsCentralProcessingUnit_1 = p_CentralProcessingUnit;
    if(p_CentralProcessingUnit != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsCentralProcessingUnit_1", p_CentralProcessingUnit, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsCentralProcessingUnit_1");
        }
}

void Headlights::_setItsCentralProcessingUnit_1(CentralProcessingUnit* const p_CentralProcessingUnit) {
    if(itsCentralProcessingUnit_1 != NULL)
        {
            itsCentralProcessingUnit_1->__setItsHeadlights_1(NULL);
        }
    __setItsCentralProcessingUnit_1(p_CentralProcessingUnit);
}

void Headlights::_clearItsCentralProcessingUnit_1(void) {
    NOTIFY_RELATION_CLEARED("itsCentralProcessingUnit_1");
    itsCentralProcessingUnit_1 = NULL;
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
    aomsRelations->addRelation("itsCentralProcessingUnit_1", false, true);
    if(myReal->itsCentralProcessingUnit_1)
        {
            aomsRelations->ADD_ITEM(myReal->itsCentralProcessingUnit_1);
        }
}
//#]

IMPLEMENT_META_P(Headlights, System_Analysis_System_Context, System_Analysis::System_Context, false, OMAnimatedHeadlights)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Headlights.cpp
*********************************************************************/
