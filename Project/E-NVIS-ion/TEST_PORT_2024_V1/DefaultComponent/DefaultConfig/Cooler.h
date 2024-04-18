/*********************************************************************
	Rhapsody	: 9.0 
	Login		: 20235613
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Cooler
//!	Generated Date	: Thu, 18, Apr 2024  
	File Path	: DefaultComponent\DefaultConfig\Cooler.h
*********************************************************************/

#ifndef Cooler_H
#define Cooler_H

//## auto_generated
#include <oxf.h>
//## auto_generated
#include <aom.h>
//## auto_generated
#include "Logical_Architecture.h"
//## class Cooler
#include "IB_Cooler.h"
//## package Logical_Architecture

//## class Cooler
class Cooler : public IB_Cooler {
public :

//#[ ignore
    //## package Logical_Architecture
    class p_Cooler_C : public IB_Cooler {
        ////    Constructors and destructors    ////
        
    public :
    
        //## auto_generated
        p_Cooler_C(void);
        
        //## auto_generated
        virtual ~p_Cooler_C(void);
        
        ////    Operations    ////
        
        //## auto_generated
        void connectCooler(Cooler* part);
        
        //## auto_generated
        IB_Cooler* getItsIB_Cooler(void);
        
        //## auto_generated
        virtual void startCooler(void);
        
        ////    Additional operations    ////
        
        //## auto_generated
        void setItsIB_Cooler(IB_Cooler* const p_IB_Cooler);
    
    protected :
    
        //## auto_generated
        void cleanUpRelations(void);
        
        ////    Attributes    ////
    
    private :
    
        RhpInteger _p_;		//## attribute _p_
        
        ////    Relations and components    ////
        
        IB_Cooler* itsIB_Cooler;		//## link itsIB_Cooler
    };
//#]

    ////    Friends    ////
    
#ifdef _OMINSTRUMENT
    friend class OMAnimatedCooler;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    Cooler(void);
    
    //## auto_generated
    virtual ~Cooler(void);
    
    ////    Operations    ////
    
    //## operation startCooler()
    virtual void startCooler(void);
    
    ////    Additional operations    ////
    
    //## auto_generated
    p_Cooler_C* getP_Cooler(void) const;
    
    //## auto_generated
    p_Cooler_C* get_p_Cooler(void) const;

protected :

    //## auto_generated
    void initRelations(void);
    
    ////    Relations and components    ////

private :

//#[ ignore
    p_Cooler_C p_Cooler;
//#]
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedCooler : public OMAnimatedIB_Cooler {
    DECLARE_META(Cooler, OMAnimatedCooler)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeAttributes(AOMSAttributes* aomsAttributes) const;
    
    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Cooler.h
*********************************************************************/
