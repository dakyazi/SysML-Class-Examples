/********************************************************************
	Rhapsody	: 9.0 
	Login		: 20235604
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: TempSensor
//!	Generated Date	: Wed, 17, Apr 2024  
	File Path	: DefaultComponent\DefaultConfig\TempSensor.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "TempSensor.h"
//## link itsTMS
#include "TMS.h"
//#[ ignore
#define System_Analysis_System_Context_TempSensor_TempSensor_SERIALIZE OM_NO_OP

#define OMAnim_System_Analysis_System_Context_TempSensor_setCurrentTmp_int_UNSERIALIZE_ARGS OP_UNSER(OMDestructiveString2X,p_currentTmp)

#define OMAnim_System_Analysis_System_Context_TempSensor_setCurrentTmp_int_SERIALIZE_RET_VAL
//#]

//## package System_Analysis::System_Context

//## class TempSensor
//#[ ignore
TempSensor::p_TempSensor_C::InBound_C::InBound_C(void) : int_setTmpMax_ProxyFlowPropertyInterface(), int_setTmpMin_ProxyFlowPropertyInterface(), itsInt_setTmpMax_ProxyFlowPropertyInterface(NULL), itsInt_setTmpMin_ProxyFlowPropertyInterface(NULL), port(NULL) {
}

TempSensor::p_TempSensor_C::InBound_C::~InBound_C(void) {
    cleanUpRelations();
}

void TempSensor::p_TempSensor_C::InBound_C::setSetTmpMax(int p_setTmpMax) {
    
    if (itsInt_setTmpMax_ProxyFlowPropertyInterface != NULL) {
        itsInt_setTmpMax_ProxyFlowPropertyInterface->setSetTmpMax(p_setTmpMax);
    }
    
}

void TempSensor::p_TempSensor_C::InBound_C::setSetTmpMin(int p_setTmpMin) {
    
    if (itsInt_setTmpMin_ProxyFlowPropertyInterface != NULL) {
        itsInt_setTmpMin_ProxyFlowPropertyInterface->setSetTmpMin(p_setTmpMin);
    }
    
}

void TempSensor::p_TempSensor_C::InBound_C::setItsInt_setTmpMax_ProxyFlowPropertyInterface(int_setTmpMax_ProxyFlowPropertyInterface* const p_int_setTmpMax_ProxyFlowPropertyInterface) {
    itsInt_setTmpMax_ProxyFlowPropertyInterface = p_int_setTmpMax_ProxyFlowPropertyInterface;
}

void TempSensor::p_TempSensor_C::InBound_C::setItsInt_setTmpMin_ProxyFlowPropertyInterface(int_setTmpMin_ProxyFlowPropertyInterface* const p_int_setTmpMin_ProxyFlowPropertyInterface) {
    itsInt_setTmpMin_ProxyFlowPropertyInterface = p_int_setTmpMin_ProxyFlowPropertyInterface;
}

TempSensor::p_TempSensor_C* TempSensor::p_TempSensor_C::InBound_C::getPort(void) const {
    return port;
}

void TempSensor::p_TempSensor_C::InBound_C::setPort(TempSensor::p_TempSensor_C* const p_p_TempSensor_C) {
    _setPort(p_p_TempSensor_C);
}

void TempSensor::p_TempSensor_C::InBound_C::cleanUpRelations(void) {
    if(itsInt_setTmpMax_ProxyFlowPropertyInterface != NULL)
        {
            itsInt_setTmpMax_ProxyFlowPropertyInterface = NULL;
        }
    if(itsInt_setTmpMin_ProxyFlowPropertyInterface != NULL)
        {
            itsInt_setTmpMin_ProxyFlowPropertyInterface = NULL;
        }
    if(port != NULL)
        {
            port = NULL;
        }
}

void TempSensor::p_TempSensor_C::InBound_C::__setPort(TempSensor::p_TempSensor_C* const p_p_TempSensor_C) {
    port = p_p_TempSensor_C;
}

void TempSensor::p_TempSensor_C::InBound_C::_setPort(TempSensor::p_TempSensor_C* const p_p_TempSensor_C) {
    __setPort(p_p_TempSensor_C);
}

void TempSensor::p_TempSensor_C::InBound_C::_clearPort(void) {
    port = NULL;
}

TempSensor::p_TempSensor_C::OutBound_C::OutBound_C(void) : int_currentTmp_ProxyFlowPropertyInterface(), itsInt_currentTmp_ProxyFlowPropertyInterface(NULL) {
}

TempSensor::p_TempSensor_C::OutBound_C::~OutBound_C(void) {
    cleanUpRelations();
}

void TempSensor::p_TempSensor_C::OutBound_C::setCurrentTmp(int p_currentTmp) {
    
    if (itsInt_currentTmp_ProxyFlowPropertyInterface != NULL) {
        itsInt_currentTmp_ProxyFlowPropertyInterface->setCurrentTmp(p_currentTmp);
    }
    
}

void TempSensor::p_TempSensor_C::OutBound_C::setItsInt_currentTmp_ProxyFlowPropertyInterface(int_currentTmp_ProxyFlowPropertyInterface* const p_int_currentTmp_ProxyFlowPropertyInterface) {
    itsInt_currentTmp_ProxyFlowPropertyInterface = p_int_currentTmp_ProxyFlowPropertyInterface;
}

void TempSensor::p_TempSensor_C::OutBound_C::cleanUpRelations(void) {
    if(itsInt_currentTmp_ProxyFlowPropertyInterface != NULL)
        {
            itsInt_currentTmp_ProxyFlowPropertyInterface = NULL;
        }
}

TempSensor::p_TempSensor_C::p_TempSensor_C(void) : _p_(0) {
    initRelations();
}

TempSensor::p_TempSensor_C::~p_TempSensor_C(void) {
}

void TempSensor::p_TempSensor_C::connectTempSensor(TempSensor* part) {
    InBound.setItsInt_setTmpMax_ProxyFlowPropertyInterface(part);
    InBound.setItsInt_setTmpMin_ProxyFlowPropertyInterface(part);
    InBound.setPort(this); // for IS_PORT macro support
    
}

int_currentTmp_ProxyFlowPropertyInterface* TempSensor::p_TempSensor_C::getItsInt_currentTmp_ProxyFlowPropertyInterface(void) {
    return &OutBound;
}

int_setTmpMax_ProxyFlowPropertyInterface* TempSensor::p_TempSensor_C::getItsInt_setTmpMax_ProxyFlowPropertyInterface(void) {
    return &InBound;
}

int_setTmpMin_ProxyFlowPropertyInterface* TempSensor::p_TempSensor_C::getItsInt_setTmpMin_ProxyFlowPropertyInterface(void) {
    return &InBound;
}

void TempSensor::p_TempSensor_C::setItsInt_currentTmp_ProxyFlowPropertyInterface(int_currentTmp_ProxyFlowPropertyInterface* const p_int_currentTmp_ProxyFlowPropertyInterface) {
    OutBound.setItsInt_currentTmp_ProxyFlowPropertyInterface(p_int_currentTmp_ProxyFlowPropertyInterface);
}

void TempSensor::p_TempSensor_C::setItsInt_setTmpMax_ProxyFlowPropertyInterface(int_setTmpMax_ProxyFlowPropertyInterface* const p_int_setTmpMax_ProxyFlowPropertyInterface) {
    InBound.setItsInt_setTmpMax_ProxyFlowPropertyInterface(p_int_setTmpMax_ProxyFlowPropertyInterface);
}

void TempSensor::p_TempSensor_C::setItsInt_setTmpMin_ProxyFlowPropertyInterface(int_setTmpMin_ProxyFlowPropertyInterface* const p_int_setTmpMin_ProxyFlowPropertyInterface) {
    InBound.setItsInt_setTmpMin_ProxyFlowPropertyInterface(p_int_setTmpMin_ProxyFlowPropertyInterface);
}

TempSensor::p_TempSensor_C::InBound_C* TempSensor::p_TempSensor_C::getInBound(void) const {
    return (TempSensor::p_TempSensor_C::InBound_C*) &InBound;
}

TempSensor::p_TempSensor_C::OutBound_C* TempSensor::p_TempSensor_C::getOutBound(void) const {
    return (TempSensor::p_TempSensor_C::OutBound_C*) &OutBound;
}

void TempSensor::p_TempSensor_C::initRelations(void) {
    InBound._setPort(this);
}
//#]

TempSensor::TempSensor(void) : int_setTmpMax_ProxyFlowPropertyInterface(), int_setTmpMin_ProxyFlowPropertyInterface(), currentTmp(0), setTmpMax(30), setTmpMin(19), itsTMS(NULL) {
    NOTIFY_CONSTRUCTOR(TempSensor, TempSensor(), 0, System_Analysis_System_Context_TempSensor_TempSensor_SERIALIZE);
    initRelations();
}

TempSensor::~TempSensor(void) {
    NOTIFY_DESTRUCTOR(~TempSensor, true);
    cleanUpRelations();
}

//#[ ignore
void TempSensor::setCurrentTmp(int p_currentTmp) {
    if (currentTmp != p_currentTmp)  {
        currentTmp = p_currentTmp;
        FLOW_DATA_SEND(currentTmp, p_TempSensor, setCurrentTmp, x2String);
    }
}

void TempSensor::setSetTmpMax(int p_setTmpMax) {
    if (setTmpMax != p_setTmpMax) {
        setTmpMax = p_setTmpMax;
        FLOW_DATA_RECEIVE("setTmpMax", setTmpMax, x2String);
    }
    
}

void TempSensor::setSetTmpMin(int p_setTmpMin) {
    if (setTmpMin != p_setTmpMin) {
        setTmpMin = p_setTmpMin;
        FLOW_DATA_RECEIVE("setTmpMin", setTmpMin, x2String);
    }
    
}
//#]

TempSensor::p_TempSensor_C* TempSensor::getP_TempSensor(void) const {
    return (TempSensor::p_TempSensor_C*) &p_TempSensor;
}

TempSensor::p_TempSensor_C* TempSensor::get_p_TempSensor(void) const {
    return (TempSensor::p_TempSensor_C*) &p_TempSensor;
}

const int TempSensor::getCurrentTmp(void) const {
    return currentTmp;
}

const int TempSensor::getSetTmpMax(void) const {
    return setTmpMax;
}

const int TempSensor::getSetTmpMin(void) const {
    return setTmpMin;
}

const TMS* TempSensor::getItsTMS(void) const {
    return itsTMS;
}

void TempSensor::setItsTMS(TMS* const p_TMS) {
    if(p_TMS != NULL)
        {
            p_TMS->_setItsTempSensor(this);
        }
    _setItsTMS(p_TMS);
}

void TempSensor::initRelations(void) {
    if (get_p_TempSensor() != NULL) {
        get_p_TempSensor()->connectTempSensor(this);
    }
}

void TempSensor::cleanUpRelations(void) {
    if(itsTMS != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsTMS");
            const TempSensor* p_TempSensor = itsTMS->getItsTempSensor();
            if(p_TempSensor != NULL)
                {
                    itsTMS->__setItsTempSensor(NULL);
                }
            itsTMS = NULL;
        }
}

void TempSensor::__setItsTMS(TMS* const p_TMS) {
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

void TempSensor::_setItsTMS(TMS* const p_TMS) {
    if(itsTMS != NULL)
        {
            itsTMS->__setItsTempSensor(NULL);
        }
    __setItsTMS(p_TMS);
}

void TempSensor::_clearItsTMS(void) {
    NOTIFY_RELATION_CLEARED("itsTMS");
    itsTMS = NULL;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedTempSensor::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    aomsAttributes->addAttribute("currentTmp", x2String(myReal->currentTmp));
    aomsAttributes->addAttribute("setTmpMax", x2String(myReal->setTmpMax));
    aomsAttributes->addAttribute("setTmpMin", x2String(myReal->setTmpMin));
}

void OMAnimatedTempSensor::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsTMS", false, true);
    if(myReal->itsTMS)
        {
            aomsRelations->ADD_ITEM(myReal->itsTMS);
        }
}
//#]

IMPLEMENT_META_P(TempSensor, System_Analysis_System_Context, System_Analysis::System_Context, false, OMAnimatedTempSensor)

IMPLEMENT_META_OP(OMAnimatedTempSensor, System_Analysis_System_Context_TempSensor_setCurrentTmp_int, "setCurrentTmp", FALSE, "setCurrentTmp(int)", 1)

IMPLEMENT_OP_CALL(System_Analysis_System_Context_TempSensor_setCurrentTmp_int, TempSensor, setCurrentTmp(p_currentTmp), NO_OP())
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\TempSensor.cpp
*********************************************************************/
