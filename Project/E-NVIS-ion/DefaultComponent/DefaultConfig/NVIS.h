/*********************************************************************
	Rhapsody	: 9.0 
	Login		: 20235613
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: NVIS
//!	Generated Date	: Fri, 19, Apr 2024  
	File Path	: DefaultComponent\DefaultConfig\NVIS.h
*********************************************************************/

#ifndef NVIS_H
#define NVIS_H

//## auto_generated
#include <oxf.h>
//## auto_generated
#include <aom.h>
//## auto_generated
#include "System_Context.h"
//## auto_generated
#include <omthread.h>
//## auto_generated
#include <omreactive.h>
//## auto_generated
#include <state.h>
//## auto_generated
#include <event.h>
//## link itsAutoLightControlUnit
class AutoLightControlUnit;

//## link itsCar
class Car;

//## link itsCentralProcessingUnit
class CentralProcessingUnit;

//## link itsCommunicationSystem
class CommunicationSystem;

//## link itsConstraints
class Constraints;

//## link itsHeadlights
class Headlights;

//## link itsHighResVideoCam
class HighResVideoCam;

//## link itsInfraredFilter
class InfraredFilter;

//## link itsMonitoringScreen
class MonitoringScreen;

//## link itsNaturalEnvironment
class NaturalEnvironment;

//## link itsStakeholder
class Stakeholder;

//## link itsStandards
class Standards;

//## package System_Analysis::System_Context

//## class NVIS
class NVIS : public OMReactive {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedNVIS;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    explicit NVIS(IOxfActive* const theActiveContext = NULL);
    
    //## auto_generated
    virtual ~NVIS(void);
    
    ////    Operations    ////
    
    //## operation clearFault()
    virtual void clearFault(void);
    
    //## operation getSpeedFromCar()
    virtual void getSpeedFromCar(void);
    
    //## operation indicateHeadlightoff()
    virtual void indicateHeadlightoff(void);
    
    //## operation indicateNVISon()
    virtual void indicateNVISon(void);
    
    //## operation indicateSystemFault()
    virtual void indicateSystemFault(void);
    
    //## operation runFogLampCheck()
    virtual void runFogLampCheck(void);
    
    //## operation runFogModeCheck()
    virtual void runFogModeCheck(void);
    
    //## operation runHeadlightCheck()
    virtual void runHeadlightCheck(void);
    
    //## operation runSpeedCheck()
    virtual void runSpeedCheck(void);
    
    //## operation runSpeedCheckFog()
    virtual void runSpeedCheckFog(void);
    
    //## operation runSystemCheck()
    virtual void runSystemCheck(void);
    
    //## operation runWindingCheck()
    virtual void runWindingCheck(void);
    
    //## operation turnCamOn()
    virtual void turnCamOn(void);
    
    //## operation turnMonitorOn()
    virtual void turnMonitorOn(void);
    
    //## operation turnOnFogMode()
    virtual void turnOnFogMode(void);
    
    //## operation turnOnNormalMode()
    virtual void turnOnNormalMode(void);
    
    //## operation turnOnTrackMode1()
    virtual void turnOnTrackMode1(void);
    
    //## operation turnOnTrackMode2()
    virtual void turnOnTrackMode2(void);
    
    //## operation turnOnWindingMode()
    virtual void turnOnWindingMode(void);
    
    ////    Additional operations    ////
    
    //## auto_generated
    const int getActiveMode(void) const;
    
    //## auto_generated
    void setActiveMode(const int p_activeMode);
    
    //## auto_generated
    const bool getFogLamp(void) const;
    
    //## auto_generated
    void setFogLamp(const bool p_fogLamp);
    
    //## auto_generated
    const bool getFogMode(void) const;
    
    //## auto_generated
    void setFogMode(const bool p_fogMode);
    
    //## auto_generated
    const bool getHeadLights(void) const;
    
    //## auto_generated
    void setHeadLights(const bool p_headLights);
    
    //## auto_generated
    const bool getNormalMode(void) const;
    
    //## auto_generated
    void setNormalMode(const bool p_normalMode);
    
    //## auto_generated
    const int getSpeed(void) const;
    
    //## auto_generated
    void setSpeed(const int p_speed);
    
    //## auto_generated
    const bool getSystemOk(void) const;
    
    //## auto_generated
    void setSystemOk(const bool p_systemOk);
    
    //## auto_generated
    const bool getTrack1Mode(void) const;
    
    //## auto_generated
    void setTrack1Mode(const bool p_track1Mode);
    
    //## auto_generated
    const bool getTrack2Mode(void) const;
    
    //## auto_generated
    void setTrack2Mode(const bool p_track2Mode);
    
    //## auto_generated
    const bool getWinding(void) const;
    
    //## auto_generated
    void setWinding(const bool p_winding);
    
    //## auto_generated
    const bool getWindingMode(void) const;
    
    //## auto_generated
    void setWindingMode(const bool p_windingMode);
    
    //## auto_generated
    const AutoLightControlUnit* getItsAutoLightControlUnit(void) const;
    
    //## auto_generated
    void setItsAutoLightControlUnit(AutoLightControlUnit* const p_AutoLightControlUnit);
    
    //## auto_generated
    const Car* getItsCar(void) const;
    
    //## auto_generated
    void setItsCar(Car* const p_Car);
    
    //## auto_generated
    const CentralProcessingUnit* getItsCentralProcessingUnit(void) const;
    
    //## auto_generated
    void setItsCentralProcessingUnit(CentralProcessingUnit* const p_CentralProcessingUnit);
    
    //## auto_generated
    const CommunicationSystem* getItsCommunicationSystem(void) const;
    
    //## auto_generated
    void setItsCommunicationSystem(CommunicationSystem* const p_CommunicationSystem);
    
    //## auto_generated
    const Constraints* getItsConstraints(void) const;
    
    //## auto_generated
    void setItsConstraints(Constraints* const p_Constraints);
    
    //## auto_generated
    const Headlights* getItsHeadlights(void) const;
    
    //## auto_generated
    void setItsHeadlights(Headlights* const p_Headlights);
    
    //## auto_generated
    const HighResVideoCam* getItsHighResVideoCam(void) const;
    
    //## auto_generated
    void setItsHighResVideoCam(HighResVideoCam* const p_HighResVideoCam);
    
    //## auto_generated
    const InfraredFilter* getItsInfraredFilter(void) const;
    
    //## auto_generated
    void setItsInfraredFilter(InfraredFilter* const p_InfraredFilter);
    
    //## auto_generated
    const MonitoringScreen* getItsMonitoringScreen(void) const;
    
    //## auto_generated
    void setItsMonitoringScreen(MonitoringScreen* const p_MonitoringScreen);
    
    //## auto_generated
    const NaturalEnvironment* getItsNaturalEnvironment(void) const;
    
    //## auto_generated
    void setItsNaturalEnvironment(NaturalEnvironment* const p_NaturalEnvironment);
    
    //## auto_generated
    const Stakeholder* getItsStakeholder(void) const;
    
    //## auto_generated
    void setItsStakeholder(Stakeholder* const p_Stakeholder);
    
    //## auto_generated
    const Standards* getItsStandards(void) const;
    
    //## auto_generated
    void setItsStandards(Standards* const p_Standards);
    
    //## auto_generated
    virtual bool startBehavior(void);

protected :

    //## auto_generated
    void initStatechart(void);
    
    //## auto_generated
    void cleanUpRelations(void);
    
    ////    Attributes    ////

private :

    int activeMode;		//## attribute activeMode
    
    bool fogLamp;		//## attribute fogLamp
    
    bool fogMode;		//## attribute fogMode
    
    bool headLights;		//## attribute headLights
    
    bool normalMode;		//## attribute normalMode
    
    int speed;		//## attribute speed
    
    bool systemOk;		//## attribute systemOk
    
    bool track1Mode;		//## attribute track1Mode
    
    bool track2Mode;		//## attribute track2Mode
    
    bool winding;		//## attribute winding
    
    bool windingMode;		//## attribute windingMode
    
    ////    Relations and components    ////
    
    AutoLightControlUnit* itsAutoLightControlUnit;		//## link itsAutoLightControlUnit
    
    Car* itsCar;		//## link itsCar
    
    CentralProcessingUnit* itsCentralProcessingUnit;		//## link itsCentralProcessingUnit
    
    CommunicationSystem* itsCommunicationSystem;		//## link itsCommunicationSystem
    
    Constraints* itsConstraints;		//## link itsConstraints
    
    Headlights* itsHeadlights;		//## link itsHeadlights
    
    HighResVideoCam* itsHighResVideoCam;		//## link itsHighResVideoCam
    
    InfraredFilter* itsInfraredFilter;		//## link itsInfraredFilter
    
    MonitoringScreen* itsMonitoringScreen;		//## link itsMonitoringScreen
    
    NaturalEnvironment* itsNaturalEnvironment;		//## link itsNaturalEnvironment
    
    Stakeholder* itsStakeholder;		//## link itsStakeholder
    
    Standards* itsStandards;		//## link itsStandards
    
    ////    Framework operations    ////

public :

    //## auto_generated
    void __setItsAutoLightControlUnit(AutoLightControlUnit* const p_AutoLightControlUnit);
    
    //## auto_generated
    void _setItsAutoLightControlUnit(AutoLightControlUnit* const p_AutoLightControlUnit);
    
    //## auto_generated
    void _clearItsAutoLightControlUnit(void);
    
    //## auto_generated
    void __setItsCar(Car* const p_Car);
    
    //## auto_generated
    void _setItsCar(Car* const p_Car);
    
    //## auto_generated
    void _clearItsCar(void);
    
    //## auto_generated
    void __setItsCentralProcessingUnit(CentralProcessingUnit* const p_CentralProcessingUnit);
    
    //## auto_generated
    void _setItsCentralProcessingUnit(CentralProcessingUnit* const p_CentralProcessingUnit);
    
    //## auto_generated
    void _clearItsCentralProcessingUnit(void);
    
    //## auto_generated
    void __setItsCommunicationSystem(CommunicationSystem* const p_CommunicationSystem);
    
    //## auto_generated
    void _setItsCommunicationSystem(CommunicationSystem* const p_CommunicationSystem);
    
    //## auto_generated
    void _clearItsCommunicationSystem(void);
    
    //## auto_generated
    void __setItsConstraints(Constraints* const p_Constraints);
    
    //## auto_generated
    void _setItsConstraints(Constraints* const p_Constraints);
    
    //## auto_generated
    void _clearItsConstraints(void);
    
    //## auto_generated
    void __setItsHeadlights(Headlights* const p_Headlights);
    
    //## auto_generated
    void _setItsHeadlights(Headlights* const p_Headlights);
    
    //## auto_generated
    void _clearItsHeadlights(void);
    
    //## auto_generated
    void __setItsHighResVideoCam(HighResVideoCam* const p_HighResVideoCam);
    
    //## auto_generated
    void _setItsHighResVideoCam(HighResVideoCam* const p_HighResVideoCam);
    
    //## auto_generated
    void _clearItsHighResVideoCam(void);
    
    //## auto_generated
    void __setItsInfraredFilter(InfraredFilter* const p_InfraredFilter);
    
    //## auto_generated
    void _setItsInfraredFilter(InfraredFilter* const p_InfraredFilter);
    
    //## auto_generated
    void _clearItsInfraredFilter(void);
    
    //## auto_generated
    void __setItsMonitoringScreen(MonitoringScreen* const p_MonitoringScreen);
    
    //## auto_generated
    void _setItsMonitoringScreen(MonitoringScreen* const p_MonitoringScreen);
    
    //## auto_generated
    void _clearItsMonitoringScreen(void);
    
    //## auto_generated
    void __setItsNaturalEnvironment(NaturalEnvironment* const p_NaturalEnvironment);
    
    //## auto_generated
    void _setItsNaturalEnvironment(NaturalEnvironment* const p_NaturalEnvironment);
    
    //## auto_generated
    void _clearItsNaturalEnvironment(void);
    
    //## auto_generated
    void __setItsStakeholder(Stakeholder* const p_Stakeholder);
    
    //## auto_generated
    void _setItsStakeholder(Stakeholder* const p_Stakeholder);
    
    //## auto_generated
    void _clearItsStakeholder(void);
    
    //## auto_generated
    void __setItsStandards(Standards* const p_Standards);
    
    //## auto_generated
    void _setItsStandards(Standards* const p_Standards);
    
    //## auto_generated
    void _clearItsStandards(void);
    
    // rootState:
    //## statechart_method
    inline RhpBoolean rootState_IN(void) const;
    
    // SystemFault:
    //## statechart_method
    inline RhpBoolean SystemFault_IN(void) const;
    
    // On:
    //## statechart_method
    inline RhpBoolean On_IN(void) const;
    
    //## statechart_method
    void On_entDef(void);
    
    //## statechart_method
    void On_exit(void);
    
    //## statechart_method
    IOxfReactive::TakeEventStatus On_handleEvent(void);
    
    // WindingMode:
    //## statechart_method
    inline RhpBoolean WindingMode_IN(void) const;
    
    //## statechart_method
    IOxfReactive::TakeEventStatus WindingMode_handleEvent(void);
    
    // TrackMode2:
    //## statechart_method
    inline RhpBoolean TrackMode2_IN(void) const;
    
    //## statechart_method
    IOxfReactive::TakeEventStatus TrackMode2_handleEvent(void);
    
    // TrackMode1:
    //## statechart_method
    inline RhpBoolean TrackMode1_IN(void) const;
    
    //## statechart_method
    IOxfReactive::TakeEventStatus TrackMode1_handleEvent(void);
    
    // NormalMode:
    //## statechart_method
    inline RhpBoolean NormalMode_IN(void) const;
    
    //## statechart_method
    IOxfReactive::TakeEventStatus NormalMode_handleEvent(void);
    
    // FogModeOn:
    //## statechart_method
    inline RhpBoolean FogModeOn_IN(void) const;
    
    //## statechart_method
    IOxfReactive::TakeEventStatus FogModeOn_handleEvent(void);
    
    // checkWinding:
    //## statechart_method
    inline RhpBoolean checkWinding_IN(void) const;
    
    //## statechart_method
    IOxfReactive::TakeEventStatus checkWinding_handleEvent(void);
    
    // checkSpeed90:
    //## statechart_method
    inline RhpBoolean checkSpeed90_IN(void) const;
    
    //## statechart_method
    IOxfReactive::TakeEventStatus checkSpeed90_handleEvent(void);
    
    // checkspeed70:
    //## statechart_method
    inline RhpBoolean checkspeed70_IN(void) const;
    
    //## statechart_method
    IOxfReactive::TakeEventStatus checkspeed70_handleEvent(void);
    
    // checkSpeed70:
    //## statechart_method
    inline RhpBoolean checkSpeed70_IN(void) const;
    
    //## statechart_method
    IOxfReactive::TakeEventStatus checkSpeed70_handleEvent(void);
    
    // checkSpeed110:
    //## statechart_method
    inline RhpBoolean checkSpeed110_IN(void) const;
    
    //## statechart_method
    IOxfReactive::TakeEventStatus checkSpeed110_handleEvent(void);
    
    // checkSpeed100:
    //## statechart_method
    inline RhpBoolean checkSpeed100_IN(void) const;
    
    //## statechart_method
    IOxfReactive::TakeEventStatus checkSpeed100_handleEvent(void);
    
    // checkFogMode:
    //## statechart_method
    inline RhpBoolean checkFogMode_IN(void) const;
    
    //## statechart_method
    IOxfReactive::TakeEventStatus checkFogMode_handleEvent(void);
    
    // checkFogLampOn:
    //## statechart_method
    inline RhpBoolean checkFogLampOn_IN(void) const;
    
    //## statechart_method
    IOxfReactive::TakeEventStatus checkFogLampOn_handleEvent(void);
    
    // checkFoglamp:
    //## statechart_method
    inline RhpBoolean checkFoglamp_IN(void) const;
    
    //## statechart_method
    IOxfReactive::TakeEventStatus checkFoglamp_handleEvent(void);
    
    // checkFogLamp:
    //## statechart_method
    inline RhpBoolean checkFogLamp_IN(void) const;
    
    //## statechart_method
    IOxfReactive::TakeEventStatus checkFogLamp_handleEvent(void);
    
    // Off:
    //## statechart_method
    inline RhpBoolean Off_IN(void) const;
    
    // checkNVISstatus:
    //## statechart_method
    inline RhpBoolean checkNVISstatus_IN(void) const;
    
    // checkHeadlightStatus:
    //## statechart_method
    inline RhpBoolean checkHeadlightStatus_IN(void) const;

protected :

    //## statechart_method
    virtual void rootState_entDef(void);
    
    //## statechart_method
    virtual IOxfReactive::TakeEventStatus rootState_processEvent(void);
    
    ////    Framework    ////
    
//#[ ignore
    enum NVIS_Enum {
        OMNonState = 0,
        SystemFault = 1,
        On = 2,
        WindingMode = 3,
        TrackMode2 = 4,
        TrackMode1 = 5,
        NormalMode = 6,
        FogModeOn = 7,
        checkWinding = 8,
        checkSpeed90 = 9,
        checkspeed70 = 10,
        checkSpeed70 = 11,
        checkSpeed110 = 12,
        checkSpeed100 = 13,
        checkFogMode = 14,
        checkFogLampOn = 15,
        checkFoglamp = 16,
        checkFogLamp = 17,
        Off = 18,
        checkNVISstatus = 19,
        checkHeadlightStatus = 20
    };
//#]

private :

//#[ ignore
    NVIS_Enum rootState_subState;
    
    NVIS_Enum rootState_active;
    
    NVIS_Enum On_subState;
//#]
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedNVIS : virtual public AOMInstance {
    DECLARE_REACTIVE_META(NVIS, OMAnimatedNVIS)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeAttributes(AOMSAttributes* aomsAttributes) const;
    
    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
    
    //## statechart_method
    void rootState_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void SystemFault_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void On_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void WindingMode_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void TrackMode2_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void TrackMode1_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void NormalMode_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void FogModeOn_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void checkWinding_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void checkSpeed90_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void checkspeed70_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void checkSpeed70_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void checkSpeed110_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void checkSpeed100_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void checkFogMode_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void checkFogLampOn_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void checkFoglamp_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void checkFogLamp_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void Off_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void checkNVISstatus_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void checkHeadlightStatus_serializeStates(AOMSState* aomsState) const;
};
//#]
#endif // _OMINSTRUMENT

inline RhpBoolean NVIS::rootState_IN(void) const {
    return true;
}

inline RhpBoolean NVIS::SystemFault_IN(void) const {
    return rootState_subState == SystemFault;
}

inline RhpBoolean NVIS::On_IN(void) const {
    return rootState_subState == On;
}

inline RhpBoolean NVIS::WindingMode_IN(void) const {
    return On_subState == WindingMode;
}

inline RhpBoolean NVIS::TrackMode2_IN(void) const {
    return On_subState == TrackMode2;
}

inline RhpBoolean NVIS::TrackMode1_IN(void) const {
    return On_subState == TrackMode1;
}

inline RhpBoolean NVIS::NormalMode_IN(void) const {
    return On_subState == NormalMode;
}

inline RhpBoolean NVIS::FogModeOn_IN(void) const {
    return On_subState == FogModeOn;
}

inline RhpBoolean NVIS::checkWinding_IN(void) const {
    return On_subState == checkWinding;
}

inline RhpBoolean NVIS::checkSpeed90_IN(void) const {
    return On_subState == checkSpeed90;
}

inline RhpBoolean NVIS::checkspeed70_IN(void) const {
    return On_subState == checkspeed70;
}

inline RhpBoolean NVIS::checkSpeed70_IN(void) const {
    return On_subState == checkSpeed70;
}

inline RhpBoolean NVIS::checkSpeed110_IN(void) const {
    return On_subState == checkSpeed110;
}

inline RhpBoolean NVIS::checkSpeed100_IN(void) const {
    return On_subState == checkSpeed100;
}

inline RhpBoolean NVIS::checkFogMode_IN(void) const {
    return On_subState == checkFogMode;
}

inline RhpBoolean NVIS::checkFogLampOn_IN(void) const {
    return On_subState == checkFogLampOn;
}

inline RhpBoolean NVIS::checkFoglamp_IN(void) const {
    return On_subState == checkFoglamp;
}

inline RhpBoolean NVIS::checkFogLamp_IN(void) const {
    return On_subState == checkFogLamp;
}

inline RhpBoolean NVIS::Off_IN(void) const {
    return rootState_subState == Off;
}

inline RhpBoolean NVIS::checkNVISstatus_IN(void) const {
    return rootState_subState == checkNVISstatus;
}

inline RhpBoolean NVIS::checkHeadlightStatus_IN(void) const {
    return rootState_subState == checkHeadlightStatus;
}

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\NVIS.h
*********************************************************************/
