/*********************************************************************
	Rhapsody	: 9.0 
	Login		: 20235613
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: HVAC
//!	Generated Date	: Thu, 18, Apr 2024  
	File Path	: DefaultComponent\DefaultConfig\HVAC.h
*********************************************************************/

#ifndef HVAC_H
#define HVAC_H

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
//## classInstance itsCooler
#include "Cooler.h"
//## classInstance itsHeater
#include "Heater.h"
//## class HVAC
#include "IB_Cooler.h"
//## class HVAC
#include "IB_Heater.h"
//## link itsTMS
class TMS;

//## package Logical_Architecture

//## class HVAC
class HVAC : public OMReactive, public IB_Heater, public IB_Cooler {
public :

//#[ ignore
    //## package Logical_Architecture
    class p_HVAC_C : public IB_Heater, public IB_Cooler {
        ////    Constructors and destructors    ////
        
    public :
    
        //## auto_generated
        p_HVAC_C(void);
        
        //## auto_generated
        virtual ~p_HVAC_C(void);
        
        ////    Operations    ////
        
        //## auto_generated
        IB_Cooler* getItsIB_Cooler(void);
        
        //## auto_generated
        IB_Heater* getItsIB_Heater(void);
        
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

#ifdef _OMINSTRUMENT
    OM_DECLARE_COMPOSITE_OFFSET
#endif // _OMINSTRUMENT

    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedHVAC;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    explicit HVAC(IOxfActive* const theActiveContext = NULL);
    
    //## auto_generated
    virtual ~HVAC(void);
    
    ////    Operations    ////
    
    //## operation startCooler()
    virtual void startCooler(void);
    
    //## operation startHeater()
    virtual void startHeater(void);
    
    ////    Additional operations    ////
    
    //## auto_generated
    p_HVAC_C* getP_HVAC(void) const;
    
    //## auto_generated
    p_HVAC_C* get_p_HVAC(void) const;
    
    //## auto_generated
    const Cooler* getItsCooler(void) const;
    
    //## auto_generated
    const Heater* getItsHeater(void) const;
    
    //## auto_generated
    const TMS* getItsTMS(void) const;
    
    //## auto_generated
    void setItsTMS(TMS* const p_TMS);
    
    //## auto_generated
    virtual bool startBehavior(void);

protected :

    //## auto_generated
    void initRelations(void);
    
    //## auto_generated
    void cleanUpRelations(void);
    
    ////    Relations and components    ////

private :

//#[ ignore
    p_HVAC_C p_HVAC;
//#]

    Cooler itsCooler;		//## classInstance itsCooler
    
    Heater itsHeater;		//## classInstance itsHeater
    
    TMS* itsTMS;		//## link itsTMS
    
    ////    Framework operations    ////

public :

    //## auto_generated
    void __setItsTMS(TMS* const p_TMS);
    
    //## auto_generated
    void _setItsTMS(TMS* const p_TMS);
    
    //## auto_generated
    void _clearItsTMS(void);
    
    //## auto_generated
    void setActiveContext(IOxfActive* const theActiveContext, bool activeInstance);
    
    //## auto_generated
    virtual void destroy(void);
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedHVAC : public OMAnimatedIB_Heater, public OMAnimatedIB_Cooler {
    DECLARE_META(HVAC, OMAnimatedHVAC)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeAttributes(AOMSAttributes* aomsAttributes) const;
    
    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\HVAC.h
*********************************************************************/
