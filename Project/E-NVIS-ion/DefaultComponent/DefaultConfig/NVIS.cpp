/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20235613
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: NVIS
//!	Generated Date	: Thu, 18, Apr 2024  
	File Path	: DefaultComponent\DefaultConfig\NVIS.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX

#define _OMSTATECHART_ANIMATED
//#]

//## auto_generated
#include "NVIS.h"
//## link itsAutoLightControlUnit
#include "AutoLightControlUnit.h"
//## link itsCar
#include "Car.h"
//## link itsCentralProcessingUnit
#include "CentralProcessingUnit.h"
//## link itsCommunicationSystem
#include "CommunicationSystem.h"
//## link itsConstraints
#include "Constraints.h"
//## link itsHeadlights
#include "Headlights.h"
//## link itsHighResVideoCam
#include "HighResVideoCam.h"
//## link itsInfraredFilter
#include "InfraredFilter.h"
//## link itsMonitoringScreen
#include "MonitoringScreen.h"
//## link itsNaturalEnvironment
#include "NaturalEnvironment.h"
//## link itsStakeholder
#include "Stakeholder.h"
//## link itsStandards
#include "Standards.h"
//#[ ignore
#define System_Analysis_System_Context_NVIS_NVIS_SERIALIZE OM_NO_OP

#define System_Analysis_System_Context_NVIS_getSpeedFromCar_SERIALIZE OM_NO_OP

#define System_Analysis_System_Context_NVIS_indicateHeadlightoff_SERIALIZE OM_NO_OP

#define System_Analysis_System_Context_NVIS_indicateNVISon_SERIALIZE OM_NO_OP

#define System_Analysis_System_Context_NVIS_indicateSystemFault_SERIALIZE OM_NO_OP

#define System_Analysis_System_Context_NVIS_runFogLampCheck_SERIALIZE OM_NO_OP

#define System_Analysis_System_Context_NVIS_runFogModeCheck_SERIALIZE OM_NO_OP

#define System_Analysis_System_Context_NVIS_runHeadlightCheck_SERIALIZE OM_NO_OP

#define System_Analysis_System_Context_NVIS_runSpeedCheck_SERIALIZE OM_NO_OP

#define System_Analysis_System_Context_NVIS_runSystemCheck_SERIALIZE OM_NO_OP

#define System_Analysis_System_Context_NVIS_runWindingCheck_SERIALIZE OM_NO_OP

#define System_Analysis_System_Context_NVIS_turnCamOn_SERIALIZE OM_NO_OP

#define System_Analysis_System_Context_NVIS_turnMonitorOn_SERIALIZE OM_NO_OP

#define System_Analysis_System_Context_NVIS_turnOnFogMode_SERIALIZE OM_NO_OP

#define System_Analysis_System_Context_NVIS_turnOnNormalMode_SERIALIZE OM_NO_OP

#define System_Analysis_System_Context_NVIS_turnOnTrackMode1_SERIALIZE OM_NO_OP

#define System_Analysis_System_Context_NVIS_turnOnTrackMode2_SERIALIZE OM_NO_OP

#define System_Analysis_System_Context_NVIS_turnOnWindingMode_SERIALIZE OM_NO_OP
//#]

//## package System_Analysis::System_Context

//## class NVIS
NVIS::NVIS(IOxfActive* const theActiveContext) : OMReactive(), activeMode(4), fogLamp(false), fogMode(false), headLights(false), speed(80), systemOk(true), winding(false), itsAutoLightControlUnit(NULL), itsCar(NULL), itsCentralProcessingUnit(NULL), itsCommunicationSystem(NULL), itsConstraints(NULL), itsHeadlights(NULL), itsHighResVideoCam(NULL), itsInfraredFilter(NULL), itsMonitoringScreen(NULL), itsNaturalEnvironment(NULL), itsStakeholder(NULL), itsStandards(NULL) {
    NOTIFY_REACTIVE_CONSTRUCTOR(NVIS, NVIS(), 0, System_Analysis_System_Context_NVIS_NVIS_SERIALIZE);
    setActiveContext(theActiveContext, false);
    initStatechart();
}

NVIS::~NVIS(void) {
    NOTIFY_DESTRUCTOR(~NVIS, true);
    cleanUpRelations();
}

void NVIS::getSpeedFromCar(void) {
    NOTIFY_OPERATION(getSpeedFromCar, getSpeedFromCar(), 0, System_Analysis_System_Context_NVIS_getSpeedFromCar_SERIALIZE);
    //#[ operation getSpeedFromCar()
    std::cout << "Requesting speed\n";
    std::cout << "Request accepted\n";
    speed = 80;
    //#]
}

void NVIS::indicateHeadlightoff(void) {
    NOTIFY_OPERATION(indicateHeadlightoff, indicateHeadlightoff(), 0, System_Analysis_System_Context_NVIS_indicateHeadlightoff_SERIALIZE);
    //#[ operation indicateHeadlightoff()
    std::cout<<"Headlights are off!\n";
    //#]
}

void NVIS::indicateNVISon(void) {
    NOTIFY_OPERATION(indicateNVISon, indicateNVISon(), 0, System_Analysis_System_Context_NVIS_indicateNVISon_SERIALIZE);
    //#[ operation indicateNVISon()
    std::cout<<"ENVISion is currently active.\n";
    //#]
}

void NVIS::indicateSystemFault(void) {
    NOTIFY_OPERATION(indicateSystemFault, indicateSystemFault(), 0, System_Analysis_System_Context_NVIS_indicateSystemFault_SERIALIZE);
    //#[ operation indicateSystemFault()
    std::cout<<"System fault\n";
    //#]
}

void NVIS::runFogLampCheck(void) {
    NOTIFY_OPERATION(runFogLampCheck, runFogLampCheck(), 0, System_Analysis_System_Context_NVIS_runFogLampCheck_SERIALIZE);
    //#[ operation runFogLampCheck()
    fogLamp = false;
    //#]
}

void NVIS::runFogModeCheck(void) {
    NOTIFY_OPERATION(runFogModeCheck, runFogModeCheck(), 0, System_Analysis_System_Context_NVIS_runFogModeCheck_SERIALIZE);
    //#[ operation runFogModeCheck()
    fogMode = true;
    //#]
}

void NVIS::runHeadlightCheck(void) {
    NOTIFY_OPERATION(runHeadlightCheck, runHeadlightCheck(), 0, System_Analysis_System_Context_NVIS_runHeadlightCheck_SERIALIZE);
    //#[ operation runHeadlightCheck()
    headLights = true;
    //#]
}

void NVIS::runSpeedCheck(void) {
    NOTIFY_OPERATION(runSpeedCheck, runSpeedCheck(), 0, System_Analysis_System_Context_NVIS_runSpeedCheck_SERIALIZE);
    //#[ operation runSpeedCheck()
    if (rand() % 2){
    speed = speed + 2;}
    else {
    speed = speed - 2;
    }
    //#]
}

void NVIS::runSystemCheck(void) {
    NOTIFY_OPERATION(runSystemCheck, runSystemCheck(), 0, System_Analysis_System_Context_NVIS_runSystemCheck_SERIALIZE);
    //#[ operation runSystemCheck()
    std::cout<<"Running system check.\n";
    systemOk = true;
    std::cout<<"System is OK. \n";
    //#]
}

void NVIS::runWindingCheck(void) {
    NOTIFY_OPERATION(runWindingCheck, runWindingCheck(), 0, System_Analysis_System_Context_NVIS_runWindingCheck_SERIALIZE);
    //#[ operation runWindingCheck()
    winding = rand() % 2;
    //#]
}

void NVIS::turnCamOn(void) {
    NOTIFY_OPERATION(turnCamOn, turnCamOn(), 0, System_Analysis_System_Context_NVIS_turnCamOn_SERIALIZE);
    //#[ operation turnCamOn()
    //#]
}

void NVIS::turnMonitorOn(void) {
    NOTIFY_OPERATION(turnMonitorOn, turnMonitorOn(), 0, System_Analysis_System_Context_NVIS_turnMonitorOn_SERIALIZE);
    //#[ operation turnMonitorOn()
    //#]
}

void NVIS::turnOnFogMode(void) {
    NOTIFY_OPERATION(turnOnFogMode, turnOnFogMode(), 0, System_Analysis_System_Context_NVIS_turnOnFogMode_SERIALIZE);
    //#[ operation turnOnFogMode()
    fogMode = true;
    std::cout<<"Activating fog mode.\n";
    activeMode = 5;
    //#]
}

void NVIS::turnOnNormalMode(void) {
    NOTIFY_OPERATION(turnOnNormalMode, turnOnNormalMode(), 0, System_Analysis_System_Context_NVIS_turnOnNormalMode_SERIALIZE);
    //#[ operation turnOnNormalMode()
    std::cout<<"Activating normal mode.\n";
    activeMode = 4;
    fogMode = false;
    //#]
}

void NVIS::turnOnTrackMode1(void) {
    NOTIFY_OPERATION(turnOnTrackMode1, turnOnTrackMode1(), 0, System_Analysis_System_Context_NVIS_turnOnTrackMode1_SERIALIZE);
    //#[ operation turnOnTrackMode1()
    std::cout<<"Activating track mode 1.\n";
    activeMode = 1;
    fogMode = false;
    //#]
}

void NVIS::turnOnTrackMode2(void) {
    NOTIFY_OPERATION(turnOnTrackMode2, turnOnTrackMode2(), 0, System_Analysis_System_Context_NVIS_turnOnTrackMode2_SERIALIZE);
    //#[ operation turnOnTrackMode2()
    std::cout<<"Activating track mode 2.\n";
    activeMode = 2;
    fogMode = false;
    //#]
}

void NVIS::turnOnWindingMode(void) {
    NOTIFY_OPERATION(turnOnWindingMode, turnOnWindingMode(), 0, System_Analysis_System_Context_NVIS_turnOnWindingMode_SERIALIZE);
    //#[ operation turnOnWindingMode()
    std::cout<<"Activating winding mode.\n";
    activeMode = 3;
    fogMode = false;
    //#]
}

const int NVIS::getActiveMode(void) const {
    return activeMode;
}

void NVIS::setActiveMode(const int p_activeMode) {
    activeMode = p_activeMode;
}

const bool NVIS::getFogLamp(void) const {
    return fogLamp;
}

void NVIS::setFogLamp(const bool p_fogLamp) {
    fogLamp = p_fogLamp;
}

const bool NVIS::getFogMode(void) const {
    return fogMode;
}

void NVIS::setFogMode(const bool p_fogMode) {
    fogMode = p_fogMode;
}

const bool NVIS::getHeadLights(void) const {
    return headLights;
}

void NVIS::setHeadLights(const bool p_headLights) {
    headLights = p_headLights;
}

const int NVIS::getSpeed(void) const {
    return speed;
}

void NVIS::setSpeed(const int p_speed) {
    speed = p_speed;
}

const bool NVIS::getSystemOk(void) const {
    return systemOk;
}

void NVIS::setSystemOk(const bool p_systemOk) {
    systemOk = p_systemOk;
}

const bool NVIS::getWinding(void) const {
    return winding;
}

void NVIS::setWinding(const bool p_winding) {
    winding = p_winding;
}

const AutoLightControlUnit* NVIS::getItsAutoLightControlUnit(void) const {
    return itsAutoLightControlUnit;
}

void NVIS::setItsAutoLightControlUnit(AutoLightControlUnit* const p_AutoLightControlUnit) {
    if(p_AutoLightControlUnit != NULL)
        {
            p_AutoLightControlUnit->_setItsNVIS(this);
        }
    _setItsAutoLightControlUnit(p_AutoLightControlUnit);
}

const Car* NVIS::getItsCar(void) const {
    return itsCar;
}

void NVIS::setItsCar(Car* const p_Car) {
    if(p_Car != NULL)
        {
            p_Car->_setItsNVIS(this);
        }
    _setItsCar(p_Car);
}

const CentralProcessingUnit* NVIS::getItsCentralProcessingUnit(void) const {
    return itsCentralProcessingUnit;
}

void NVIS::setItsCentralProcessingUnit(CentralProcessingUnit* const p_CentralProcessingUnit) {
    if(p_CentralProcessingUnit != NULL)
        {
            p_CentralProcessingUnit->_setItsNVIS(this);
        }
    _setItsCentralProcessingUnit(p_CentralProcessingUnit);
}

const CommunicationSystem* NVIS::getItsCommunicationSystem(void) const {
    return itsCommunicationSystem;
}

void NVIS::setItsCommunicationSystem(CommunicationSystem* const p_CommunicationSystem) {
    if(p_CommunicationSystem != NULL)
        {
            p_CommunicationSystem->_setItsNVIS(this);
        }
    _setItsCommunicationSystem(p_CommunicationSystem);
}

const Constraints* NVIS::getItsConstraints(void) const {
    return itsConstraints;
}

void NVIS::setItsConstraints(Constraints* const p_Constraints) {
    if(p_Constraints != NULL)
        {
            p_Constraints->_setItsNVIS(this);
        }
    _setItsConstraints(p_Constraints);
}

const Headlights* NVIS::getItsHeadlights(void) const {
    return itsHeadlights;
}

void NVIS::setItsHeadlights(Headlights* const p_Headlights) {
    if(p_Headlights != NULL)
        {
            p_Headlights->_setItsNVIS(this);
        }
    _setItsHeadlights(p_Headlights);
}

const HighResVideoCam* NVIS::getItsHighResVideoCam(void) const {
    return itsHighResVideoCam;
}

void NVIS::setItsHighResVideoCam(HighResVideoCam* const p_HighResVideoCam) {
    if(p_HighResVideoCam != NULL)
        {
            p_HighResVideoCam->_setItsNVIS(this);
        }
    _setItsHighResVideoCam(p_HighResVideoCam);
}

const InfraredFilter* NVIS::getItsInfraredFilter(void) const {
    return itsInfraredFilter;
}

void NVIS::setItsInfraredFilter(InfraredFilter* const p_InfraredFilter) {
    if(p_InfraredFilter != NULL)
        {
            p_InfraredFilter->_setItsNVIS(this);
        }
    _setItsInfraredFilter(p_InfraredFilter);
}

const MonitoringScreen* NVIS::getItsMonitoringScreen(void) const {
    return itsMonitoringScreen;
}

void NVIS::setItsMonitoringScreen(MonitoringScreen* const p_MonitoringScreen) {
    if(p_MonitoringScreen != NULL)
        {
            p_MonitoringScreen->_setItsNVIS(this);
        }
    _setItsMonitoringScreen(p_MonitoringScreen);
}

const NaturalEnvironment* NVIS::getItsNaturalEnvironment(void) const {
    return itsNaturalEnvironment;
}

void NVIS::setItsNaturalEnvironment(NaturalEnvironment* const p_NaturalEnvironment) {
    if(p_NaturalEnvironment != NULL)
        {
            p_NaturalEnvironment->_setItsNVIS(this);
        }
    _setItsNaturalEnvironment(p_NaturalEnvironment);
}

const Stakeholder* NVIS::getItsStakeholder(void) const {
    return itsStakeholder;
}

void NVIS::setItsStakeholder(Stakeholder* const p_Stakeholder) {
    if(p_Stakeholder != NULL)
        {
            p_Stakeholder->_setItsNVIS(this);
        }
    _setItsStakeholder(p_Stakeholder);
}

const Standards* NVIS::getItsStandards(void) const {
    return itsStandards;
}

void NVIS::setItsStandards(Standards* const p_Standards) {
    if(p_Standards != NULL)
        {
            p_Standards->_setItsNVIS(this);
        }
    _setItsStandards(p_Standards);
}

bool NVIS::startBehavior(void) {
    bool done = false;
    done = OMReactive::startBehavior();
    return done;
}

void NVIS::initStatechart(void) {
    rootState_subState = OMNonState;
    rootState_active = OMNonState;
    On_subState = OMNonState;
}

void NVIS::cleanUpRelations(void) {
    if(itsAutoLightControlUnit != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsAutoLightControlUnit");
            const NVIS* p_NVIS = itsAutoLightControlUnit->getItsNVIS();
            if(p_NVIS != NULL)
                {
                    itsAutoLightControlUnit->__setItsNVIS(NULL);
                }
            itsAutoLightControlUnit = NULL;
        }
    if(itsCar != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsCar");
            const NVIS* p_NVIS = itsCar->getItsNVIS();
            if(p_NVIS != NULL)
                {
                    itsCar->__setItsNVIS(NULL);
                }
            itsCar = NULL;
        }
    if(itsCentralProcessingUnit != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsCentralProcessingUnit");
            const NVIS* p_NVIS = itsCentralProcessingUnit->getItsNVIS();
            if(p_NVIS != NULL)
                {
                    itsCentralProcessingUnit->__setItsNVIS(NULL);
                }
            itsCentralProcessingUnit = NULL;
        }
    if(itsCommunicationSystem != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsCommunicationSystem");
            const NVIS* p_NVIS = itsCommunicationSystem->getItsNVIS();
            if(p_NVIS != NULL)
                {
                    itsCommunicationSystem->__setItsNVIS(NULL);
                }
            itsCommunicationSystem = NULL;
        }
    if(itsConstraints != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsConstraints");
            const NVIS* p_NVIS = itsConstraints->getItsNVIS();
            if(p_NVIS != NULL)
                {
                    itsConstraints->__setItsNVIS(NULL);
                }
            itsConstraints = NULL;
        }
    if(itsHeadlights != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsHeadlights");
            const NVIS* p_NVIS = itsHeadlights->getItsNVIS();
            if(p_NVIS != NULL)
                {
                    itsHeadlights->__setItsNVIS(NULL);
                }
            itsHeadlights = NULL;
        }
    if(itsHighResVideoCam != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsHighResVideoCam");
            const NVIS* p_NVIS = itsHighResVideoCam->getItsNVIS();
            if(p_NVIS != NULL)
                {
                    itsHighResVideoCam->__setItsNVIS(NULL);
                }
            itsHighResVideoCam = NULL;
        }
    if(itsInfraredFilter != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsInfraredFilter");
            const NVIS* p_NVIS = itsInfraredFilter->getItsNVIS();
            if(p_NVIS != NULL)
                {
                    itsInfraredFilter->__setItsNVIS(NULL);
                }
            itsInfraredFilter = NULL;
        }
    if(itsMonitoringScreen != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsMonitoringScreen");
            const NVIS* p_NVIS = itsMonitoringScreen->getItsNVIS();
            if(p_NVIS != NULL)
                {
                    itsMonitoringScreen->__setItsNVIS(NULL);
                }
            itsMonitoringScreen = NULL;
        }
    if(itsNaturalEnvironment != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsNaturalEnvironment");
            const NVIS* p_NVIS = itsNaturalEnvironment->getItsNVIS();
            if(p_NVIS != NULL)
                {
                    itsNaturalEnvironment->__setItsNVIS(NULL);
                }
            itsNaturalEnvironment = NULL;
        }
    if(itsStakeholder != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsStakeholder");
            const NVIS* p_NVIS = itsStakeholder->getItsNVIS();
            if(p_NVIS != NULL)
                {
                    itsStakeholder->__setItsNVIS(NULL);
                }
            itsStakeholder = NULL;
        }
    if(itsStandards != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsStandards");
            const NVIS* p_NVIS = itsStandards->getItsNVIS();
            if(p_NVIS != NULL)
                {
                    itsStandards->__setItsNVIS(NULL);
                }
            itsStandards = NULL;
        }
}

void NVIS::__setItsAutoLightControlUnit(AutoLightControlUnit* const p_AutoLightControlUnit) {
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

void NVIS::_setItsAutoLightControlUnit(AutoLightControlUnit* const p_AutoLightControlUnit) {
    if(itsAutoLightControlUnit != NULL)
        {
            itsAutoLightControlUnit->__setItsNVIS(NULL);
        }
    __setItsAutoLightControlUnit(p_AutoLightControlUnit);
}

void NVIS::_clearItsAutoLightControlUnit(void) {
    NOTIFY_RELATION_CLEARED("itsAutoLightControlUnit");
    itsAutoLightControlUnit = NULL;
}

void NVIS::__setItsCar(Car* const p_Car) {
    itsCar = p_Car;
    if(p_Car != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsCar", p_Car, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsCar");
        }
}

void NVIS::_setItsCar(Car* const p_Car) {
    if(itsCar != NULL)
        {
            itsCar->__setItsNVIS(NULL);
        }
    __setItsCar(p_Car);
}

void NVIS::_clearItsCar(void) {
    NOTIFY_RELATION_CLEARED("itsCar");
    itsCar = NULL;
}

void NVIS::__setItsCentralProcessingUnit(CentralProcessingUnit* const p_CentralProcessingUnit) {
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

void NVIS::_setItsCentralProcessingUnit(CentralProcessingUnit* const p_CentralProcessingUnit) {
    if(itsCentralProcessingUnit != NULL)
        {
            itsCentralProcessingUnit->__setItsNVIS(NULL);
        }
    __setItsCentralProcessingUnit(p_CentralProcessingUnit);
}

void NVIS::_clearItsCentralProcessingUnit(void) {
    NOTIFY_RELATION_CLEARED("itsCentralProcessingUnit");
    itsCentralProcessingUnit = NULL;
}

void NVIS::__setItsCommunicationSystem(CommunicationSystem* const p_CommunicationSystem) {
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

void NVIS::_setItsCommunicationSystem(CommunicationSystem* const p_CommunicationSystem) {
    if(itsCommunicationSystem != NULL)
        {
            itsCommunicationSystem->__setItsNVIS(NULL);
        }
    __setItsCommunicationSystem(p_CommunicationSystem);
}

void NVIS::_clearItsCommunicationSystem(void) {
    NOTIFY_RELATION_CLEARED("itsCommunicationSystem");
    itsCommunicationSystem = NULL;
}

void NVIS::__setItsConstraints(Constraints* const p_Constraints) {
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

void NVIS::_setItsConstraints(Constraints* const p_Constraints) {
    if(itsConstraints != NULL)
        {
            itsConstraints->__setItsNVIS(NULL);
        }
    __setItsConstraints(p_Constraints);
}

void NVIS::_clearItsConstraints(void) {
    NOTIFY_RELATION_CLEARED("itsConstraints");
    itsConstraints = NULL;
}

void NVIS::__setItsHeadlights(Headlights* const p_Headlights) {
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

void NVIS::_setItsHeadlights(Headlights* const p_Headlights) {
    if(itsHeadlights != NULL)
        {
            itsHeadlights->__setItsNVIS(NULL);
        }
    __setItsHeadlights(p_Headlights);
}

void NVIS::_clearItsHeadlights(void) {
    NOTIFY_RELATION_CLEARED("itsHeadlights");
    itsHeadlights = NULL;
}

void NVIS::__setItsHighResVideoCam(HighResVideoCam* const p_HighResVideoCam) {
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

void NVIS::_setItsHighResVideoCam(HighResVideoCam* const p_HighResVideoCam) {
    if(itsHighResVideoCam != NULL)
        {
            itsHighResVideoCam->__setItsNVIS(NULL);
        }
    __setItsHighResVideoCam(p_HighResVideoCam);
}

void NVIS::_clearItsHighResVideoCam(void) {
    NOTIFY_RELATION_CLEARED("itsHighResVideoCam");
    itsHighResVideoCam = NULL;
}

void NVIS::__setItsInfraredFilter(InfraredFilter* const p_InfraredFilter) {
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

void NVIS::_setItsInfraredFilter(InfraredFilter* const p_InfraredFilter) {
    if(itsInfraredFilter != NULL)
        {
            itsInfraredFilter->__setItsNVIS(NULL);
        }
    __setItsInfraredFilter(p_InfraredFilter);
}

void NVIS::_clearItsInfraredFilter(void) {
    NOTIFY_RELATION_CLEARED("itsInfraredFilter");
    itsInfraredFilter = NULL;
}

void NVIS::__setItsMonitoringScreen(MonitoringScreen* const p_MonitoringScreen) {
    itsMonitoringScreen = p_MonitoringScreen;
    if(p_MonitoringScreen != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsMonitoringScreen", p_MonitoringScreen, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsMonitoringScreen");
        }
}

void NVIS::_setItsMonitoringScreen(MonitoringScreen* const p_MonitoringScreen) {
    if(itsMonitoringScreen != NULL)
        {
            itsMonitoringScreen->__setItsNVIS(NULL);
        }
    __setItsMonitoringScreen(p_MonitoringScreen);
}

void NVIS::_clearItsMonitoringScreen(void) {
    NOTIFY_RELATION_CLEARED("itsMonitoringScreen");
    itsMonitoringScreen = NULL;
}

void NVIS::__setItsNaturalEnvironment(NaturalEnvironment* const p_NaturalEnvironment) {
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

void NVIS::_setItsNaturalEnvironment(NaturalEnvironment* const p_NaturalEnvironment) {
    if(itsNaturalEnvironment != NULL)
        {
            itsNaturalEnvironment->__setItsNVIS(NULL);
        }
    __setItsNaturalEnvironment(p_NaturalEnvironment);
}

void NVIS::_clearItsNaturalEnvironment(void) {
    NOTIFY_RELATION_CLEARED("itsNaturalEnvironment");
    itsNaturalEnvironment = NULL;
}

void NVIS::__setItsStakeholder(Stakeholder* const p_Stakeholder) {
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

void NVIS::_setItsStakeholder(Stakeholder* const p_Stakeholder) {
    if(itsStakeholder != NULL)
        {
            itsStakeholder->__setItsNVIS(NULL);
        }
    __setItsStakeholder(p_Stakeholder);
}

void NVIS::_clearItsStakeholder(void) {
    NOTIFY_RELATION_CLEARED("itsStakeholder");
    itsStakeholder = NULL;
}

void NVIS::__setItsStandards(Standards* const p_Standards) {
    itsStandards = p_Standards;
    if(p_Standards != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsStandards", p_Standards, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsStandards");
        }
}

void NVIS::_setItsStandards(Standards* const p_Standards) {
    if(itsStandards != NULL)
        {
            itsStandards->__setItsNVIS(NULL);
        }
    __setItsStandards(p_Standards);
}

void NVIS::_clearItsStandards(void) {
    NOTIFY_RELATION_CLEARED("itsStandards");
    itsStandards = NULL;
}

void NVIS::On_entDef(void) {
    NOTIFY_STATE_ENTERED("ROOT.On");
    rootState_subState = On;
    NOTIFY_TRANSITION_STARTED("41");
    NOTIFY_STATE_ENTERED("ROOT.On.checkFogMode");
    pushNullTransition();
    On_subState = checkFogMode;
    rootState_active = checkFogMode;
    //#[ state On.checkFogMode.(Entry) 
    runFogModeCheck();
    //#]
    NOTIFY_TRANSITION_TERMINATED("41");
}

void NVIS::On_exit(void) {
    switch (On_subState) {
        // State WindingMode
        case WindingMode:
        {
            popNullTransition();
            NOTIFY_STATE_EXITED("ROOT.On.WindingMode");
        }
        break;
        // State FogModeOn
        case FogModeOn:
        {
            popNullTransition();
            NOTIFY_STATE_EXITED("ROOT.On.FogModeOn");
        }
        break;
        // State checkSpeed100
        case checkSpeed100:
        {
            popNullTransition();
            NOTIFY_STATE_EXITED("ROOT.On.checkSpeed100");
        }
        break;
        // State checkSpeed110
        case checkSpeed110:
        {
            popNullTransition();
            NOTIFY_STATE_EXITED("ROOT.On.checkSpeed110");
        }
        break;
        // State checkSpeed90
        case checkSpeed90:
        {
            popNullTransition();
            NOTIFY_STATE_EXITED("ROOT.On.checkSpeed90");
        }
        break;
        // State checkWinding
        case checkWinding:
        {
            popNullTransition();
            NOTIFY_STATE_EXITED("ROOT.On.checkWinding");
        }
        break;
        // State checkFogMode
        case checkFogMode:
        {
            popNullTransition();
            NOTIFY_STATE_EXITED("ROOT.On.checkFogMode");
        }
        break;
        // State checkFogLampOn
        case checkFogLampOn:
        {
            popNullTransition();
            NOTIFY_STATE_EXITED("ROOT.On.checkFogLampOn");
        }
        break;
        // State NormalMode
        case NormalMode:
        {
            popNullTransition();
            NOTIFY_STATE_EXITED("ROOT.On.NormalMode");
        }
        break;
        // State TrackMode2
        case TrackMode2:
        {
            popNullTransition();
            NOTIFY_STATE_EXITED("ROOT.On.TrackMode2");
        }
        break;
        // State TrackMode1
        case TrackMode1:
        {
            popNullTransition();
            NOTIFY_STATE_EXITED("ROOT.On.TrackMode1");
        }
        break;
        // State checkspeed70
        case checkspeed70:
        {
            popNullTransition();
            NOTIFY_STATE_EXITED("ROOT.On.checkspeed70");
        }
        break;
        // State checkSpeed70
        case checkSpeed70:
        {
            popNullTransition();
            NOTIFY_STATE_EXITED("ROOT.On.checkSpeed70");
        }
        break;
        // State checkFogLamp
        case checkFogLamp:
        {
            popNullTransition();
            NOTIFY_STATE_EXITED("ROOT.On.checkFogLamp");
        }
        break;
        // State checkFoglamp
        case checkFoglamp:
        {
            popNullTransition();
            NOTIFY_STATE_EXITED("ROOT.On.checkFoglamp");
        }
        break;
        default:
            break;
    }
    On_subState = OMNonState;
    
    NOTIFY_STATE_EXITED("ROOT.On");
}

IOxfReactive::TakeEventStatus NVIS::On_handleEvent(void) {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    if(IS_EVENT_TYPE_OF(reqNVISoff_System_Context_System_Analysis_id) == 1)
        {
            NOTIFY_TRANSITION_STARTED("45");
            On_exit();
            NOTIFY_STATE_ENTERED("ROOT.Off");
            rootState_subState = Off;
            rootState_active = Off;
            NOTIFY_TRANSITION_TERMINATED("45");
            res = eventConsumed;
        }
    
    return res;
}

IOxfReactive::TakeEventStatus NVIS::WindingMode_handleEvent(void) {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    if(IS_EVENT_TYPE_OF(OMNullEventId) == 1)
        {
            NOTIFY_TRANSITION_STARTED("43");
            popNullTransition();
            NOTIFY_STATE_EXITED("ROOT.On.WindingMode");
            NOTIFY_STATE_ENTERED("ROOT.On.checkFogMode");
            pushNullTransition();
            On_subState = checkFogMode;
            rootState_active = checkFogMode;
            //#[ state On.checkFogMode.(Entry) 
            runFogModeCheck();
            //#]
            NOTIFY_TRANSITION_TERMINATED("43");
            res = eventConsumed;
        }
    
    if(res == eventNotConsumed)
        {
            res = On_handleEvent();
        }
    return res;
}

IOxfReactive::TakeEventStatus NVIS::TrackMode2_handleEvent(void) {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    if(IS_EVENT_TYPE_OF(OMNullEventId) == 1)
        {
            NOTIFY_TRANSITION_STARTED("20");
            popNullTransition();
            NOTIFY_STATE_EXITED("ROOT.On.TrackMode2");
            NOTIFY_STATE_ENTERED("ROOT.On.checkFogMode");
            pushNullTransition();
            On_subState = checkFogMode;
            rootState_active = checkFogMode;
            //#[ state On.checkFogMode.(Entry) 
            runFogModeCheck();
            //#]
            NOTIFY_TRANSITION_TERMINATED("20");
            res = eventConsumed;
        }
    
    if(res == eventNotConsumed)
        {
            res = On_handleEvent();
        }
    return res;
}

IOxfReactive::TakeEventStatus NVIS::TrackMode1_handleEvent(void) {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    if(IS_EVENT_TYPE_OF(OMNullEventId) == 1)
        {
            NOTIFY_TRANSITION_STARTED("22");
            popNullTransition();
            NOTIFY_STATE_EXITED("ROOT.On.TrackMode1");
            NOTIFY_STATE_ENTERED("ROOT.On.checkFogMode");
            pushNullTransition();
            On_subState = checkFogMode;
            rootState_active = checkFogMode;
            //#[ state On.checkFogMode.(Entry) 
            runFogModeCheck();
            //#]
            NOTIFY_TRANSITION_TERMINATED("22");
            res = eventConsumed;
        }
    
    if(res == eventNotConsumed)
        {
            res = On_handleEvent();
        }
    return res;
}

IOxfReactive::TakeEventStatus NVIS::NormalMode_handleEvent(void) {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    if(IS_EVENT_TYPE_OF(OMNullEventId) == 1)
        {
            NOTIFY_TRANSITION_STARTED("44");
            popNullTransition();
            NOTIFY_STATE_EXITED("ROOT.On.NormalMode");
            NOTIFY_STATE_ENTERED("ROOT.On.checkFogMode");
            pushNullTransition();
            On_subState = checkFogMode;
            rootState_active = checkFogMode;
            //#[ state On.checkFogMode.(Entry) 
            runFogModeCheck();
            //#]
            NOTIFY_TRANSITION_TERMINATED("44");
            res = eventConsumed;
        }
    
    if(res == eventNotConsumed)
        {
            res = On_handleEvent();
        }
    return res;
}

IOxfReactive::TakeEventStatus NVIS::FogModeOn_handleEvent(void) {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    if(IS_EVENT_TYPE_OF(OMNullEventId) == 1)
        {
            NOTIFY_TRANSITION_STARTED("42");
            popNullTransition();
            NOTIFY_STATE_EXITED("ROOT.On.FogModeOn");
            NOTIFY_STATE_ENTERED("ROOT.On.checkFogMode");
            pushNullTransition();
            On_subState = checkFogMode;
            rootState_active = checkFogMode;
            //#[ state On.checkFogMode.(Entry) 
            runFogModeCheck();
            //#]
            NOTIFY_TRANSITION_TERMINATED("42");
            res = eventConsumed;
        }
    
    if(res == eventNotConsumed)
        {
            res = On_handleEvent();
        }
    return res;
}

IOxfReactive::TakeEventStatus NVIS::checkWinding_handleEvent(void) {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    if(IS_EVENT_TYPE_OF(OMNullEventId) == 1)
        {
            //## transition 25 
            if(winding)
                {
                    NOTIFY_TRANSITION_STARTED("19");
                    NOTIFY_TRANSITION_STARTED("25");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.On.checkWinding");
                    NOTIFY_STATE_ENTERED("ROOT.On.checkSpeed70");
                    pushNullTransition();
                    On_subState = checkSpeed70;
                    rootState_active = checkSpeed70;
                    //#[ state On.checkSpeed70.(Entry) 
                    runSpeedCheck();
                    //#]
                    NOTIFY_TRANSITION_TERMINATED("25");
                    NOTIFY_TRANSITION_TERMINATED("19");
                    res = eventConsumed;
                }
            else
                {
                    NOTIFY_TRANSITION_STARTED("19");
                    NOTIFY_TRANSITION_STARTED("24");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.On.checkWinding");
                    NOTIFY_STATE_ENTERED("ROOT.On.checkspeed70");
                    pushNullTransition();
                    On_subState = checkspeed70;
                    rootState_active = checkspeed70;
                    //#[ state On.checkspeed70.(Entry) 
                    runSpeedCheck();
                    //#]
                    NOTIFY_TRANSITION_TERMINATED("24");
                    NOTIFY_TRANSITION_TERMINATED("19");
                    res = eventConsumed;
                }
        }
    
    if(res == eventNotConsumed)
        {
            res = On_handleEvent();
        }
    return res;
}

IOxfReactive::TakeEventStatus NVIS::checkSpeed90_handleEvent(void) {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    if(IS_EVENT_TYPE_OF(OMNullEventId) == 1)
        {
            //## transition 11 
            if(speed < 90)
                {
                    NOTIFY_TRANSITION_STARTED("9");
                    NOTIFY_TRANSITION_STARTED("11");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.On.checkSpeed90");
                    NOTIFY_STATE_ENTERED("ROOT.On.checkWinding");
                    pushNullTransition();
                    On_subState = checkWinding;
                    rootState_active = checkWinding;
                    //#[ state On.checkWinding.(Entry) 
                    runWindingCheck();
                    //#]
                    NOTIFY_TRANSITION_TERMINATED("11");
                    NOTIFY_TRANSITION_TERMINATED("9");
                    res = eventConsumed;
                }
            else
                {
                    NOTIFY_TRANSITION_STARTED("9");
                    NOTIFY_TRANSITION_STARTED("10");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.On.checkSpeed90");
                    NOTIFY_STATE_ENTERED("ROOT.On.checkSpeed110");
                    pushNullTransition();
                    On_subState = checkSpeed110;
                    rootState_active = checkSpeed110;
                    //#[ state On.checkSpeed110.(Entry) 
                    runSpeedCheck();
                    //#]
                    NOTIFY_TRANSITION_TERMINATED("10");
                    NOTIFY_TRANSITION_TERMINATED("9");
                    res = eventConsumed;
                }
        }
    
    if(res == eventNotConsumed)
        {
            res = On_handleEvent();
        }
    return res;
}

IOxfReactive::TakeEventStatus NVIS::checkspeed70_handleEvent(void) {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    if(IS_EVENT_TYPE_OF(OMNullEventId) == 1)
        {
            //## transition 36 
            if(speed < 70)
                {
                    NOTIFY_TRANSITION_STARTED("35");
                    NOTIFY_TRANSITION_STARTED("36");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.On.checkspeed70");
                    NOTIFY_STATE_ENTERED("ROOT.On.checkFoglamp");
                    pushNullTransition();
                    On_subState = checkFoglamp;
                    rootState_active = checkFoglamp;
                    //#[ state On.checkFoglamp.(Entry) 
                    runFogLampCheck();
                    //#]
                    NOTIFY_TRANSITION_TERMINATED("36");
                    NOTIFY_TRANSITION_TERMINATED("35");
                    res = eventConsumed;
                }
            else
                {
                    NOTIFY_TRANSITION_STARTED("35");
                    NOTIFY_TRANSITION_STARTED("39");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.On.checkspeed70");
                    NOTIFY_STATE_ENTERED("ROOT.On.NormalMode");
                    pushNullTransition();
                    On_subState = NormalMode;
                    rootState_active = NormalMode;
                    //#[ state On.NormalMode.(Entry) 
                    turnOnNormalMode();
                    //#]
                    NOTIFY_TRANSITION_TERMINATED("39");
                    NOTIFY_TRANSITION_TERMINATED("35");
                    res = eventConsumed;
                }
        }
    
    if(res == eventNotConsumed)
        {
            res = On_handleEvent();
        }
    return res;
}

IOxfReactive::TakeEventStatus NVIS::checkSpeed70_handleEvent(void) {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    if(IS_EVENT_TYPE_OF(OMNullEventId) == 1)
        {
            //## transition 31 
            if(speed < 70)
                {
                    NOTIFY_TRANSITION_STARTED("29");
                    NOTIFY_TRANSITION_STARTED("31");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.On.checkSpeed70");
                    NOTIFY_STATE_ENTERED("ROOT.On.checkFogLamp");
                    pushNullTransition();
                    On_subState = checkFogLamp;
                    rootState_active = checkFogLamp;
                    //#[ state On.checkFogLamp.(Entry) 
                    runFogLampCheck();
                    //#]
                    NOTIFY_TRANSITION_TERMINATED("31");
                    NOTIFY_TRANSITION_TERMINATED("29");
                    res = eventConsumed;
                }
            else
                {
                    NOTIFY_TRANSITION_STARTED("29");
                    NOTIFY_TRANSITION_STARTED("30");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.On.checkSpeed70");
                    NOTIFY_STATE_ENTERED("ROOT.On.WindingMode");
                    pushNullTransition();
                    On_subState = WindingMode;
                    rootState_active = WindingMode;
                    //#[ state On.WindingMode.(Entry) 
                    turnOnWindingMode();
                    //#]
                    NOTIFY_TRANSITION_TERMINATED("30");
                    NOTIFY_TRANSITION_TERMINATED("29");
                    res = eventConsumed;
                }
        }
    
    if(res == eventNotConsumed)
        {
            res = On_handleEvent();
        }
    return res;
}

IOxfReactive::TakeEventStatus NVIS::checkSpeed110_handleEvent(void) {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    if(IS_EVENT_TYPE_OF(OMNullEventId) == 1)
        {
            //## transition 23 
            if(speed < 110)
                {
                    NOTIFY_TRANSITION_STARTED("18");
                    NOTIFY_TRANSITION_STARTED("23");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.On.checkSpeed110");
                    NOTIFY_STATE_ENTERED("ROOT.On.TrackMode1");
                    pushNullTransition();
                    On_subState = TrackMode1;
                    rootState_active = TrackMode1;
                    //#[ state On.TrackMode1.(Entry) 
                    turnOnTrackMode1();
                    //#]
                    NOTIFY_TRANSITION_TERMINATED("23");
                    NOTIFY_TRANSITION_TERMINATED("18");
                    res = eventConsumed;
                }
            else
                {
                    NOTIFY_TRANSITION_STARTED("18");
                    NOTIFY_TRANSITION_STARTED("21");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.On.checkSpeed110");
                    NOTIFY_STATE_ENTERED("ROOT.On.TrackMode2");
                    pushNullTransition();
                    On_subState = TrackMode2;
                    rootState_active = TrackMode2;
                    //#[ state On.TrackMode2.(Entry) 
                    turnOnTrackMode2();
                    //#]
                    NOTIFY_TRANSITION_TERMINATED("21");
                    NOTIFY_TRANSITION_TERMINATED("18");
                    res = eventConsumed;
                }
        }
    
    if(res == eventNotConsumed)
        {
            res = On_handleEvent();
        }
    return res;
}

IOxfReactive::TakeEventStatus NVIS::checkSpeed100_handleEvent(void) {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    if(IS_EVENT_TYPE_OF(OMNullEventId) == 1)
        {
            //## transition 27 
            if(speed < 100)
                {
                    NOTIFY_TRANSITION_STARTED("26");
                    NOTIFY_TRANSITION_STARTED("27");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.On.checkSpeed100");
                    NOTIFY_STATE_ENTERED("ROOT.On.checkFogMode");
                    pushNullTransition();
                    On_subState = checkFogMode;
                    rootState_active = checkFogMode;
                    //#[ state On.checkFogMode.(Entry) 
                    runFogModeCheck();
                    //#]
                    NOTIFY_TRANSITION_TERMINATED("27");
                    NOTIFY_TRANSITION_TERMINATED("26");
                    res = eventConsumed;
                }
            else
                {
                    NOTIFY_TRANSITION_STARTED("26");
                    NOTIFY_TRANSITION_STARTED("28");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.On.checkSpeed100");
                    NOTIFY_STATE_ENTERED("ROOT.On.checkSpeed110");
                    pushNullTransition();
                    On_subState = checkSpeed110;
                    rootState_active = checkSpeed110;
                    //#[ state On.checkSpeed110.(Entry) 
                    runSpeedCheck();
                    //#]
                    NOTIFY_TRANSITION_TERMINATED("28");
                    NOTIFY_TRANSITION_TERMINATED("26");
                    res = eventConsumed;
                }
        }
    
    if(res == eventNotConsumed)
        {
            res = On_handleEvent();
        }
    return res;
}

IOxfReactive::TakeEventStatus NVIS::checkFogMode_handleEvent(void) {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    if(IS_EVENT_TYPE_OF(OMNullEventId) == 1)
        {
            //## transition 16 
            if(fogMode)
                {
                    NOTIFY_TRANSITION_STARTED("15");
                    NOTIFY_TRANSITION_STARTED("16");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.On.checkFogMode");
                    NOTIFY_STATE_ENTERED("ROOT.On.checkFogLampOn");
                    pushNullTransition();
                    On_subState = checkFogLampOn;
                    rootState_active = checkFogLampOn;
                    //#[ state On.checkFogLampOn.(Entry) 
                    runFogLampCheck();
                    //#]
                    NOTIFY_TRANSITION_TERMINATED("16");
                    NOTIFY_TRANSITION_TERMINATED("15");
                    res = eventConsumed;
                }
            else
                {
                    NOTIFY_TRANSITION_STARTED("15");
                    NOTIFY_TRANSITION_STARTED("17");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.On.checkFogMode");
                    NOTIFY_STATE_ENTERED("ROOT.On.checkSpeed90");
                    pushNullTransition();
                    On_subState = checkSpeed90;
                    rootState_active = checkSpeed90;
                    //#[ state On.checkSpeed90.(Entry) 
                    runSpeedCheck();
                    //#]
                    NOTIFY_TRANSITION_TERMINATED("17");
                    NOTIFY_TRANSITION_TERMINATED("15");
                    res = eventConsumed;
                }
        }
    
    if(res == eventNotConsumed)
        {
            res = On_handleEvent();
        }
    return res;
}

IOxfReactive::TakeEventStatus NVIS::checkFogLampOn_handleEvent(void) {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    if(IS_EVENT_TYPE_OF(OMNullEventId) == 1)
        {
            //## transition 13 
            if(fogLamp)
                {
                    NOTIFY_TRANSITION_STARTED("12");
                    NOTIFY_TRANSITION_STARTED("13");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.On.checkFogLampOn");
                    NOTIFY_STATE_ENTERED("ROOT.On.checkSpeed100");
                    pushNullTransition();
                    On_subState = checkSpeed100;
                    rootState_active = checkSpeed100;
                    //#[ state On.checkSpeed100.(Entry) 
                    runSpeedCheck();
                    //#]
                    NOTIFY_TRANSITION_TERMINATED("13");
                    NOTIFY_TRANSITION_TERMINATED("12");
                    res = eventConsumed;
                }
            else
                {
                    NOTIFY_TRANSITION_STARTED("12");
                    NOTIFY_TRANSITION_STARTED("14");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.On.checkFogLampOn");
                    NOTIFY_STATE_ENTERED("ROOT.On.checkSpeed90");
                    pushNullTransition();
                    On_subState = checkSpeed90;
                    rootState_active = checkSpeed90;
                    //#[ state On.checkSpeed90.(Entry) 
                    runSpeedCheck();
                    //#]
                    NOTIFY_TRANSITION_TERMINATED("14");
                    NOTIFY_TRANSITION_TERMINATED("12");
                    res = eventConsumed;
                }
        }
    
    if(res == eventNotConsumed)
        {
            res = On_handleEvent();
        }
    return res;
}

IOxfReactive::TakeEventStatus NVIS::checkFoglamp_handleEvent(void) {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    if(IS_EVENT_TYPE_OF(OMNullEventId) == 1)
        {
            //## transition 38 
            if(fogLamp)
                {
                    NOTIFY_TRANSITION_STARTED("37");
                    NOTIFY_TRANSITION_STARTED("38");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.On.checkFoglamp");
                    NOTIFY_STATE_ENTERED("ROOT.On.FogModeOn");
                    pushNullTransition();
                    On_subState = FogModeOn;
                    rootState_active = FogModeOn;
                    //#[ state On.FogModeOn.(Entry) 
                    turnOnFogMode();
                    //#]
                    NOTIFY_TRANSITION_TERMINATED("38");
                    NOTIFY_TRANSITION_TERMINATED("37");
                    res = eventConsumed;
                }
            else
                {
                    NOTIFY_TRANSITION_STARTED("37");
                    NOTIFY_TRANSITION_STARTED("40");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.On.checkFoglamp");
                    NOTIFY_STATE_ENTERED("ROOT.On.NormalMode");
                    pushNullTransition();
                    On_subState = NormalMode;
                    rootState_active = NormalMode;
                    //#[ state On.NormalMode.(Entry) 
                    turnOnNormalMode();
                    //#]
                    NOTIFY_TRANSITION_TERMINATED("40");
                    NOTIFY_TRANSITION_TERMINATED("37");
                    res = eventConsumed;
                }
        }
    
    if(res == eventNotConsumed)
        {
            res = On_handleEvent();
        }
    return res;
}

IOxfReactive::TakeEventStatus NVIS::checkFogLamp_handleEvent(void) {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    if(IS_EVENT_TYPE_OF(OMNullEventId) == 1)
        {
            //## transition 33 
            if(fogLamp)
                {
                    NOTIFY_TRANSITION_STARTED("32");
                    NOTIFY_TRANSITION_STARTED("33");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.On.checkFogLamp");
                    NOTIFY_STATE_ENTERED("ROOT.On.FogModeOn");
                    pushNullTransition();
                    On_subState = FogModeOn;
                    rootState_active = FogModeOn;
                    //#[ state On.FogModeOn.(Entry) 
                    turnOnFogMode();
                    //#]
                    NOTIFY_TRANSITION_TERMINATED("33");
                    NOTIFY_TRANSITION_TERMINATED("32");
                    res = eventConsumed;
                }
            else
                {
                    NOTIFY_TRANSITION_STARTED("32");
                    NOTIFY_TRANSITION_STARTED("34");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.On.checkFogLamp");
                    NOTIFY_STATE_ENTERED("ROOT.On.WindingMode");
                    pushNullTransition();
                    On_subState = WindingMode;
                    rootState_active = WindingMode;
                    //#[ state On.WindingMode.(Entry) 
                    turnOnWindingMode();
                    //#]
                    NOTIFY_TRANSITION_TERMINATED("34");
                    NOTIFY_TRANSITION_TERMINATED("32");
                    res = eventConsumed;
                }
        }
    
    if(res == eventNotConsumed)
        {
            res = On_handleEvent();
        }
    return res;
}

void NVIS::rootState_entDef(void) {
    {
        NOTIFY_STATE_ENTERED("ROOT");
        NOTIFY_TRANSITION_STARTED("0");
        NOTIFY_STATE_ENTERED("ROOT.Off");
        rootState_subState = Off;
        rootState_active = Off;
        NOTIFY_TRANSITION_TERMINATED("0");
    }
}

IOxfReactive::TakeEventStatus NVIS::rootState_processEvent(void) {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    switch (rootState_active) {
        // State Off
        case Off:
        {
            if(IS_EVENT_TYPE_OF(reqNVISon_System_Context_System_Analysis_id) == 1)
                {
                    NOTIFY_TRANSITION_STARTED("1");
                    NOTIFY_STATE_EXITED("ROOT.Off");
                    NOTIFY_STATE_ENTERED("ROOT.checkNVISstatus");
                    pushNullTransition();
                    rootState_subState = checkNVISstatus;
                    rootState_active = checkNVISstatus;
                    //#[ state checkNVISstatus.(Entry) 
                    runSystemCheck();
                    //#]
                    NOTIFY_TRANSITION_TERMINATED("1");
                    res = eventConsumed;
                }
            
        }
        break;
        // State WindingMode
        case WindingMode:
        {
            res = WindingMode_handleEvent();
        }
        break;
        // State FogModeOn
        case FogModeOn:
        {
            res = FogModeOn_handleEvent();
        }
        break;
        // State checkSpeed100
        case checkSpeed100:
        {
            res = checkSpeed100_handleEvent();
        }
        break;
        // State checkSpeed110
        case checkSpeed110:
        {
            res = checkSpeed110_handleEvent();
        }
        break;
        // State checkSpeed90
        case checkSpeed90:
        {
            res = checkSpeed90_handleEvent();
        }
        break;
        // State checkWinding
        case checkWinding:
        {
            res = checkWinding_handleEvent();
        }
        break;
        // State checkFogMode
        case checkFogMode:
        {
            res = checkFogMode_handleEvent();
        }
        break;
        // State checkFogLampOn
        case checkFogLampOn:
        {
            res = checkFogLampOn_handleEvent();
        }
        break;
        // State NormalMode
        case NormalMode:
        {
            res = NormalMode_handleEvent();
        }
        break;
        // State TrackMode2
        case TrackMode2:
        {
            res = TrackMode2_handleEvent();
        }
        break;
        // State TrackMode1
        case TrackMode1:
        {
            res = TrackMode1_handleEvent();
        }
        break;
        // State checkspeed70
        case checkspeed70:
        {
            res = checkspeed70_handleEvent();
        }
        break;
        // State checkSpeed70
        case checkSpeed70:
        {
            res = checkSpeed70_handleEvent();
        }
        break;
        // State checkFogLamp
        case checkFogLamp:
        {
            res = checkFogLamp_handleEvent();
        }
        break;
        // State checkFoglamp
        case checkFoglamp:
        {
            res = checkFoglamp_handleEvent();
        }
        break;
        // State checkNVISstatus
        case checkNVISstatus:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId) == 1)
                {
                    //## transition 6 
                    if(systemOk = true)
                        {
                            NOTIFY_TRANSITION_STARTED("2");
                            NOTIFY_TRANSITION_STARTED("6");
                            popNullTransition();
                            NOTIFY_STATE_EXITED("ROOT.checkNVISstatus");
                            NOTIFY_STATE_ENTERED("ROOT.checkHeadlightStatus");
                            pushNullTransition();
                            rootState_subState = checkHeadlightStatus;
                            rootState_active = checkHeadlightStatus;
                            //#[ state checkHeadlightStatus.(Entry) 
                            runHeadlightCheck();
                            //#]
                            NOTIFY_TRANSITION_TERMINATED("6");
                            NOTIFY_TRANSITION_TERMINATED("2");
                            res = eventConsumed;
                        }
                    else
                        {
                            NOTIFY_TRANSITION_STARTED("2");
                            NOTIFY_TRANSITION_STARTED("4");
                            popNullTransition();
                            NOTIFY_STATE_EXITED("ROOT.checkNVISstatus");
                            //#[ transition 4 
                            indicateSystemFault();
                            //#]
                            NOTIFY_STATE_ENTERED("ROOT.SystemFault");
                            rootState_subState = SystemFault;
                            rootState_active = SystemFault;
                            NOTIFY_TRANSITION_TERMINATED("4");
                            NOTIFY_TRANSITION_TERMINATED("2");
                            res = eventConsumed;
                        }
                }
            
        }
        break;
        // State SystemFault
        case SystemFault:
        {
            if(IS_EVENT_TYPE_OF(evFaultCleared_System_Context_System_Analysis_id) == 1)
                {
                    NOTIFY_TRANSITION_STARTED("5");
                    NOTIFY_STATE_EXITED("ROOT.SystemFault");
                    NOTIFY_STATE_ENTERED("ROOT.Off");
                    rootState_subState = Off;
                    rootState_active = Off;
                    NOTIFY_TRANSITION_TERMINATED("5");
                    res = eventConsumed;
                }
            
        }
        break;
        // State checkHeadlightStatus
        case checkHeadlightStatus:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId) == 1)
                {
                    //## transition 3 
                    if(headLights = true)
                        {
                            NOTIFY_TRANSITION_STARTED("7");
                            NOTIFY_TRANSITION_STARTED("3");
                            popNullTransition();
                            NOTIFY_STATE_EXITED("ROOT.checkHeadlightStatus");
                            //#[ transition 3 
                            turnCamOn();
                            indicateNVISon();
                            turnMonitorOn();
                            getSpeedFromCar();
                            //#]
                            On_entDef();
                            NOTIFY_TRANSITION_TERMINATED("3");
                            NOTIFY_TRANSITION_TERMINATED("7");
                            res = eventConsumed;
                        }
                    else
                        {
                            NOTIFY_TRANSITION_STARTED("7");
                            NOTIFY_TRANSITION_STARTED("8");
                            popNullTransition();
                            NOTIFY_STATE_EXITED("ROOT.checkHeadlightStatus");
                            //#[ transition 8 
                            indicateHeadlightoff();
                            //#]
                            NOTIFY_STATE_ENTERED("ROOT.Off");
                            rootState_subState = Off;
                            rootState_active = Off;
                            NOTIFY_TRANSITION_TERMINATED("8");
                            NOTIFY_TRANSITION_TERMINATED("7");
                            res = eventConsumed;
                        }
                }
            
        }
        break;
        default:
            break;
    }
    return res;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedNVIS::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    aomsAttributes->addAttribute("systemOk", x2String(myReal->systemOk));
    aomsAttributes->addAttribute("winding", x2String(myReal->winding));
    aomsAttributes->addAttribute("speed", x2String(myReal->speed));
    aomsAttributes->addAttribute("fogLamp", x2String(myReal->fogLamp));
    aomsAttributes->addAttribute("fogMode", x2String(myReal->fogMode));
    aomsAttributes->addAttribute("headLights", x2String(myReal->headLights));
    aomsAttributes->addAttribute("activeMode", x2String(myReal->activeMode));
}

void OMAnimatedNVIS::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsHighResVideoCam", false, true);
    if(myReal->itsHighResVideoCam)
        {
            aomsRelations->ADD_ITEM(myReal->itsHighResVideoCam);
        }
    aomsRelations->addRelation("itsInfraredFilter", false, true);
    if(myReal->itsInfraredFilter)
        {
            aomsRelations->ADD_ITEM(myReal->itsInfraredFilter);
        }
    aomsRelations->addRelation("itsStandards", false, true);
    if(myReal->itsStandards)
        {
            aomsRelations->ADD_ITEM(myReal->itsStandards);
        }
    aomsRelations->addRelation("itsNaturalEnvironment", false, true);
    if(myReal->itsNaturalEnvironment)
        {
            aomsRelations->ADD_ITEM(myReal->itsNaturalEnvironment);
        }
    aomsRelations->addRelation("itsCommunicationSystem", false, true);
    if(myReal->itsCommunicationSystem)
        {
            aomsRelations->ADD_ITEM(myReal->itsCommunicationSystem);
        }
    aomsRelations->addRelation("itsConstraints", false, true);
    if(myReal->itsConstraints)
        {
            aomsRelations->ADD_ITEM(myReal->itsConstraints);
        }
    aomsRelations->addRelation("itsStakeholder", false, true);
    if(myReal->itsStakeholder)
        {
            aomsRelations->ADD_ITEM(myReal->itsStakeholder);
        }
    aomsRelations->addRelation("itsHeadlights", false, true);
    if(myReal->itsHeadlights)
        {
            aomsRelations->ADD_ITEM(myReal->itsHeadlights);
        }
    aomsRelations->addRelation("itsAutoLightControlUnit", false, true);
    if(myReal->itsAutoLightControlUnit)
        {
            aomsRelations->ADD_ITEM(myReal->itsAutoLightControlUnit);
        }
    aomsRelations->addRelation("itsCentralProcessingUnit", false, true);
    if(myReal->itsCentralProcessingUnit)
        {
            aomsRelations->ADD_ITEM(myReal->itsCentralProcessingUnit);
        }
    aomsRelations->addRelation("itsMonitoringScreen", false, true);
    if(myReal->itsMonitoringScreen)
        {
            aomsRelations->ADD_ITEM(myReal->itsMonitoringScreen);
        }
    aomsRelations->addRelation("itsCar", false, true);
    if(myReal->itsCar)
        {
            aomsRelations->ADD_ITEM(myReal->itsCar);
        }
}

void OMAnimatedNVIS::rootState_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT");
    switch (myReal->rootState_subState) {
        case NVIS::Off:
        {
            Off_serializeStates(aomsState);
        }
        break;
        case NVIS::On:
        {
            On_serializeStates(aomsState);
        }
        break;
        case NVIS::checkNVISstatus:
        {
            checkNVISstatus_serializeStates(aomsState);
        }
        break;
        case NVIS::SystemFault:
        {
            SystemFault_serializeStates(aomsState);
        }
        break;
        case NVIS::checkHeadlightStatus:
        {
            checkHeadlightStatus_serializeStates(aomsState);
        }
        break;
        default:
            break;
    }
}

void OMAnimatedNVIS::SystemFault_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.SystemFault");
}

void OMAnimatedNVIS::On_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.On");
    switch (myReal->On_subState) {
        case NVIS::WindingMode:
        {
            WindingMode_serializeStates(aomsState);
        }
        break;
        case NVIS::FogModeOn:
        {
            FogModeOn_serializeStates(aomsState);
        }
        break;
        case NVIS::checkSpeed100:
        {
            checkSpeed100_serializeStates(aomsState);
        }
        break;
        case NVIS::checkSpeed110:
        {
            checkSpeed110_serializeStates(aomsState);
        }
        break;
        case NVIS::checkSpeed90:
        {
            checkSpeed90_serializeStates(aomsState);
        }
        break;
        case NVIS::checkWinding:
        {
            checkWinding_serializeStates(aomsState);
        }
        break;
        case NVIS::checkFogMode:
        {
            checkFogMode_serializeStates(aomsState);
        }
        break;
        case NVIS::checkFogLampOn:
        {
            checkFogLampOn_serializeStates(aomsState);
        }
        break;
        case NVIS::NormalMode:
        {
            NormalMode_serializeStates(aomsState);
        }
        break;
        case NVIS::TrackMode2:
        {
            TrackMode2_serializeStates(aomsState);
        }
        break;
        case NVIS::TrackMode1:
        {
            TrackMode1_serializeStates(aomsState);
        }
        break;
        case NVIS::checkspeed70:
        {
            checkspeed70_serializeStates(aomsState);
        }
        break;
        case NVIS::checkSpeed70:
        {
            checkSpeed70_serializeStates(aomsState);
        }
        break;
        case NVIS::checkFogLamp:
        {
            checkFogLamp_serializeStates(aomsState);
        }
        break;
        case NVIS::checkFoglamp:
        {
            checkFoglamp_serializeStates(aomsState);
        }
        break;
        default:
            break;
    }
}

void OMAnimatedNVIS::WindingMode_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.On.WindingMode");
}

void OMAnimatedNVIS::TrackMode2_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.On.TrackMode2");
}

void OMAnimatedNVIS::TrackMode1_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.On.TrackMode1");
}

void OMAnimatedNVIS::NormalMode_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.On.NormalMode");
}

void OMAnimatedNVIS::FogModeOn_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.On.FogModeOn");
}

void OMAnimatedNVIS::checkWinding_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.On.checkWinding");
}

void OMAnimatedNVIS::checkSpeed90_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.On.checkSpeed90");
}

void OMAnimatedNVIS::checkspeed70_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.On.checkspeed70");
}

void OMAnimatedNVIS::checkSpeed70_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.On.checkSpeed70");
}

void OMAnimatedNVIS::checkSpeed110_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.On.checkSpeed110");
}

void OMAnimatedNVIS::checkSpeed100_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.On.checkSpeed100");
}

void OMAnimatedNVIS::checkFogMode_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.On.checkFogMode");
}

void OMAnimatedNVIS::checkFogLampOn_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.On.checkFogLampOn");
}

void OMAnimatedNVIS::checkFoglamp_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.On.checkFoglamp");
}

void OMAnimatedNVIS::checkFogLamp_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.On.checkFogLamp");
}

void OMAnimatedNVIS::Off_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.Off");
}

void OMAnimatedNVIS::checkNVISstatus_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.checkNVISstatus");
}

void OMAnimatedNVIS::checkHeadlightStatus_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.checkHeadlightStatus");
}
//#]

IMPLEMENT_REACTIVE_META_P(NVIS, System_Analysis_System_Context, System_Analysis::System_Context, false, OMAnimatedNVIS)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\NVIS.cpp
*********************************************************************/
