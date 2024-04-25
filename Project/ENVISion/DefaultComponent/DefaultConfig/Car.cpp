/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20235613
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Car
//!	Generated Date	: Thu, 25, Apr 2024  
	File Path	: DefaultComponent\DefaultConfig\Car.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX

#define _OMSTATECHART_ANIMATED
//#]

//## auto_generated
#include "Car.h"
//## link itsNVIS
#include "NVIS.h"
//#[ ignore
#define System_Analysis_System_Context_Car_Car_SERIALIZE OM_NO_OP

#define System_Analysis_System_Context_Car_runCar_SERIALIZE OM_NO_OP

#define System_Analysis_System_Context_Car_runSpeedCheck_SERIALIZE OM_NO_OP
//#]

//## package System_Analysis::System_Context

//## class Car
//#[ ignore
Car::port_Car_C::port_Car_C(void) : IB_NVIS(), _p_(0), itsIB_NVIS(NULL) {
}

Car::port_Car_C::~port_Car_C(void) {
    cleanUpRelations();
}

void Car::port_Car_C::connectCar(Car* part) {
    setItsIB_NVIS(part);
    
}

IB_NVIS* Car::port_Car_C::getItsIB_NVIS(void) {
    return this;
}

double Car::port_Car_C::runCar(void) {
    double res = 0.0;
    if (itsIB_NVIS != NULL) {
        res = itsIB_NVIS->runCar();
    }
    return res;
}

void Car::port_Car_C::setItsIB_NVIS(IB_NVIS* const p_IB_NVIS) {
    itsIB_NVIS = p_IB_NVIS;
}

void Car::port_Car_C::cleanUpRelations(void) {
    if(itsIB_NVIS != NULL)
        {
            itsIB_NVIS = NULL;
        }
}
//#]

Car::Car(IOxfActive* const theActiveContext) : OMReactive(), IB_NVIS(), speed(80), itsNVIS(NULL) {
    NOTIFY_REACTIVE_CONSTRUCTOR(Car, Car(), 0, System_Analysis_System_Context_Car_Car_SERIALIZE);
    setActiveContext(theActiveContext, false);
    initRelations();
    initStatechart();
}

Car::~Car(void) {
    NOTIFY_DESTRUCTOR(~Car, false);
    cleanUpRelations();
    cancelTimeouts();
}

double Car::runCar(void) {
    NOTIFY_OPERATION(runCar, runCar(), 0, System_Analysis_System_Context_Car_runCar_SERIALIZE);
    //#[ operation runCar()
    speed = (rand() % (120 - 80 + 1)) +80;
    if (rand() % 2){
    speed = speed + 2;}
    else {
    speed = speed - 2;
    }
    return speed;
    //#]
}

double Car::runSpeedCheck(void) {
    NOTIFY_OPERATION(runSpeedCheck, runSpeedCheck(), 0, System_Analysis_System_Context_Car_runSpeedCheck_SERIALIZE);
    //#[ operation runSpeedCheck()
    if (rand() % 2){
    speed = speed + 2;}
    else {
    speed = speed - 2;
    }
    return speed;
    //#]
}

Car::port_Car_C* Car::getPort_Car(void) const {
    return (Car::port_Car_C*) &port_Car;
}

Car::port_Car_C* Car::get_port_Car(void) const {
    return (Car::port_Car_C*) &port_Car;
}

const int Car::getSpeed(void) const {
    return speed;
}

void Car::setSpeed(const int p_speed) {
    speed = p_speed;
    NOTIFY_SET_OPERATION;
}

const NVIS* Car::getItsNVIS(void) const {
    return itsNVIS;
}

void Car::setItsNVIS(NVIS* const p_NVIS) {
    if(p_NVIS != NULL)
        {
            p_NVIS->_setItsCar(this);
        }
    _setItsNVIS(p_NVIS);
}

bool Car::cancelTimeout(const IOxfTimeout* arg) {
    bool res = false;
    if(rootState_timeout == arg)
        {
            rootState_timeout = NULL;
            res = true;
        }
    return res;
}

bool Car::startBehavior(void) {
    bool done = false;
    done = OMReactive::startBehavior();
    return done;
}

void Car::initRelations(void) {
    if (get_port_Car() != NULL) {
        get_port_Car()->connectCar(this);
    }
}

void Car::initStatechart(void) {
    rootState_subState = OMNonState;
    rootState_active = OMNonState;
    rootState_timeout = NULL;
}

void Car::cleanUpRelations(void) {
    if(itsNVIS != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsNVIS");
            const Car* p_Car = itsNVIS->getItsCar();
            if(p_Car != NULL)
                {
                    itsNVIS->__setItsCar(NULL);
                }
            itsNVIS = NULL;
        }
}

void Car::cancelTimeouts(void) {
    cancel(rootState_timeout);
}

void Car::__setItsNVIS(NVIS* const p_NVIS) {
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

void Car::_setItsNVIS(NVIS* const p_NVIS) {
    if(itsNVIS != NULL)
        {
            itsNVIS->__setItsCar(NULL);
        }
    __setItsNVIS(p_NVIS);
}

void Car::_clearItsNVIS(void) {
    NOTIFY_RELATION_CLEARED("itsNVIS");
    itsNVIS = NULL;
}

void Car::rootState_entDef(void) {
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

IOxfReactive::TakeEventStatus Car::rootState_processEvent(void) {
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
                            runCar();
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
void OMAnimatedCar::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    aomsAttributes->addAttribute("speed", x2String(myReal->speed));
    OMAnimatedIB_NVIS::serializeAttributes(aomsAttributes);
}

void OMAnimatedCar::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsNVIS", false, true);
    if(myReal->itsNVIS)
        {
            aomsRelations->ADD_ITEM(myReal->itsNVIS);
        }
    OMAnimatedIB_NVIS::serializeRelations(aomsRelations);
}

void OMAnimatedCar::rootState_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT");
    if(myReal->rootState_subState == Car::On)
        {
            On_serializeStates(aomsState);
        }
}

void OMAnimatedCar::On_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.On");
}
//#]

IMPLEMENT_REACTIVE_META_S_P(Car, System_Analysis::System_Context, false, IB_NVIS, OMAnimatedIB_NVIS, OMAnimatedCar)

OMINIT_SUPERCLASS(IB_NVIS, OMAnimatedIB_NVIS)

OMREGISTER_REACTIVE_CLASS
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Car.cpp
*********************************************************************/
