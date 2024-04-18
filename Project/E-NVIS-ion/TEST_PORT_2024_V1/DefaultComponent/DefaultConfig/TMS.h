/*********************************************************************
	Rhapsody	: 9.0 
	Login		: 20235613
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: TMS
//!	Generated Date	: Thu, 18, Apr 2024  
	File Path	: DefaultComponent\DefaultConfig\TMS.h
*********************************************************************/

#ifndef TMS_H
#define TMS_H

//## auto_generated
#include <oxf.h>
//## auto_generated
#include <aom.h>
//## auto_generated
#include "Logical_Architecture.h"
//## auto_generated
#include <omthread.h>
//## auto_generated
#include <omreactive.h>
//## auto_generated
#include <state.h>
//## auto_generated
#include <event.h>
//## class p_TMS_C
#include "IB_Cooler.h"
//## class p_TMS_C
#include "IB_Heater.h"
//## link itsHVAC
class HVAC;

//## package Logical_Architecture

//## class TMS
class TMS : public OMReactive {
public :

//#[ ignore
    //## package Logical_Architecture
    class p_TMS_C : public IB_Heater, public IB_Cooler {
        ////    Constructors and destructors    ////
        
    public :
    
        //## auto_generated
        p_TMS_C(void);
        
        //## auto_generated
        virtual ~p_TMS_C(void);
        
        ////    Operations    ////
        
        //## auto_generated
        IB_Cooler* getItsIB_Cooler(void);
        
        //## auto_generated
        IB_Heater* getItsIB_Heater(void);
        
        //## auto_generated
        TMS::p_TMS_C* getOutBound(void);
        
        //## auto_generated
        virtual void startCooler(void);
        
        //## auto_generated
        virtual void startHeater(void);
        
        ////    Additional operations    ////
        
        //## auto_generated
        void setItsIB_Cooler(IB_Cooler* const p_IB_Cooler);
        
        //## auto_generated
        void setItsIB_Heater(IB_Heater* const p_IB_Heater);
    
    protected :
    
        //## auto_generated
        void cleanUpRelations(void);
        
        ////    Attributes    ////
    
    private :
    
        RhpInteger _p_;		//## attribute _p_
        
        ////    Relations and components    ////
        
        IB_Cooler* itsIB_Cooler;		//## link itsIB_Cooler
        
        IB_Heater* itsIB_Heater;		//## link itsIB_Heater
    };
//#]

    ////    Friends    ////
    
#ifdef _OMINSTRUMENT
    friend class OMAnimatedTMS;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    explicit TMS(IOxfActive* const theActiveContext = NULL);
    
    //## auto_generated
    ~TMS(void);
    
    ////    Additional operations    ////
    
    //## auto_generated
    p_TMS_C* getP_TMS(void) const;
    
    //## auto_generated
    p_TMS_C* get_p_TMS(void) const;
    
    //## auto_generated
    const HVAC* getItsHVAC(void) const;
    
    //## auto_generated
    void setItsHVAC(HVAC* const p_HVAC);
    
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
    
    ////    Relations and components    ////

private :

//#[ ignore
    p_TMS_C p_TMS;
//#]

    HVAC* itsHVAC;		//## link itsHVAC
    
    ////    Framework operations    ////

public :

    //## auto_generated
    void __setItsHVAC(HVAC* const p_HVAC);
    
    //## auto_generated
    void _setItsHVAC(HVAC* const p_HVAC);
    
    //## auto_generated
    void _clearItsHVAC(void);
    
    // rootState:
    //## statechart_method
    inline RhpBoolean rootState_IN(void) const;
    
    // On:
    //## statechart_method
    inline RhpBoolean On_IN(void) const;
    
    // Off:
    //## statechart_method
    inline RhpBoolean Off_IN(void) const;

protected :

    //## statechart_method
    virtual void rootState_entDef(void);
    
    //## statechart_method
    virtual IOxfReactive::TakeEventStatus rootState_processEvent(void);
    
    ////    Framework    ////
    
//#[ ignore
    enum TMS_Enum {
        OMNonState = 0,
        On = 1,
        Off = 2
    };
//#]

private :

//#[ ignore
    TMS_Enum rootState_subState;
    
    TMS_Enum rootState_active;
    
    IOxfTimeout* rootState_timeout;
//#]
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedTMS : virtual public AOMInstance {
    DECLARE_REACTIVE_META(TMS, OMAnimatedTMS)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
    
    //## statechart_method
    void rootState_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void On_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void Off_serializeStates(AOMSState* aomsState) const;
};
//#]
#endif // _OMINSTRUMENT

inline RhpBoolean TMS::rootState_IN(void) const {
    return true;
}

inline RhpBoolean TMS::On_IN(void) const {
    return rootState_subState == On;
}

inline RhpBoolean TMS::Off_IN(void) const {
    return rootState_subState == Off;
}

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\TMS.h
*********************************************************************/
