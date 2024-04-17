/*********************************************************************
	Rhapsody	: 9.0 
	Login		: 20235604
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: PowerSource
//!	Generated Date	: Wed, 17, Apr 2024  
	File Path	: DefaultComponent\DefaultConfig\PowerSource.h
*********************************************************************/

#ifndef PowerSource_H
#define PowerSource_H

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
//## class p_PowerSource_C
#include "int_voltage_ProxyFlowPropertyInterface.h"
//## link itsTMS
class TMS;

//#[ ignore
#define OMAnim_System_Analysis_System_Context_PowerSource_setVoltage_int_ARGS_DECLARATION int p_voltage;
//#]

//## package System_Analysis::System_Context

//## class PowerSource
class PowerSource : public OMReactive {
public :

//#[ ignore
    //## package System_Analysis::System_Context
    class p_PowerSource_C : public int_voltage_ProxyFlowPropertyInterface {
        ////    Constructors and destructors    ////
        
    public :
    
        //## auto_generated
        p_PowerSource_C(void);
        
        //## auto_generated
        virtual ~p_PowerSource_C(void);
        
        ////    Operations    ////
        
        //## auto_generated
        int_voltage_ProxyFlowPropertyInterface* getItsInt_voltage_ProxyFlowPropertyInterface(void);
        
        //## auto_generated
        int_voltage_ProxyFlowPropertyInterface* getOutBound(void);
        
        //## auto_generated
        virtual void setVoltage(int p_voltage);
        
        ////    Additional operations    ////
        
        //## auto_generated
        void setItsInt_voltage_ProxyFlowPropertyInterface(int_voltage_ProxyFlowPropertyInterface* const p_int_voltage_ProxyFlowPropertyInterface);
    
    protected :
    
        //## auto_generated
        void cleanUpRelations(void);
        
        ////    Attributes    ////
    
    private :
    
        RhpInteger _p_;		//## attribute _p_
        
        ////    Relations and components    ////
        
        int_voltage_ProxyFlowPropertyInterface* itsInt_voltage_ProxyFlowPropertyInterface;		//## link itsInt_voltage_ProxyFlowPropertyInterface
    };
//#]

    ////    Friends    ////
    
#ifdef _OMINSTRUMENT
    friend class OMAnimatedPowerSource;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    explicit PowerSource(IOxfActive* const theActiveContext = NULL);
    
    //## auto_generated
    virtual ~PowerSource(void);
    
    ////    Operations    ////
    
    //## operation indicateSystemFault()
    virtual void indicateSystemFault(void);
    
    //## operation indicateSystemReady()
    virtual void indicateSystemReady(void);
    
    //## operation runSystemTest()
    virtual void runSystemTest(void);
    
//#[ ignore
    void setVoltage(int p_voltage);
//#]

    //## operation switchLightOff()
    virtual void switchLightOff(void);
    
    //## operation switchLightOn()
    virtual void switchLightOn(void);
    
    ////    Additional operations    ////
    
    //## auto_generated
    p_PowerSource_C* getP_PowerSource(void) const;
    
    //## auto_generated
    p_PowerSource_C* get_p_PowerSource(void) const;
    
    //## auto_generated
    const bool getSystemOk(void) const;
    
    //## auto_generated
    void setSystemOk(const bool p_systemOk);
    
    //## auto_generated
    const int getVoltage(void) const;
    
    //## auto_generated
    const TMS* getItsTMS(void) const;
    
    //## auto_generated
    void setItsTMS(TMS* const p_TMS);
    
    //## auto_generated
    virtual bool cancelTimeout(const IOxfTimeout* arg);
    
    //## auto_generated
    virtual bool startBehavior(void);

protected :

    //## auto_generated
    void initStatechart(void);
    
    //## auto_generated
    void cleanUpRelations(void);
    
    //## auto_generated
    void cancelTimeouts(void);
    
    ////    Attributes    ////

private :

    bool systemOk;		//## attribute systemOk
    
    int voltage;		//## attribute voltage
    
    ////    Relations and components    ////
    
//#[ ignore
    p_PowerSource_C p_PowerSource;
//#]

    TMS* itsTMS;		//## link itsTMS
    
    ////    Framework operations    ////

public :

    //## auto_generated
    void __setItsTMS(TMS* const p_TMS);
    
    //## auto_generated
    void _setItsTMS(TMS* const p_TMS);
    
    //## auto_generated
    void _clearItsTMS(void);
    
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
    IOxfReactive::TakeEventStatus OnTakeTimeout(void);
    
    //## statechart_method
    IOxfReactive::TakeEventStatus On_processEvent(void);
    
    //## statechart_method
    IOxfReactive::TakeEventStatus On_handleEvent(void);
    
    // state_9:
    //## statechart_method
    inline RhpBoolean state_9_IN(void) const;
    
    //## statechart_method
    void state_9_entDef(void);
    
    //## statechart_method
    void state_9_entShallowHist(void);
    
    //## statechart_method
    IOxfReactive::TakeEventStatus state_9_processEvent(void);
    
    // OrdinaryMode:
    //## statechart_method
    inline RhpBoolean OrdinaryMode_IN(void) const;
    
    // HighPower:
    //## statechart_method
    inline RhpBoolean HighPower_IN(void) const;
    
    // state_8:
    //## statechart_method
    inline RhpBoolean state_8_IN(void) const;
    
    //## statechart_method
    void state_8_entDef(void);
    
    //## statechart_method
    void state_8_entShallowHist(void);
    
    //## statechart_method
    IOxfReactive::TakeEventStatus state_8_processEvent(void);
    
    // LowPower:
    //## statechart_method
    inline RhpBoolean LowPower_IN(void) const;
    
    // FullPower:
    //## statechart_method
    inline RhpBoolean FullPower_IN(void) const;
    
    // Off:
    //## statechart_method
    inline RhpBoolean Off_IN(void) const;
    
    // CheckingSystemStatus:
    //## statechart_method
    inline RhpBoolean CheckingSystemStatus_IN(void) const;
    
    //## statechart_method
    IOxfReactive::TakeEventStatus CheckingSystemStatusTakeNull(void);
    
    //## statechart_method
    IOxfReactive::TakeEventStatus CheckingSystemStatus_handleEvent(void);
    
    // accepttimeevent_5:
    //## statechart_method
    inline RhpBoolean accepttimeevent_5_IN(void) const;
    
    // accepttimeevent_12:
    //## statechart_method
    inline RhpBoolean accepttimeevent_12_IN(void) const;

protected :

    //## statechart_method
    virtual void rootState_entDef(void);
    
    //## statechart_method
    virtual IOxfReactive::TakeEventStatus rootState_processEvent(void);
    
    ////    Framework    ////
    
//#[ ignore
    enum PowerSource_Enum {
        OMNonState = 0,
        SystemFault = 1,
        On = 2,
        state_9 = 3,
        OrdinaryMode = 4,
        HighPower = 5,
        state_8 = 6,
        LowPower = 7,
        FullPower = 8,
        Off = 9,
        CheckingSystemStatus = 10,
        accepttimeevent_5 = 11,
        accepttimeevent_12 = 12
    };
//#]

private :

//#[ ignore
    PowerSource_Enum rootState_subState;
    
    PowerSource_Enum rootState_active;
    
    IOxfTimeout* rootState_timeout;
    
    PowerSource_Enum state_9_subState;
    
    PowerSource_Enum state_9_active;
    
    PowerSource_Enum state_9_lastState;
    
    IOxfTimeout* state_9_timeout;
    
    PowerSource_Enum state_8_subState;
    
    PowerSource_Enum state_8_active;
    
    PowerSource_Enum state_8_lastState;
    
    IOxfTimeout* state_8_timeout;
//#]
};

#ifdef _OMINSTRUMENT
DECLARE_OPERATION_CLASS(System_Analysis_System_Context_PowerSource_setVoltage_int)

//#[ ignore
class OMAnimatedPowerSource : virtual public AOMInstance {
    DECLARE_REACTIVE_META(PowerSource, OMAnimatedPowerSource)
    
    DECLARE_META_OP(System_Analysis_System_Context_PowerSource_setVoltage_int)
    
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
    void state_9_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void OrdinaryMode_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void HighPower_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void state_8_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void LowPower_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void FullPower_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void Off_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void CheckingSystemStatus_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void accepttimeevent_5_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void accepttimeevent_12_serializeStates(AOMSState* aomsState) const;
};
//#]
#endif // _OMINSTRUMENT

inline RhpBoolean PowerSource::rootState_IN(void) const {
    return true;
}

inline RhpBoolean PowerSource::SystemFault_IN(void) const {
    return rootState_subState == SystemFault;
}

inline RhpBoolean PowerSource::On_IN(void) const {
    return rootState_subState == On;
}

inline RhpBoolean PowerSource::state_9_IN(void) const {
    return On_IN();
}

inline RhpBoolean PowerSource::OrdinaryMode_IN(void) const {
    return state_9_subState == OrdinaryMode;
}

inline RhpBoolean PowerSource::HighPower_IN(void) const {
    return state_9_subState == HighPower;
}

inline RhpBoolean PowerSource::state_8_IN(void) const {
    return On_IN();
}

inline RhpBoolean PowerSource::LowPower_IN(void) const {
    return state_8_subState == LowPower;
}

inline RhpBoolean PowerSource::FullPower_IN(void) const {
    return state_8_subState == FullPower;
}

inline RhpBoolean PowerSource::Off_IN(void) const {
    return rootState_subState == Off;
}

inline RhpBoolean PowerSource::CheckingSystemStatus_IN(void) const {
    return rootState_subState == CheckingSystemStatus;
}

inline RhpBoolean PowerSource::accepttimeevent_5_IN(void) const {
    return rootState_subState == accepttimeevent_5;
}

inline RhpBoolean PowerSource::accepttimeevent_12_IN(void) const {
    return rootState_subState == accepttimeevent_12;
}

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\PowerSource.h
*********************************************************************/
