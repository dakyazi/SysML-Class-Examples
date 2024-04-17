/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20235604
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: PowerSource
//!	Generated Date	: Wed, 17, Apr 2024  
	File Path	: DefaultComponent\DefaultConfig\PowerSource.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX

#define _OMSTATECHART_ANIMATED
//#]

//## auto_generated
#include "PowerSource.h"
//## link itsTMS
#include "TMS.h"
//#[ ignore
#define System_Analysis_System_Context_PowerSource_PowerSource_SERIALIZE OM_NO_OP

#define System_Analysis_System_Context_PowerSource_indicateSystemFault_SERIALIZE OM_NO_OP

#define System_Analysis_System_Context_PowerSource_indicateSystemReady_SERIALIZE OM_NO_OP

#define System_Analysis_System_Context_PowerSource_runSystemTest_SERIALIZE OM_NO_OP

#define System_Analysis_System_Context_PowerSource_switchLightOff_SERIALIZE OM_NO_OP

#define System_Analysis_System_Context_PowerSource_switchLightOn_SERIALIZE OM_NO_OP

#define OMAnim_System_Analysis_System_Context_PowerSource_setVoltage_int_UNSERIALIZE_ARGS OP_UNSER(OMDestructiveString2X,p_voltage)

#define OMAnim_System_Analysis_System_Context_PowerSource_setVoltage_int_SERIALIZE_RET_VAL
//#]

//## package System_Analysis::System_Context

//## class PowerSource
//#[ ignore
PowerSource::p_PowerSource_C::p_PowerSource_C(void) : int_voltage_ProxyFlowPropertyInterface(), _p_(0), itsInt_voltage_ProxyFlowPropertyInterface(NULL) {
}

PowerSource::p_PowerSource_C::~p_PowerSource_C(void) {
    cleanUpRelations();
}

int_voltage_ProxyFlowPropertyInterface* PowerSource::p_PowerSource_C::getItsInt_voltage_ProxyFlowPropertyInterface(void) {
    return this;
}

int_voltage_ProxyFlowPropertyInterface* PowerSource::p_PowerSource_C::getOutBound(void) {
    return this;
}

void PowerSource::p_PowerSource_C::setVoltage(int p_voltage) {
    
    if (itsInt_voltage_ProxyFlowPropertyInterface != NULL) {
        itsInt_voltage_ProxyFlowPropertyInterface->setVoltage(p_voltage);
    }
    
}

void PowerSource::p_PowerSource_C::setItsInt_voltage_ProxyFlowPropertyInterface(int_voltage_ProxyFlowPropertyInterface* const p_int_voltage_ProxyFlowPropertyInterface) {
    itsInt_voltage_ProxyFlowPropertyInterface = p_int_voltage_ProxyFlowPropertyInterface;
}

void PowerSource::p_PowerSource_C::cleanUpRelations(void) {
    if(itsInt_voltage_ProxyFlowPropertyInterface != NULL)
        {
            itsInt_voltage_ProxyFlowPropertyInterface = NULL;
        }
}
//#]

PowerSource::PowerSource(IOxfActive* const theActiveContext) : OMReactive(), systemOk(true), voltage(220), itsTMS(NULL) {
    NOTIFY_REACTIVE_CONSTRUCTOR(PowerSource, PowerSource(), 0, System_Analysis_System_Context_PowerSource_PowerSource_SERIALIZE);
    setActiveContext(theActiveContext, false);
    initStatechart();
}

PowerSource::~PowerSource(void) {
    NOTIFY_DESTRUCTOR(~PowerSource, true);
    cleanUpRelations();
    cancelTimeouts();
}

void PowerSource::indicateSystemFault(void) {
    NOTIFY_OPERATION(indicateSystemFault, indicateSystemFault(), 0, System_Analysis_System_Context_PowerSource_indicateSystemFault_SERIALIZE);
    //#[ operation indicateSystemFault()
    std::cout<<"System is faulty\n";
    //#]
}

void PowerSource::indicateSystemReady(void) {
    NOTIFY_OPERATION(indicateSystemReady, indicateSystemReady(), 0, System_Analysis_System_Context_PowerSource_indicateSystemReady_SERIALIZE);
    //#[ operation indicateSystemReady()
    std::cout<<"System is ready\n";
    //#]
}

void PowerSource::runSystemTest(void) {
    NOTIFY_OPERATION(runSystemTest, runSystemTest(), 0, System_Analysis_System_Context_PowerSource_runSystemTest_SERIALIZE);
    //#[ operation runSystemTest()
    std::cout<<"Test the power source\n";
    systemOk = true;
    std::cout<<"Test passed\n";
    //#]
}

//#[ ignore
void PowerSource::setVoltage(int p_voltage) {
    if (voltage != p_voltage)  {
        voltage = p_voltage;
        FLOW_DATA_SEND(voltage, p_PowerSource, setVoltage, x2String);
    }
}
//#]

void PowerSource::switchLightOff(void) {
    NOTIFY_OPERATION(switchLightOff, switchLightOff(), 0, System_Analysis_System_Context_PowerSource_switchLightOff_SERIALIZE);
    //#[ operation switchLightOff()
    std::cout<<"Light Switch Off\n";
    //#]
}

void PowerSource::switchLightOn(void) {
    NOTIFY_OPERATION(switchLightOn, switchLightOn(), 0, System_Analysis_System_Context_PowerSource_switchLightOn_SERIALIZE);
    //#[ operation switchLightOn()
    std::cout<<"Light Switch On\n";
    //#]
}

PowerSource::p_PowerSource_C* PowerSource::getP_PowerSource(void) const {
    return (PowerSource::p_PowerSource_C*) &p_PowerSource;
}

PowerSource::p_PowerSource_C* PowerSource::get_p_PowerSource(void) const {
    return (PowerSource::p_PowerSource_C*) &p_PowerSource;
}

const bool PowerSource::getSystemOk(void) const {
    return systemOk;
}

void PowerSource::setSystemOk(const bool p_systemOk) {
    systemOk = p_systemOk;
}

const int PowerSource::getVoltage(void) const {
    return voltage;
}

const TMS* PowerSource::getItsTMS(void) const {
    return itsTMS;
}

void PowerSource::setItsTMS(TMS* const p_TMS) {
    if(p_TMS != NULL)
        {
            p_TMS->_setItsPowerSource(this);
        }
    _setItsTMS(p_TMS);
}

bool PowerSource::cancelTimeout(const IOxfTimeout* arg) {
    bool res = false;
    if(rootState_timeout == arg)
        {
            rootState_timeout = NULL;
            res = true;
        }
    if(state_9_timeout == arg)
        {
            state_9_timeout = NULL;
            res = true;
        }
    if(state_8_timeout == arg)
        {
            state_8_timeout = NULL;
            res = true;
        }
    return res;
}

bool PowerSource::startBehavior(void) {
    bool done = false;
    done = OMReactive::startBehavior();
    return done;
}

void PowerSource::initStatechart(void) {
    rootState_subState = OMNonState;
    rootState_active = OMNonState;
    rootState_timeout = NULL;
    state_9_subState = OMNonState;
    state_9_active = OMNonState;
    state_9_lastState = OMNonState;
    state_9_timeout = NULL;
    state_8_subState = OMNonState;
    state_8_active = OMNonState;
    state_8_lastState = OMNonState;
    state_8_timeout = NULL;
}

void PowerSource::cleanUpRelations(void) {
    if(itsTMS != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsTMS");
            const PowerSource* p_PowerSource = itsTMS->getItsPowerSource();
            if(p_PowerSource != NULL)
                {
                    itsTMS->__setItsPowerSource(NULL);
                }
            itsTMS = NULL;
        }
}

void PowerSource::cancelTimeouts(void) {
    cancel(rootState_timeout);
    cancel(state_9_timeout);
    cancel(state_8_timeout);
}

void PowerSource::__setItsTMS(TMS* const p_TMS) {
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

void PowerSource::_setItsTMS(TMS* const p_TMS) {
    if(itsTMS != NULL)
        {
            itsTMS->__setItsPowerSource(NULL);
        }
    __setItsTMS(p_TMS);
}

void PowerSource::_clearItsTMS(void) {
    NOTIFY_RELATION_CLEARED("itsTMS");
    itsTMS = NULL;
}

void PowerSource::On_entDef(void) {
    NOTIFY_STATE_ENTERED("ROOT.On");
    rootState_subState = On;
    rootState_active = On;
    rootState_timeout = scheduleTimeout(1000, "ROOT.On");
    state_8_entDef();
    state_9_entDef();
}

void PowerSource::On_exit(void) {
    state_8_lastState = state_8_subState;
    switch (state_8_subState) {
        // State LowPower
        case LowPower:
        {
            NOTIFY_STATE_EXITED("ROOT.On.state_8.LowPower");
            state_8_lastState = LowPower;
        }
        break;
        // State FullPower
        case FullPower:
        {
            cancel(state_8_timeout);
            NOTIFY_STATE_EXITED("ROOT.On.state_8.FullPower");
            state_8_lastState = FullPower;
        }
        break;
        default:
            break;
    }
    state_8_subState = OMNonState;
    NOTIFY_STATE_EXITED("ROOT.On.state_8");
    state_9_lastState = state_9_subState;
    switch (state_9_subState) {
        // State OrdinaryMode
        case OrdinaryMode:
        {
            NOTIFY_STATE_EXITED("ROOT.On.state_9.OrdinaryMode");
            state_9_lastState = OrdinaryMode;
        }
        break;
        // State HighPower
        case HighPower:
        {
            cancel(state_9_timeout);
            NOTIFY_STATE_EXITED("ROOT.On.state_9.HighPower");
            state_9_lastState = HighPower;
        }
        break;
        default:
            break;
    }
    state_9_subState = OMNonState;
    NOTIFY_STATE_EXITED("ROOT.On.state_9");
    cancel(rootState_timeout);
    NOTIFY_STATE_EXITED("ROOT.On");
}

IOxfReactive::TakeEventStatus PowerSource::OnTakeTimeout(void) {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    if(getCurrentEvent() == rootState_timeout)
        {
            //## transition 20 
            if(voltage > 20)
                {
                    NOTIFY_TRANSITION_STARTED("20");
                    On_exit();
                    //#[ transition 20 
                    setVoltage(voltage - 1);
                    //#]
                    On_entDef();
                    NOTIFY_TRANSITION_TERMINATED("20");
                    res = eventConsumed;
                }
        }
    return res;
}

IOxfReactive::TakeEventStatus PowerSource::On_processEvent(void) {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    IOxfReactive::TakeEventStatus omComponentStatus = eventNotConsumed;
    bool dispatchDone = false;
    {
        // State state_8
        omComponentStatus = state_8_processEvent();
        if(omComponentStatus != eventNotConsumed)
            {
                res = eventConsumed;
                if(IS_IN(On) == false)
                    {
                        dispatchDone = true;
                    }
            }
    }
    if(!dispatchDone)
        {
            // State state_9
            omComponentStatus = state_9_processEvent();
            if(omComponentStatus != eventNotConsumed)
                {
                    res = eventConsumed;
                }
        }
    if(res == eventNotConsumed)
        {
            res = On_handleEvent();
        }
    return res;
}

IOxfReactive::TakeEventStatus PowerSource::On_handleEvent(void) {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    if(IS_EVENT_TYPE_OF(OMTimeoutEventId) == 1)
        {
            res = OnTakeTimeout();
        }
    else {
        if(IS_EVENT_TYPE_OF(reqPowerOff_System_Context_System_Analysis_id) == 1)
            {
                NOTIFY_TRANSITION_STARTED("1");
                On_exit();
                //#[ transition 1 
                switchLightOff();
                //#]
                NOTIFY_STATE_ENTERED("ROOT.Off");
                rootState_subState = Off;
                rootState_active = Off;
                NOTIFY_TRANSITION_TERMINATED("1");
                res = eventConsumed;
            }
        }
        
    
    return res;
}

void PowerSource::state_9_entDef(void) {
    NOTIFY_STATE_ENTERED("ROOT.On.state_9");
    NOTIFY_TRANSITION_STARTED("19");
    state_9_entShallowHist();
    NOTIFY_TRANSITION_TERMINATED("19");
}

void PowerSource::state_9_entShallowHist(void) {
    if(state_9_lastState == OMNonState)
        {
            NOTIFY_TRANSITION_STARTED("18");
            NOTIFY_STATE_ENTERED("ROOT.On.state_9.OrdinaryMode");
            state_9_subState = OrdinaryMode;
            state_9_active = OrdinaryMode;
            NOTIFY_TRANSITION_TERMINATED("18");
        }
    else
        {
            state_9_subState = state_9_lastState;
            switch (state_9_subState) {
                case OrdinaryMode:
                {
                    NOTIFY_STATE_ENTERED("ROOT.On.state_9.OrdinaryMode");
                    state_9_subState = OrdinaryMode;
                    state_9_active = OrdinaryMode;
                }
                break;
                case HighPower:
                {
                    NOTIFY_STATE_ENTERED("ROOT.On.state_9.HighPower");
                    state_9_subState = HighPower;
                    state_9_active = HighPower;
                    state_9_timeout = scheduleTimeout(8000, "ROOT.On.state_9.HighPower");
                }
                break;
                default:
                    break;
            }
        }
}

IOxfReactive::TakeEventStatus PowerSource::state_9_processEvent(void) {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    switch (state_9_active) {
        // State OrdinaryMode
        case OrdinaryMode:
        {
            if(IS_EVENT_TYPE_OF(reqHighPower_System_Context_System_Analysis_id) == 1)
                {
                    NOTIFY_TRANSITION_STARTED("14");
                    NOTIFY_STATE_EXITED("ROOT.On.state_9.OrdinaryMode");
                    NOTIFY_STATE_ENTERED("ROOT.On.state_9.HighPower");
                    state_9_subState = HighPower;
                    state_9_active = HighPower;
                    state_9_timeout = scheduleTimeout(8000, "ROOT.On.state_9.HighPower");
                    NOTIFY_TRANSITION_TERMINATED("14");
                    res = eventConsumed;
                }
            
            
        }
        break;
        // State HighPower
        case HighPower:
        {
            if(IS_EVENT_TYPE_OF(OMTimeoutEventId) == 1)
                {
                    if(getCurrentEvent() == state_9_timeout)
                        {
                            NOTIFY_TRANSITION_STARTED("15");
                            On_exit();
                            NOTIFY_STATE_ENTERED("ROOT.accepttimeevent_12");
                            pushNullTransition();
                            rootState_subState = accepttimeevent_12;
                            rootState_active = accepttimeevent_12;
                            NOTIFY_TRANSITION_TERMINATED("15");
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

void PowerSource::state_8_entDef(void) {
    NOTIFY_STATE_ENTERED("ROOT.On.state_8");
    NOTIFY_TRANSITION_STARTED("12");
    state_8_entShallowHist();
    NOTIFY_TRANSITION_TERMINATED("12");
}

void PowerSource::state_8_entShallowHist(void) {
    if(state_8_lastState == OMNonState)
        {
            NOTIFY_TRANSITION_STARTED("13");
            NOTIFY_STATE_ENTERED("ROOT.On.state_8.LowPower");
            state_8_subState = LowPower;
            state_8_active = LowPower;
            NOTIFY_TRANSITION_TERMINATED("13");
        }
    else
        {
            state_8_subState = state_8_lastState;
            switch (state_8_subState) {
                case LowPower:
                {
                    NOTIFY_STATE_ENTERED("ROOT.On.state_8.LowPower");
                    state_8_subState = LowPower;
                    state_8_active = LowPower;
                }
                break;
                case FullPower:
                {
                    NOTIFY_STATE_ENTERED("ROOT.On.state_8.FullPower");
                    state_8_subState = FullPower;
                    state_8_active = FullPower;
                    state_8_timeout = scheduleTimeout(4000, "ROOT.On.state_8.FullPower");
                }
                break;
                default:
                    break;
            }
        }
}

IOxfReactive::TakeEventStatus PowerSource::state_8_processEvent(void) {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    switch (state_8_active) {
        // State LowPower
        case LowPower:
        {
            if(IS_EVENT_TYPE_OF(reqFullPower_System_Context_System_Analysis_id) == 1)
                {
                    NOTIFY_TRANSITION_STARTED("10");
                    NOTIFY_STATE_EXITED("ROOT.On.state_8.LowPower");
                    NOTIFY_STATE_ENTERED("ROOT.On.state_8.FullPower");
                    state_8_subState = FullPower;
                    state_8_active = FullPower;
                    state_8_timeout = scheduleTimeout(4000, "ROOT.On.state_8.FullPower");
                    NOTIFY_TRANSITION_TERMINATED("10");
                    res = eventConsumed;
                }
            
            
        }
        break;
        // State FullPower
        case FullPower:
        {
            if(IS_EVENT_TYPE_OF(OMTimeoutEventId) == 1)
                {
                    if(getCurrentEvent() == state_8_timeout)
                        {
                            NOTIFY_TRANSITION_STARTED("7");
                            On_exit();
                            NOTIFY_STATE_ENTERED("ROOT.accepttimeevent_5");
                            pushNullTransition();
                            rootState_subState = accepttimeevent_5;
                            rootState_active = accepttimeevent_5;
                            NOTIFY_TRANSITION_TERMINATED("7");
                            res = eventConsumed;
                        }
                }
            else {
                if(IS_EVENT_TYPE_OF(reqLowPower_System_Context_System_Analysis_id) == 1)
                    {
                        NOTIFY_TRANSITION_STARTED("11");
                        cancel(state_8_timeout);
                        NOTIFY_STATE_EXITED("ROOT.On.state_8.FullPower");
                        NOTIFY_STATE_ENTERED("ROOT.On.state_8.LowPower");
                        state_8_subState = LowPower;
                        state_8_active = LowPower;
                        NOTIFY_TRANSITION_TERMINATED("11");
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

IOxfReactive::TakeEventStatus PowerSource::CheckingSystemStatusTakeNull(void) {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    //## transition 4 
    if(systemOk)
        {
            NOTIFY_TRANSITION_STARTED("3");
            NOTIFY_TRANSITION_STARTED("4");
            popNullTransition();
            NOTIFY_STATE_EXITED("ROOT.CheckingSystemStatus");
            //#[ transition 4 
            switchLightOn();
            indicateSystemReady();
            //#]
            On_entDef();
            NOTIFY_TRANSITION_TERMINATED("4");
            NOTIFY_TRANSITION_TERMINATED("3");
            res = eventConsumed;
        }
    else
        {
            NOTIFY_TRANSITION_STARTED("3");
            NOTIFY_TRANSITION_STARTED("5");
            popNullTransition();
            NOTIFY_STATE_EXITED("ROOT.CheckingSystemStatus");
            //#[ transition 5 
            indicateSystemFault();
            //#]
            NOTIFY_STATE_ENTERED("ROOT.SystemFault");
            rootState_subState = SystemFault;
            rootState_active = SystemFault;
            NOTIFY_TRANSITION_TERMINATED("5");
            NOTIFY_TRANSITION_TERMINATED("3");
            res = eventConsumed;
        }
    return res;
}

IOxfReactive::TakeEventStatus PowerSource::CheckingSystemStatus_handleEvent(void) {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    if(IS_EVENT_TYPE_OF(OMNullEventId) == 1)
        {
            res = CheckingSystemStatusTakeNull();
        }
    
    return res;
}

void PowerSource::rootState_entDef(void) {
    {
        NOTIFY_STATE_ENTERED("ROOT");
        NOTIFY_TRANSITION_STARTED("0");
        NOTIFY_STATE_ENTERED("ROOT.Off");
        rootState_subState = Off;
        rootState_active = Off;
        NOTIFY_TRANSITION_TERMINATED("0");
    }
}

IOxfReactive::TakeEventStatus PowerSource::rootState_processEvent(void) {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    switch (rootState_active) {
        // State Off
        case Off:
        {
            if(IS_EVENT_TYPE_OF(reqPowerOn_System_Context_System_Analysis_id) == 1)
                {
                    NOTIFY_TRANSITION_STARTED("2");
                    NOTIFY_STATE_EXITED("ROOT.Off");
                    NOTIFY_STATE_ENTERED("ROOT.CheckingSystemStatus");
                    pushNullTransition();
                    rootState_subState = CheckingSystemStatus;
                    rootState_active = CheckingSystemStatus;
                    //#[ state CheckingSystemStatus.(Entry) 
                    runSystemTest();
                    //#]
                    NOTIFY_TRANSITION_TERMINATED("2");
                    res = eventConsumed;
                }
            
        }
        break;
        // State On
        case On:
        {
            res = On_processEvent();
        }
        break;
        // State CheckingSystemStatus
        case CheckingSystemStatus:
        {
            res = CheckingSystemStatus_handleEvent();
        }
        break;
        // State SystemFault
        case SystemFault:
        {
            if(IS_EVENT_TYPE_OF(evFaultCleared_System_Context_System_Analysis_id) == 1)
                {
                    NOTIFY_TRANSITION_STARTED("6");
                    NOTIFY_STATE_EXITED("ROOT.SystemFault");
                    NOTIFY_STATE_ENTERED("ROOT.Off");
                    rootState_subState = Off;
                    rootState_active = Off;
                    NOTIFY_TRANSITION_TERMINATED("6");
                    res = eventConsumed;
                }
            
        }
        break;
        case accepttimeevent_5:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId) == 1)
                {
                    NOTIFY_TRANSITION_STARTED("8");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.accepttimeevent_5");
                    NOTIFY_STATE_ENTERED("ROOT.Off");
                    rootState_subState = Off;
                    rootState_active = Off;
                    NOTIFY_TRANSITION_TERMINATED("8");
                    res = eventConsumed;
                }
            
        }
        break;
        case accepttimeevent_12:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId) == 1)
                {
                    NOTIFY_TRANSITION_STARTED("16");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.accepttimeevent_12");
                    NOTIFY_STATE_ENTERED("ROOT.Off");
                    rootState_subState = Off;
                    rootState_active = Off;
                    NOTIFY_TRANSITION_TERMINATED("16");
                    res = eventConsumed;
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
void OMAnimatedPowerSource::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    aomsAttributes->addAttribute("systemOk", x2String(myReal->systemOk));
    aomsAttributes->addAttribute("voltage", x2String(myReal->voltage));
}

void OMAnimatedPowerSource::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsTMS", false, true);
    if(myReal->itsTMS)
        {
            aomsRelations->ADD_ITEM(myReal->itsTMS);
        }
}

void OMAnimatedPowerSource::rootState_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT");
    switch (myReal->rootState_subState) {
        case PowerSource::Off:
        {
            Off_serializeStates(aomsState);
        }
        break;
        case PowerSource::On:
        {
            On_serializeStates(aomsState);
        }
        break;
        case PowerSource::CheckingSystemStatus:
        {
            CheckingSystemStatus_serializeStates(aomsState);
        }
        break;
        case PowerSource::SystemFault:
        {
            SystemFault_serializeStates(aomsState);
        }
        break;
        case PowerSource::accepttimeevent_5:
        {
            accepttimeevent_5_serializeStates(aomsState);
        }
        break;
        case PowerSource::accepttimeevent_12:
        {
            accepttimeevent_12_serializeStates(aomsState);
        }
        break;
        default:
            break;
    }
}

void OMAnimatedPowerSource::SystemFault_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.SystemFault");
}

void OMAnimatedPowerSource::On_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.On");
    state_8_serializeStates(aomsState);
    state_9_serializeStates(aomsState);
}

void OMAnimatedPowerSource::state_9_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.On.state_9");
    switch (myReal->state_9_subState) {
        case PowerSource::OrdinaryMode:
        {
            OrdinaryMode_serializeStates(aomsState);
        }
        break;
        case PowerSource::HighPower:
        {
            HighPower_serializeStates(aomsState);
        }
        break;
        default:
            break;
    }
}

void OMAnimatedPowerSource::OrdinaryMode_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.On.state_9.OrdinaryMode");
}

void OMAnimatedPowerSource::HighPower_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.On.state_9.HighPower");
}

void OMAnimatedPowerSource::state_8_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.On.state_8");
    switch (myReal->state_8_subState) {
        case PowerSource::LowPower:
        {
            LowPower_serializeStates(aomsState);
        }
        break;
        case PowerSource::FullPower:
        {
            FullPower_serializeStates(aomsState);
        }
        break;
        default:
            break;
    }
}

void OMAnimatedPowerSource::LowPower_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.On.state_8.LowPower");
}

void OMAnimatedPowerSource::FullPower_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.On.state_8.FullPower");
}

void OMAnimatedPowerSource::Off_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.Off");
}

void OMAnimatedPowerSource::CheckingSystemStatus_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.CheckingSystemStatus");
}

void OMAnimatedPowerSource::accepttimeevent_5_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.accepttimeevent_5");
}

void OMAnimatedPowerSource::accepttimeevent_12_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.accepttimeevent_12");
}
//#]

IMPLEMENT_REACTIVE_META_P(PowerSource, System_Analysis_System_Context, System_Analysis::System_Context, false, OMAnimatedPowerSource)

IMPLEMENT_META_OP(OMAnimatedPowerSource, System_Analysis_System_Context_PowerSource_setVoltage_int, "setVoltage", FALSE, "setVoltage(int)", 1)

IMPLEMENT_OP_CALL(System_Analysis_System_Context_PowerSource_setVoltage_int, PowerSource, setVoltage(p_voltage), NO_OP())
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\PowerSource.cpp
*********************************************************************/
