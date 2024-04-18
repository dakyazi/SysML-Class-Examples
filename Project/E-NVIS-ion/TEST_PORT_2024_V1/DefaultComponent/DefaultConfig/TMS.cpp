/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20235613
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: TMS
//!	Generated Date	: Thu, 18, Apr 2024  
	File Path	: DefaultComponent\DefaultConfig\TMS.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX

#define _OMSTATECHART_ANIMATED
//#]

//## auto_generated
#include "TMS.h"
//## link itsHVAC
#include "HVAC.h"
//#[ ignore
#define Logical_Architecture_TMS_TMS_SERIALIZE OM_NO_OP
//#]

//## package Logical_Architecture

//## class TMS
//#[ ignore
TMS::p_TMS_C::p_TMS_C(void) : IB_Heater(), IB_Cooler(), _p_(0), itsIB_Cooler(NULL), itsIB_Heater(NULL) {
}

TMS::p_TMS_C::~p_TMS_C(void) {
    cleanUpRelations();
}

IB_Cooler* TMS::p_TMS_C::getItsIB_Cooler(void) {
    return this;
}

IB_Heater* TMS::p_TMS_C::getItsIB_Heater(void) {
    return this;
}

TMS::p_TMS_C* TMS::p_TMS_C::getOutBound(void) {
    return this;
}

void TMS::p_TMS_C::startCooler(void) {
    
    if (itsIB_Cooler != NULL) {
        itsIB_Cooler->startCooler();
    }
    
}

void TMS::p_TMS_C::startHeater(void) {
    
    if (itsIB_Heater != NULL) {
        itsIB_Heater->startHeater();
    }
    
}

void TMS::p_TMS_C::setItsIB_Cooler(IB_Cooler* const p_IB_Cooler) {
    itsIB_Cooler = p_IB_Cooler;
}

void TMS::p_TMS_C::setItsIB_Heater(IB_Heater* const p_IB_Heater) {
    itsIB_Heater = p_IB_Heater;
}

void TMS::p_TMS_C::cleanUpRelations(void) {
    if(itsIB_Cooler != NULL)
        {
            itsIB_Cooler = NULL;
        }
    if(itsIB_Heater != NULL)
        {
            itsIB_Heater = NULL;
        }
}
//#]

TMS::TMS(IOxfActive* const theActiveContext) : OMReactive(), itsHVAC(NULL) {
    NOTIFY_REACTIVE_CONSTRUCTOR(TMS, TMS(), 0, Logical_Architecture_TMS_TMS_SERIALIZE);
    setActiveContext(theActiveContext, false);
    initStatechart();
}

TMS::~TMS(void) {
    NOTIFY_DESTRUCTOR(~TMS, true);
    cleanUpRelations();
    cancelTimeouts();
}

TMS::p_TMS_C* TMS::getP_TMS(void) const {
    return (TMS::p_TMS_C*) &p_TMS;
}

TMS::p_TMS_C* TMS::get_p_TMS(void) const {
    return (TMS::p_TMS_C*) &p_TMS;
}

const HVAC* TMS::getItsHVAC(void) const {
    return itsHVAC;
}

void TMS::setItsHVAC(HVAC* const p_HVAC) {
    if(p_HVAC != NULL)
        {
            p_HVAC->_setItsTMS(this);
        }
    _setItsHVAC(p_HVAC);
}

bool TMS::cancelTimeout(const IOxfTimeout* arg) {
    bool res = false;
    if(rootState_timeout == arg)
        {
            rootState_timeout = NULL;
            res = true;
        }
    return res;
}

bool TMS::startBehavior(void) {
    bool done = false;
    done = OMReactive::startBehavior();
    return done;
}

void TMS::initStatechart(void) {
    rootState_subState = OMNonState;
    rootState_active = OMNonState;
    rootState_timeout = NULL;
}

void TMS::cleanUpRelations(void) {
    if(itsHVAC != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsHVAC");
            const TMS* p_TMS = itsHVAC->getItsTMS();
            if(p_TMS != NULL)
                {
                    itsHVAC->__setItsTMS(NULL);
                }
            itsHVAC = NULL;
        }
}

void TMS::cancelTimeouts(void) {
    cancel(rootState_timeout);
}

void TMS::__setItsHVAC(HVAC* const p_HVAC) {
    itsHVAC = p_HVAC;
    if(p_HVAC != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsHVAC", p_HVAC, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsHVAC");
        }
}

void TMS::_setItsHVAC(HVAC* const p_HVAC) {
    if(itsHVAC != NULL)
        {
            itsHVAC->__setItsTMS(NULL);
        }
    __setItsHVAC(p_HVAC);
}

void TMS::_clearItsHVAC(void) {
    NOTIFY_RELATION_CLEARED("itsHVAC");
    itsHVAC = NULL;
}

void TMS::rootState_entDef(void) {
    {
        NOTIFY_STATE_ENTERED("ROOT");
        NOTIFY_TRANSITION_STARTED("0");
        NOTIFY_STATE_ENTERED("ROOT.Off");
        rootState_subState = Off;
        rootState_active = Off;
        NOTIFY_TRANSITION_TERMINATED("0");
    }
}

IOxfReactive::TakeEventStatus TMS::rootState_processEvent(void) {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    switch (rootState_active) {
        // State Off
        case Off:
        {
            if(IS_EVENT_TYPE_OF(evTMS_On_Logical_Architecture_id) == 1)
                {
                    NOTIFY_TRANSITION_STARTED("1");
                    NOTIFY_STATE_EXITED("ROOT.Off");
                    //#[ transition 1 
                    OUT_PORT(p_TMS)->startHeater();
                    OUT_PORT(p_TMS)->startCooler();
                    //#]
                    NOTIFY_STATE_ENTERED("ROOT.On");
                    rootState_subState = On;
                    rootState_active = On;
                    rootState_timeout = scheduleTimeout(1000, "ROOT.On");
                    NOTIFY_TRANSITION_TERMINATED("1");
                    res = eventConsumed;
                }
            
        }
        break;
        // State On
        case On:
        {
            if(IS_EVENT_TYPE_OF(OMTimeoutEventId) == 1)
                {
                    if(getCurrentEvent() == rootState_timeout)
                        {
                            NOTIFY_TRANSITION_STARTED("3");
                            cancel(rootState_timeout);
                            NOTIFY_STATE_EXITED("ROOT.On");
                            NOTIFY_STATE_ENTERED("ROOT.On");
                            rootState_subState = On;
                            rootState_active = On;
                            rootState_timeout = scheduleTimeout(1000, "ROOT.On");
                            NOTIFY_TRANSITION_TERMINATED("3");
                            res = eventConsumed;
                        }
                }
            else {
                if(IS_EVENT_TYPE_OF(evTMS_Off_Logical_Architecture_id) == 1)
                    {
                        NOTIFY_TRANSITION_STARTED("2");
                        cancel(rootState_timeout);
                        NOTIFY_STATE_EXITED("ROOT.On");
                        NOTIFY_STATE_ENTERED("ROOT.Off");
                        rootState_subState = Off;
                        rootState_active = Off;
                        NOTIFY_TRANSITION_TERMINATED("2");
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
void OMAnimatedTMS::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsHVAC", false, true);
    if(myReal->itsHVAC)
        {
            aomsRelations->ADD_ITEM(myReal->itsHVAC);
        }
}

void OMAnimatedTMS::rootState_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT");
    switch (myReal->rootState_subState) {
        case TMS::Off:
        {
            Off_serializeStates(aomsState);
        }
        break;
        case TMS::On:
        {
            On_serializeStates(aomsState);
        }
        break;
        default:
            break;
    }
}

void OMAnimatedTMS::On_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.On");
}

void OMAnimatedTMS::Off_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.Off");
}
//#]

IMPLEMENT_REACTIVE_META_P(TMS, Logical_Architecture, Logical_Architecture, false, OMAnimatedTMS)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\TMS.cpp
*********************************************************************/
