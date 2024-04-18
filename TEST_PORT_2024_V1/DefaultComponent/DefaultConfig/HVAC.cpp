/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20235613
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: HVAC
//!	Generated Date	: Thu, 18, Apr 2024  
	File Path	: DefaultComponent\DefaultConfig\HVAC.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "HVAC.h"
//## link itsTMS
#include "TMS.h"
//#[ ignore
#define Logical_Architecture_HVAC_HVAC_SERIALIZE OM_NO_OP

#define Logical_Architecture_HVAC_startCooler_SERIALIZE OM_NO_OP

#define Logical_Architecture_HVAC_startHeater_SERIALIZE OM_NO_OP
//#]

//## package Logical_Architecture

//## class HVAC
//#[ ignore
HVAC::p_HVAC_C::p_HVAC_C(void) : IB_Heater(), IB_Cooler(), _p_(0), itsIB_Cooler(NULL), itsIB_Heater(NULL) {
}

HVAC::p_HVAC_C::~p_HVAC_C(void) {
    cleanUpRelations();
}

IB_Cooler* HVAC::p_HVAC_C::getItsIB_Cooler(void) {
    return this;
}

IB_Heater* HVAC::p_HVAC_C::getItsIB_Heater(void) {
    return this;
}

void HVAC::p_HVAC_C::startCooler(void) {
    
    if (itsIB_Cooler != NULL) {
        itsIB_Cooler->startCooler();
    }
    
}

void HVAC::p_HVAC_C::startHeater(void) {
    
    if (itsIB_Heater != NULL) {
        itsIB_Heater->startHeater();
    }
    
}

void HVAC::p_HVAC_C::setItsIB_Cooler(IB_Cooler* const p_IB_Cooler) {
    itsIB_Cooler = p_IB_Cooler;
}

void HVAC::p_HVAC_C::setItsIB_Heater(IB_Heater* const p_IB_Heater) {
    itsIB_Heater = p_IB_Heater;
}

void HVAC::p_HVAC_C::cleanUpRelations(void) {
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

HVAC::HVAC(IOxfActive* const theActiveContext) : OMReactive(), IB_Heater(), IB_Cooler(), itsTMS(NULL) {
    NOTIFY_REACTIVE_CONSTRUCTOR(HVAC, HVAC(), 0, Logical_Architecture_HVAC_HVAC_SERIALIZE);
    setActiveContext(theActiveContext, false);
    {
        {
            itsHeater.setShouldDelete(false);
        }
    }
    initRelations();
}

HVAC::~HVAC(void) {
    NOTIFY_DESTRUCTOR(~HVAC, false);
    cleanUpRelations();
}

void HVAC::startCooler(void) {
    NOTIFY_OPERATION(startCooler, startCooler(), 0, Logical_Architecture_HVAC_startCooler_SERIALIZE);
    //#[ operation startCooler()
    std::cout<<"HVAC: Start the Cooler\n";
    //#]
}

void HVAC::startHeater(void) {
    NOTIFY_OPERATION(startHeater, startHeater(), 0, Logical_Architecture_HVAC_startHeater_SERIALIZE);
    //#[ operation startHeater()
    std::cout<<"HVAC: Start the heater\n";
    //#]
}

HVAC::p_HVAC_C* HVAC::getP_HVAC(void) const {
    return (HVAC::p_HVAC_C*) &p_HVAC;
}

HVAC::p_HVAC_C* HVAC::get_p_HVAC(void) const {
    return (HVAC::p_HVAC_C*) &p_HVAC;
}

const Cooler* HVAC::getItsCooler(void) const {
    return &itsCooler;
}

const Heater* HVAC::getItsHeater(void) const {
    return &itsHeater;
}

const TMS* HVAC::getItsTMS(void) const {
    return itsTMS;
}

void HVAC::setItsTMS(TMS* const p_TMS) {
    if(p_TMS != NULL)
        {
            p_TMS->_setItsHVAC(this);
        }
    _setItsTMS(p_TMS);
}

bool HVAC::startBehavior(void) {
    bool done = true;
    if(done == true)
        {
            done = itsHeater.startBehavior();
        }
    if(done == true)
        {
            done = OMReactive::startBehavior();
        }
    return done;
}

void HVAC::initRelations(void) {
    {
        
        get_p_HVAC()->setItsIB_Heater(itsHeater.get_p_Heater()->getItsIB_Heater());
        
    }
    {
        
        get_p_HVAC()->setItsIB_Cooler(itsCooler.get_p_Cooler()->getItsIB_Cooler());
        
    }
}

void HVAC::cleanUpRelations(void) {
    if(itsTMS != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsTMS");
            const HVAC* p_HVAC = itsTMS->getItsHVAC();
            if(p_HVAC != NULL)
                {
                    itsTMS->__setItsHVAC(NULL);
                }
            itsTMS = NULL;
        }
}

void HVAC::__setItsTMS(TMS* const p_TMS) {
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

void HVAC::_setItsTMS(TMS* const p_TMS) {
    if(itsTMS != NULL)
        {
            itsTMS->__setItsHVAC(NULL);
        }
    __setItsTMS(p_TMS);
}

void HVAC::_clearItsTMS(void) {
    NOTIFY_RELATION_CLEARED("itsTMS");
    itsTMS = NULL;
}

void HVAC::setActiveContext(IOxfActive* const theActiveContext, bool activeInstance) {
    OMReactive::setActiveContext(theActiveContext, activeInstance);
    {
        itsHeater.setActiveContext(theActiveContext, false);
    }
}

void HVAC::destroy(void) {
    itsHeater.destroy();
    OMReactive::destroy();
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedHVAC::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    OMAnimatedIB_Heater::serializeAttributes(aomsAttributes);
    OMAnimatedIB_Cooler::serializeAttributes(aomsAttributes);
}

void OMAnimatedHVAC::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsTMS", false, true);
    if(myReal->itsTMS)
        {
            aomsRelations->ADD_ITEM(myReal->itsTMS);
        }
    aomsRelations->addRelation("itsHeater", true, true);
    aomsRelations->ADD_ITEM(&myReal->itsHeater);
    aomsRelations->addRelation("itsCooler", true, true);
    aomsRelations->ADD_ITEM(&myReal->itsCooler);
    OMAnimatedIB_Heater::serializeRelations(aomsRelations);
    OMAnimatedIB_Cooler::serializeRelations(aomsRelations);
}

static AOMClass* _HVACSuper[2] = {
OMAnimatedIB_Heater::staticGetClass(),
OMAnimatedIB_Cooler::staticGetClass()};
//#]

IMPLEMENT_REACTIVE_META_M_SIMPLE_P(HVAC, Logical_Architecture, false, _HVACSuper, 2, OMAnimatedHVAC)

OMINIT_SUPERCLASS(IB_Heater, OMAnimatedIB_Heater)

OMINIT_SUPERCLASS(IB_Cooler, OMAnimatedIB_Cooler)

OMREGISTER_REACTIVE_CLASS
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\HVAC.cpp
*********************************************************************/
