/*********************************************************************
	Rhapsody	: 9.0 
	Login		: 20235613
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Car
//!	Generated Date	: Wed, 24, Apr 2024  
	File Path	: DefaultComponent\DefaultConfig\Car.h
*********************************************************************/

#ifndef Car_H
#define Car_H

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
//## class Car
#include "IB_NVIS.h"
//## link itsNVIS
class NVIS;

//## package System_Analysis::System_Context

//## class Car
class Car : public OMReactive, public IB_NVIS {
public :

//#[ ignore
    //## package System_Analysis::System_Context
    class port_Car_C : public IB_NVIS {
        ////    Constructors and destructors    ////
        
    public :
    
        //## auto_generated
        port_Car_C(void);
        
        //## auto_generated
        virtual ~port_Car_C(void);
        
        ////    Operations    ////
        
        //## auto_generated
        void connectCar(Car* part);
        
        //## auto_generated
        IB_NVIS* getItsIB_NVIS(void);
        
        //## auto_generated
        virtual double runCar(void);
        
        ////    Additional operations    ////
        
        //## auto_generated
        void setItsIB_NVIS(IB_NVIS* const p_IB_NVIS);
    
    protected :
    
        //## auto_generated
        void cleanUpRelations(void);
        
        ////    Attributes    ////
    
    private :
    
        RhpInteger _p_;		//## attribute _p_
        
        ////    Relations and components    ////
        
        IB_NVIS* itsIB_NVIS;		//## link itsIB_NVIS
    };
//#]

    ////    Friends    ////
    
#ifdef _OMINSTRUMENT
    friend class OMAnimatedCar;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    explicit Car(IOxfActive* const theActiveContext = NULL);
    
    //## auto_generated
    virtual ~Car(void);
    
    ////    Operations    ////
    
    //## operation runCar()
    virtual double runCar(void);
    
    //## operation runSpeedCheck()
    virtual double runSpeedCheck(void);
    
    ////    Additional operations    ////
    
    //## auto_generated
    port_Car_C* getPort_Car(void) const;
    
    //## auto_generated
    port_Car_C* get_port_Car(void) const;
    
    //## auto_generated
    const int getSpeed(void) const;
    
    //## auto_generated
    void setSpeed(const int p_speed);
    
    //## auto_generated
    const NVIS* getItsNVIS(void) const;
    
    //## auto_generated
    void setItsNVIS(NVIS* const p_NVIS);
    
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
    void cleanUpRelations(void);
    
    //## auto_generated
    void cancelTimeouts(void);
    
    ////    Attributes    ////

private :

    int speed;		//## attribute speed
    
    ////    Relations and components    ////
    
//#[ ignore
    port_Car_C port_Car;
//#]

    NVIS* itsNVIS;		//## link itsNVIS
    
    ////    Framework operations    ////

public :

    //## auto_generated
    void __setItsNVIS(NVIS* const p_NVIS);
    
    //## auto_generated
    void _setItsNVIS(NVIS* const p_NVIS);
    
    //## auto_generated
    void _clearItsNVIS(void);
    
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
    enum Car_Enum {
        OMNonState = 0,
        On = 1
    };
//#]

private :

//#[ ignore
    Car_Enum rootState_subState;
    
    Car_Enum rootState_active;
    
    IOxfTimeout* rootState_timeout;
//#]
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedCar : public OMAnimatedIB_NVIS {
    DECLARE_REACTIVE_META(Car, OMAnimatedCar)
    
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

inline RhpBoolean Car::rootState_IN(void) const {
    return true;
}

inline RhpBoolean Car::On_IN(void) const {
    return rootState_subState == On;
}

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Car.h
*********************************************************************/
