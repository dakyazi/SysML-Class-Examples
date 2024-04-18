/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20235613
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Heater
//!	Generated Date	: Thu, 18, Apr 2024  
	File Path	: DefaultComponent\DefaultConfig\Heater.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX

#define _OMSTATECHART_ANIMATED
//#]

//## auto_generated
#include "Heater.h"
//#[ ignore
#define Logical_Architecture_Heater_Heater_SERIALIZE OM_NO_OP

#define Logical_Architecture_Heater_startHeater_SERIALIZE OM_NO_OP

#define Logical_Architecture_Heater_updateTemp_SERIALIZE OM_NO_OP
//#]

//## package Logical_Architecture

//## class Heater
//#[ ignore
Heater::p_Heater_C::p_Heater_C(void) : IB_Heater(), _p_(0), itsIB_Heater(NULL) {
}

Heater::p_Heater_C::~p_Heater_C(void) {
    cleanUpRelations();
}

void Heater::p_Heater_C::connectHeater(Heater* part) {
    setItsIB_Heater(part);
    
}

IB_Heater* Heater::p_Heater_C::getItsIB_Heater(void) {
    return this;
}

void Heater::p_Heater_C::startHeater(void) {
    
    if (itsIB_Heater != NULL) {
        itsIB_Heater->startHeater();
    }
    
}

void Heater::p_Heater_C::setItsIB_Heater(IB_Heater* const p_IB_Heater) {
    itsIB_Heater = p_IB_Heater;
}

void Heater::p_Heater_C::cleanUpRelations(void) {
    if(itsIB_Heater != NULL)
        {
            itsIB_Heater = NULL;
        }
}
//#]

Heater::Heater(IOxfActive* const theActiveContext) : OMReactive(), IB_Heater(), currentTemp(0) {
    NOTIFY_REACTIVE_CONSTRUCTOR(Heater, Heater(), 0, Logical_Architecture_Heater_Heater_SERIALIZE);
    setActiveContext(theActiveContext, false);
    initRelations();
    initStatechart();
}

Heater::~Heater(void) {
    NOTIFY_DESTRUCTOR(~Heater, false);
    cancelTimeouts();
}

void Heater::startHeater(void) {
    NOTIFY_OPERATION(startHeater, startHeater(), 0, Logical_Architecture_Heater_startHeater_SERIALIZE);
    //#[ operation startHeater()
    std::cout<<"Heater start\n";
    updateTemp();
    //#]
}

void Heater::updateTemp(void) {
    NOTIFY_OPERATION(updateTemp, updateTemp(), 0, Logical_Architecture_Heater_updateTemp_SERIALIZE);
    //#[ operation updateTemp()
    currentTemp+=1;
    if(currentTemp == 30) {
    currentTemp = 19;
    }
    std::cout<<"Heater temp is "<<currentTemp<<" deg C"<<std::endl;
    //#]
}

Heater::p_Heater_C* Heater::getP_Heater(void) const {
    return (Heater::p_Heater_C*) &p_Heater;
}

Heater::p_Heater_C* Heater::get_p_Heater(void) const {
    return (Heater::p_Heater_C*) &p_Heater;
}

bool Heater::cancelTimeout(const IOxfTimeout* arg) {
    bool res = false;
    if(rootState_timeout == arg)
        {
            rootState_timeout = NULL;
            res = true;
        }
    return res;
}

bool Heater::startBehavior(void) {
    bool done = false;
    done = OMReactive::startBehavior();
    return done;
}

void Heater::initRelations(void) {
    if (get_p_Heater() != NULL) {
        get_p_Heater()->connectHeater(this);
    }
}

void Heater::initStatechart(void) {
    rootState_subState = OMNonState;
    rootState_active = OMNonState;
    rootState_timeout = NULL;
}

void Heater::cancelTimeouts(void) {
    cancel(rootState_timeout);
}

const int Heater::getCurrentTemp(void) const {
    return currentTemp;
}

void Heater::setCurrentTemp(const int p_currentTemp) {
    currentTemp = p_currentTemp;
}

void Heater::rootState_entDef(void) {
    {
        NOTIFY_STATE_ENTERED("ROOT");
        NOTIFY_TRANSITION_STARTED("0");
        NOTIFY_STATE_ENTERED("ROOT.On");
        rootState_subState = On;
        rootState_active = On;
        rootState_timeout = scheduleTimeout(1000, "ROOT.On");
        NOTIFY_TRANSITION_TERMINATED("0");
    }
}

IOxfReactive::TakeEventStatus Heater::rootState_processEvent(void) {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    // State On
    if(rootState_active == On)
        {
            if(IS_EVENT_TYPE_OF(OMTimeoutEventId) == 1)
                {
                    if(getCurrentEvent() == rootState_timeout)
                        {
                            NOTIFY_TRANSITION_STARTED("1");
                            cancel(rootState_timeout);
                            NOTIFY_STATE_EXITED("ROOT.On");
                            //#[ transition 1 
                            updateTemp();
                            //#]
                            NOTIFY_STATE_ENTERED("ROOT.On");
                            rootState_subState = On;
                            rootState_active = On;
                            rootState_timeout = scheduleTimeout(1000, "ROOT.On");
                            NOTIFY_TRANSITION_TERMINATED("1");
                            res = eventConsumed;
                        }
                }
            
        }
    return res;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedHeater::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    aomsAttributes->addAttribute("currentTemp", x2String(myReal->currentTemp));
    OMAnimatedIB_Heater::serializeAttributes(aomsAttributes);
}

void OMAnimatedHeater::serializeRelations(AOMSRelations* aomsRelations) const {
    OMAnimatedIB_Heater::serializeRelations(aomsRelations);
}

void OMAnimatedHeater::rootState_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT");
    if(myReal->rootState_subState == Heater::On)
        {
            On_serializeStates(aomsState);
        }
}

void OMAnimatedHeater::On_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.On");
}
//#]

IMPLEMENT_REACTIVE_META_S_P(Heater, Logical_Architecture, false, IB_Heater, OMAnimatedIB_Heater, OMAnimatedHeater)

OMINIT_SUPERCLASS(IB_Heater, OMAnimatedIB_Heater)

OMREGISTER_REACTIVE_CLASS
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Heater.cpp
*********************************************************************/
