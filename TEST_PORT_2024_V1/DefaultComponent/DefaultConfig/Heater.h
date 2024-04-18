/*********************************************************************
	Rhapsody	: 9.0 
	Login		: 20235613
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Heater
//!	Generated Date	: Thu, 18, Apr 2024  
	File Path	: DefaultComponent\DefaultConfig\Heater.h
*********************************************************************/

#ifndef Heater_H
#define Heater_H

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
//## class Heater
#include "IB_Heater.h"
//## package Logical_Architecture

//## class Heater
class Heater : public OMReactive, public IB_Heater {
public :

//#[ ignore
    //## package Logical_Architecture
    class p_Heater_C : public IB_Heater {
        ////    Constructors and destructors    ////
        
    public :
    
        //## auto_generated
        p_Heater_C(void);
        
        //## auto_generated
        virtual ~p_Heater_C(void);
        
        ////    Operations    ////
        
        //## auto_generated
        void connectHeater(Heater* part);
        
        //## auto_generated
        IB_Heater* getItsIB_Heater(void);
        
        //## auto_generated
        virtual void startHeater(void);
        
        ////    Additional operations    ////
        
        //## auto_generated
        void setItsIB_Heater(IB_Heater* const p_IB_Heater);
    
    protected :
    
        //## auto_generated
        void cleanUpRelations(void);
        
        ////    Attributes    ////
    
    private :
    
        RhpInteger _p_;		//## attribute _p_
        
        ////    Relations and components    ////
        
        IB_Heater* itsIB_Heater;		//## link itsIB_Heater
    };
//#]

    ////    Friends    ////
    
#ifdef _OMINSTRUMENT
    friend class OMAnimatedHeater;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    explicit Heater(IOxfActive* const theActiveContext = NULL);
    
    //## auto_generated
    virtual ~Heater(void);
    
    ////    Operations    ////
    
    //## operation startHeater()
    virtual void startHeater(void);
    
    //## operation updateTemp()
    virtual void updateTemp(void);
    
    ////    Additional operations    ////
    
    //## auto_generated
    p_Heater_C* getP_Heater(void) const;
    
    //## auto_generated
    p_Heater_C* get_p_Heater(void) const;
    
    //## auto_generated
    virtual bool cancelTimeout(const IOxfTimeout* arg);
    
    //## auto_generated
    virtual bool startBehavior(void);

protected :

    //## auto_generated
    void initRelations(void);
    
    //## auto_generated
    void initStatechart(void);
    
    //## auto_generated
    void cancelTimeouts(void);

private :

    //## auto_generated
    const int getCurrentTemp(void) const;
    
    //## auto_generated
    void setCurrentTemp(const int p_currentTemp);
    
    ////    Attributes    ////
    
    int currentTemp;		//## attribute currentTemp
    
    ////    Relations and components    ////
    
//#[ ignore
    p_Heater_C p_Heater;
//#]

    ////    Framework operations    ////

public :

    // rootState:
    //## statechart_method
    inline RhpBoolean rootState_IN(void) const;
    
    // On:
    //## statechart_method
    inline RhpBoolean On_IN(void) const;

protected :

    //## statechart_method
    virtual void rootState_entDef(void);
    
    //## statechart_method
    virtual IOxfReactive::TakeEventStatus rootState_processEvent(void);
    
    ////    Framework    ////
    
//#[ ignore
    enum Heater_Enum {
        OMNonState = 0,
        On = 1
    };
//#]

private :

//#[ ignore
    Heater_Enum rootState_subState;
    
    Heater_Enum rootState_active;
    
    IOxfTimeout* rootState_timeout;
//#]
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedHeater : public OMAnimatedIB_Heater {
    DECLARE_REACTIVE_META(Heater, OMAnimatedHeater)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeAttributes(AOMSAttributes* aomsAttributes) const;
    
    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
    
    //## statechart_method
    void rootState_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void On_serializeStates(AOMSState* aomsState) const;
};
//#]
#endif // _OMINSTRUMENT

inline RhpBoolean Heater::rootState_IN(void) const {
    return true;
}

inline RhpBoolean Heater::On_IN(void) const {
    return rootState_subState == On;
}

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Heater.h
*********************************************************************/
