/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20235613
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: TMS
//!	Generated Date	: Mon, 15, Apr 2024  
	File Path	: DefaultComponent\DefaultConfig\TMS.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "TMS.h"
//## link itsCarOccupant
#include "CarOccupant.h"
//## link itsCommunicationSystem
#include "CommunicationSystem.h"
//## link itsConstraints
#include "Constraints.h"
//## link itsCoolingSystem
#include "CoolingSystem.h"
//## link itsHeatingSystem
#include "HeatingSystem.h"
//## link itsNaturalEnvironment
#include "NaturalEnvironment.h"
//## link itsPowerSource
#include "PowerSource.h"
//## link itsPresenceSensor
#include "PresenceSensor.h"
//## link itsStakeholder
#include "Stakeholder.h"
//## link itsStandard
#include "Standard.h"
//## link itsTempSensor
#include "TempSensor.h"
//#[ ignore
#define System_Analysis_System_Context_TMS_TMS_SERIALIZE OM_NO_OP
//#]

//## package System_Analysis::System_Context

//## class TMS
TMS::TMS(void) : itsCarOccupant(NULL), itsCommunicationSystem(NULL), itsConstraints(NULL), itsCoolingSystem(NULL), itsHeatingSystem(NULL), itsNaturalEnvironment(NULL), itsPowerSource(NULL), itsPresenceSensor(NULL), itsStakeholder(NULL), itsStandard(NULL), itsTempSensor(NULL) {
    NOTIFY_CONSTRUCTOR(TMS, TMS(), 0, System_Analysis_System_Context_TMS_TMS_SERIALIZE);
}

TMS::~TMS(void) {
    NOTIFY_DESTRUCTOR(~TMS, true);
    cleanUpRelations();
}

const CarOccupant* TMS::getItsCarOccupant(void) const {
    return itsCarOccupant;
}

void TMS::setItsCarOccupant(CarOccupant* const p_CarOccupant) {
    if(p_CarOccupant != NULL)
        {
            p_CarOccupant->_setItsTMS(this);
        }
    _setItsCarOccupant(p_CarOccupant);
}

const CommunicationSystem* TMS::getItsCommunicationSystem(void) const {
    return itsCommunicationSystem;
}

void TMS::setItsCommunicationSystem(CommunicationSystem* const p_CommunicationSystem) {
    if(p_CommunicationSystem != NULL)
        {
            p_CommunicationSystem->_setItsTMS(this);
        }
    _setItsCommunicationSystem(p_CommunicationSystem);
}

const Constraints* TMS::getItsConstraints(void) const {
    return itsConstraints;
}

void TMS::setItsConstraints(Constraints* const p_Constraints) {
    if(p_Constraints != NULL)
        {
            p_Constraints->_setItsTMS(this);
        }
    _setItsConstraints(p_Constraints);
}

const CoolingSystem* TMS::getItsCoolingSystem(void) const {
    return itsCoolingSystem;
}

void TMS::setItsCoolingSystem(CoolingSystem* const p_CoolingSystem) {
    if(p_CoolingSystem != NULL)
        {
            p_CoolingSystem->_setItsTMS(this);
        }
    _setItsCoolingSystem(p_CoolingSystem);
}

const HeatingSystem* TMS::getItsHeatingSystem(void) const {
    return itsHeatingSystem;
}

void TMS::setItsHeatingSystem(HeatingSystem* const p_HeatingSystem) {
    if(p_HeatingSystem != NULL)
        {
            p_HeatingSystem->_setItsTMS(this);
        }
    _setItsHeatingSystem(p_HeatingSystem);
}

const NaturalEnvironment* TMS::getItsNaturalEnvironment(void) const {
    return itsNaturalEnvironment;
}

void TMS::setItsNaturalEnvironment(NaturalEnvironment* const p_NaturalEnvironment) {
    if(p_NaturalEnvironment != NULL)
        {
            p_NaturalEnvironment->_setItsTMS(this);
        }
    _setItsNaturalEnvironment(p_NaturalEnvironment);
}

const PowerSource* TMS::getItsPowerSource(void) const {
    return itsPowerSource;
}

void TMS::setItsPowerSource(PowerSource* const p_PowerSource) {
    if(p_PowerSource != NULL)
        {
            p_PowerSource->_setItsTMS(this);
        }
    _setItsPowerSource(p_PowerSource);
}

const PresenceSensor* TMS::getItsPresenceSensor(void) const {
    return itsPresenceSensor;
}

void TMS::setItsPresenceSensor(PresenceSensor* const p_PresenceSensor) {
    if(p_PresenceSensor != NULL)
        {
            p_PresenceSensor->_setItsTMS(this);
        }
    _setItsPresenceSensor(p_PresenceSensor);
}

const Stakeholder* TMS::getItsStakeholder(void) const {
    return itsStakeholder;
}

void TMS::setItsStakeholder(Stakeholder* const p_Stakeholder) {
    if(p_Stakeholder != NULL)
        {
            p_Stakeholder->_setItsTMS(this);
        }
    _setItsStakeholder(p_Stakeholder);
}

const Standard* TMS::getItsStandard(void) const {
    return itsStandard;
}

void TMS::setItsStandard(Standard* const p_Standard) {
    if(p_Standard != NULL)
        {
            p_Standard->_setItsTMS(this);
        }
    _setItsStandard(p_Standard);
}

const TempSensor* TMS::getItsTempSensor(void) const {
    return itsTempSensor;
}

void TMS::setItsTempSensor(TempSensor* const p_TempSensor) {
    if(p_TempSensor != NULL)
        {
            p_TempSensor->_setItsTMS(this);
        }
    _setItsTempSensor(p_TempSensor);
}

void TMS::cleanUpRelations(void) {
    if(itsCarOccupant != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsCarOccupant");
            const TMS* p_TMS = itsCarOccupant->getItsTMS();
            if(p_TMS != NULL)
                {
                    itsCarOccupant->__setItsTMS(NULL);
                }
            itsCarOccupant = NULL;
        }
    if(itsCommunicationSystem != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsCommunicationSystem");
            const TMS* p_TMS = itsCommunicationSystem->getItsTMS();
            if(p_TMS != NULL)
                {
                    itsCommunicationSystem->__setItsTMS(NULL);
                }
            itsCommunicationSystem = NULL;
        }
    if(itsConstraints != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsConstraints");
            const TMS* p_TMS = itsConstraints->getItsTMS();
            if(p_TMS != NULL)
                {
                    itsConstraints->__setItsTMS(NULL);
                }
            itsConstraints = NULL;
        }
    if(itsCoolingSystem != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsCoolingSystem");
            const TMS* p_TMS = itsCoolingSystem->getItsTMS();
            if(p_TMS != NULL)
                {
                    itsCoolingSystem->__setItsTMS(NULL);
                }
            itsCoolingSystem = NULL;
        }
    if(itsHeatingSystem != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsHeatingSystem");
            const TMS* p_TMS = itsHeatingSystem->getItsTMS();
            if(p_TMS != NULL)
                {
                    itsHeatingSystem->__setItsTMS(NULL);
                }
            itsHeatingSystem = NULL;
        }
    if(itsNaturalEnvironment != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsNaturalEnvironment");
            const TMS* p_TMS = itsNaturalEnvironment->getItsTMS();
            if(p_TMS != NULL)
                {
                    itsNaturalEnvironment->__setItsTMS(NULL);
                }
            itsNaturalEnvironment = NULL;
        }
    if(itsPowerSource != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsPowerSource");
            const TMS* p_TMS = itsPowerSource->getItsTMS();
            if(p_TMS != NULL)
                {
                    itsPowerSource->__setItsTMS(NULL);
                }
            itsPowerSource = NULL;
        }
    if(itsPresenceSensor != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsPresenceSensor");
            const TMS* p_TMS = itsPresenceSensor->getItsTMS();
            if(p_TMS != NULL)
                {
                    itsPresenceSensor->__setItsTMS(NULL);
                }
            itsPresenceSensor = NULL;
        }
    if(itsStakeholder != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsStakeholder");
            const TMS* p_TMS = itsStakeholder->getItsTMS();
            if(p_TMS != NULL)
                {
                    itsStakeholder->__setItsTMS(NULL);
                }
            itsStakeholder = NULL;
        }
    if(itsStandard != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsStandard");
            const TMS* p_TMS = itsStandard->getItsTMS();
            if(p_TMS != NULL)
                {
                    itsStandard->__setItsTMS(NULL);
                }
            itsStandard = NULL;
        }
    if(itsTempSensor != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsTempSensor");
            const TMS* p_TMS = itsTempSensor->getItsTMS();
            if(p_TMS != NULL)
                {
                    itsTempSensor->__setItsTMS(NULL);
                }
            itsTempSensor = NULL;
        }
}

void TMS::__setItsCarOccupant(CarOccupant* const p_CarOccupant) {
    itsCarOccupant = p_CarOccupant;
    if(p_CarOccupant != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsCarOccupant", p_CarOccupant, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsCarOccupant");
        }
}

void TMS::_setItsCarOccupant(CarOccupant* const p_CarOccupant) {
    if(itsCarOccupant != NULL)
        {
            itsCarOccupant->__setItsTMS(NULL);
        }
    __setItsCarOccupant(p_CarOccupant);
}

void TMS::_clearItsCarOccupant(void) {
    NOTIFY_RELATION_CLEARED("itsCarOccupant");
    itsCarOccupant = NULL;
}

void TMS::__setItsCommunicationSystem(CommunicationSystem* const p_CommunicationSystem) {
    itsCommunicationSystem = p_CommunicationSystem;
    if(p_CommunicationSystem != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsCommunicationSystem", p_CommunicationSystem, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsCommunicationSystem");
        }
}

void TMS::_setItsCommunicationSystem(CommunicationSystem* const p_CommunicationSystem) {
    if(itsCommunicationSystem != NULL)
        {
            itsCommunicationSystem->__setItsTMS(NULL);
        }
    __setItsCommunicationSystem(p_CommunicationSystem);
}

void TMS::_clearItsCommunicationSystem(void) {
    NOTIFY_RELATION_CLEARED("itsCommunicationSystem");
    itsCommunicationSystem = NULL;
}

void TMS::__setItsConstraints(Constraints* const p_Constraints) {
    itsConstraints = p_Constraints;
    if(p_Constraints != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsConstraints", p_Constraints, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsConstraints");
        }
}

void TMS::_setItsConstraints(Constraints* const p_Constraints) {
    if(itsConstraints != NULL)
        {
            itsConstraints->__setItsTMS(NULL);
        }
    __setItsConstraints(p_Constraints);
}

void TMS::_clearItsConstraints(void) {
    NOTIFY_RELATION_CLEARED("itsConstraints");
    itsConstraints = NULL;
}

void TMS::__setItsCoolingSystem(CoolingSystem* const p_CoolingSystem) {
    itsCoolingSystem = p_CoolingSystem;
    if(p_CoolingSystem != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsCoolingSystem", p_CoolingSystem, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsCoolingSystem");
        }
}

void TMS::_setItsCoolingSystem(CoolingSystem* const p_CoolingSystem) {
    if(itsCoolingSystem != NULL)
        {
            itsCoolingSystem->__setItsTMS(NULL);
        }
    __setItsCoolingSystem(p_CoolingSystem);
}

void TMS::_clearItsCoolingSystem(void) {
    NOTIFY_RELATION_CLEARED("itsCoolingSystem");
    itsCoolingSystem = NULL;
}

void TMS::__setItsHeatingSystem(HeatingSystem* const p_HeatingSystem) {
    itsHeatingSystem = p_HeatingSystem;
    if(p_HeatingSystem != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsHeatingSystem", p_HeatingSystem, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsHeatingSystem");
        }
}

void TMS::_setItsHeatingSystem(HeatingSystem* const p_HeatingSystem) {
    if(itsHeatingSystem != NULL)
        {
            itsHeatingSystem->__setItsTMS(NULL);
        }
    __setItsHeatingSystem(p_HeatingSystem);
}

void TMS::_clearItsHeatingSystem(void) {
    NOTIFY_RELATION_CLEARED("itsHeatingSystem");
    itsHeatingSystem = NULL;
}

void TMS::__setItsNaturalEnvironment(NaturalEnvironment* const p_NaturalEnvironment) {
    itsNaturalEnvironment = p_NaturalEnvironment;
    if(p_NaturalEnvironment != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsNaturalEnvironment", p_NaturalEnvironment, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsNaturalEnvironment");
        }
}

void TMS::_setItsNaturalEnvironment(NaturalEnvironment* const p_NaturalEnvironment) {
    if(itsNaturalEnvironment != NULL)
        {
            itsNaturalEnvironment->__setItsTMS(NULL);
        }
    __setItsNaturalEnvironment(p_NaturalEnvironment);
}

void TMS::_clearItsNaturalEnvironment(void) {
    NOTIFY_RELATION_CLEARED("itsNaturalEnvironment");
    itsNaturalEnvironment = NULL;
}

void TMS::__setItsPowerSource(PowerSource* const p_PowerSource) {
    itsPowerSource = p_PowerSource;
    if(p_PowerSource != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsPowerSource", p_PowerSource, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsPowerSource");
        }
}

void TMS::_setItsPowerSource(PowerSource* const p_PowerSource) {
    if(itsPowerSource != NULL)
        {
            itsPowerSource->__setItsTMS(NULL);
        }
    __setItsPowerSource(p_PowerSource);
}

void TMS::_clearItsPowerSource(void) {
    NOTIFY_RELATION_CLEARED("itsPowerSource");
    itsPowerSource = NULL;
}

void TMS::__setItsPresenceSensor(PresenceSensor* const p_PresenceSensor) {
    itsPresenceSensor = p_PresenceSensor;
    if(p_PresenceSensor != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsPresenceSensor", p_PresenceSensor, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsPresenceSensor");
        }
}

void TMS::_setItsPresenceSensor(PresenceSensor* const p_PresenceSensor) {
    if(itsPresenceSensor != NULL)
        {
            itsPresenceSensor->__setItsTMS(NULL);
        }
    __setItsPresenceSensor(p_PresenceSensor);
}

void TMS::_clearItsPresenceSensor(void) {
    NOTIFY_RELATION_CLEARED("itsPresenceSensor");
    itsPresenceSensor = NULL;
}

void TMS::__setItsStakeholder(Stakeholder* const p_Stakeholder) {
    itsStakeholder = p_Stakeholder;
    if(p_Stakeholder != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsStakeholder", p_Stakeholder, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsStakeholder");
        }
}

void TMS::_setItsStakeholder(Stakeholder* const p_Stakeholder) {
    if(itsStakeholder != NULL)
        {
            itsStakeholder->__setItsTMS(NULL);
        }
    __setItsStakeholder(p_Stakeholder);
}

void TMS::_clearItsStakeholder(void) {
    NOTIFY_RELATION_CLEARED("itsStakeholder");
    itsStakeholder = NULL;
}

void TMS::__setItsStandard(Standard* const p_Standard) {
    itsStandard = p_Standard;
    if(p_Standard != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsStandard", p_Standard, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsStandard");
        }
}

void TMS::_setItsStandard(Standard* const p_Standard) {
    if(itsStandard != NULL)
        {
            itsStandard->__setItsTMS(NULL);
        }
    __setItsStandard(p_Standard);
}

void TMS::_clearItsStandard(void) {
    NOTIFY_RELATION_CLEARED("itsStandard");
    itsStandard = NULL;
}

void TMS::__setItsTempSensor(TempSensor* const p_TempSensor) {
    itsTempSensor = p_TempSensor;
    if(p_TempSensor != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsTempSensor", p_TempSensor, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsTempSensor");
        }
}

void TMS::_setItsTempSensor(TempSensor* const p_TempSensor) {
    if(itsTempSensor != NULL)
        {
            itsTempSensor->__setItsTMS(NULL);
        }
    __setItsTempSensor(p_TempSensor);
}

void TMS::_clearItsTempSensor(void) {
    NOTIFY_RELATION_CLEARED("itsTempSensor");
    itsTempSensor = NULL;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedTMS::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsStakeholder", false, true);
    if(myReal->itsStakeholder)
        {
            aomsRelations->ADD_ITEM(myReal->itsStakeholder);
        }
    aomsRelations->addRelation("itsStandard", false, true);
    if(myReal->itsStandard)
        {
            aomsRelations->ADD_ITEM(myReal->itsStandard);
        }
    aomsRelations->addRelation("itsNaturalEnvironment", false, true);
    if(myReal->itsNaturalEnvironment)
        {
            aomsRelations->ADD_ITEM(myReal->itsNaturalEnvironment);
        }
    aomsRelations->addRelation("itsConstraints", false, true);
    if(myReal->itsConstraints)
        {
            aomsRelations->ADD_ITEM(myReal->itsConstraints);
        }
    aomsRelations->addRelation("itsCommunicationSystem", false, true);
    if(myReal->itsCommunicationSystem)
        {
            aomsRelations->ADD_ITEM(myReal->itsCommunicationSystem);
        }
    aomsRelations->addRelation("itsHeatingSystem", false, true);
    if(myReal->itsHeatingSystem)
        {
            aomsRelations->ADD_ITEM(myReal->itsHeatingSystem);
        }
    aomsRelations->addRelation("itsCoolingSystem", false, true);
    if(myReal->itsCoolingSystem)
        {
            aomsRelations->ADD_ITEM(myReal->itsCoolingSystem);
        }
    aomsRelations->addRelation("itsTempSensor", false, true);
    if(myReal->itsTempSensor)
        {
            aomsRelations->ADD_ITEM(myReal->itsTempSensor);
        }
    aomsRelations->addRelation("itsPresenceSensor", false, true);
    if(myReal->itsPresenceSensor)
        {
            aomsRelations->ADD_ITEM(myReal->itsPresenceSensor);
        }
    aomsRelations->addRelation("itsCarOccupant", false, true);
    if(myReal->itsCarOccupant)
        {
            aomsRelations->ADD_ITEM(myReal->itsCarOccupant);
        }
    aomsRelations->addRelation("itsPowerSource", false, true);
    if(myReal->itsPowerSource)
        {
            aomsRelations->ADD_ITEM(myReal->itsPowerSource);
        }
}
//#]

IMPLEMENT_META_P(TMS, System_Analysis_System_Context, System_Analysis::System_Context, false, OMAnimatedTMS)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\TMS.cpp
*********************************************************************/
