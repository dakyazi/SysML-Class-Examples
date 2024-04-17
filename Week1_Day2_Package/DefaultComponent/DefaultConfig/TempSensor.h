/*********************************************************************
	Rhapsody	: 9.0 
	Login		: 20235604
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: TempSensor
//!	Generated Date	: Wed, 17, Apr 2024  
	File Path	: DefaultComponent\DefaultConfig\TempSensor.h
*********************************************************************/

#ifndef TempSensor_H
#define TempSensor_H

//## auto_generated
#include <oxf.h>
//## auto_generated
#include <aom.h>
//## auto_generated
#include "System_Context.h"
//## class TempSensor
#include "int_setTmpMax_ProxyFlowPropertyInterface.h"
//## class TempSensor
#include "int_setTmpMin_ProxyFlowPropertyInterface.h"
//## class OutBound
#include "int_currentTmp_ProxyFlowPropertyInterface.h"
//## link itsTMS
class TMS;

//#[ ignore
#define OMAnim_System_Analysis_System_Context_TempSensor_setCurrentTmp_int_ARGS_DECLARATION int p_currentTmp;
//#]

//## package System_Analysis::System_Context

//## class TempSensor
class TempSensor : public int_setTmpMax_ProxyFlowPropertyInterface, public int_setTmpMin_ProxyFlowPropertyInterface {
public :

//#[ ignore
    //## package System_Analysis::System_Context
    class p_TempSensor_C {
    public :
    
        //## auto_generated
        class InBound_C;
        
        //## auto_generated
        class OutBound_C;
        
        //## package System_Analysis::System_Context
        class InBound_C : public int_setTmpMax_ProxyFlowPropertyInterface, public int_setTmpMin_ProxyFlowPropertyInterface {
            ////    Constructors and destructors    ////
            
        public :
        
            //## auto_generated
            InBound_C(void);
            
            //## auto_generated
            virtual ~InBound_C(void);
            
            ////    Operations    ////
            
            //## auto_generated
            virtual void setSetTmpMax(int p_setTmpMax);
            
            //## auto_generated
            virtual void setSetTmpMin(int p_setTmpMin);
            
            ////    Additional operations    ////
            
            //## auto_generated
            void setItsInt_setTmpMax_ProxyFlowPropertyInterface(int_setTmpMax_ProxyFlowPropertyInterface* const p_int_setTmpMax_ProxyFlowPropertyInterface);
            
            //## auto_generated
            void setItsInt_setTmpMin_ProxyFlowPropertyInterface(int_setTmpMin_ProxyFlowPropertyInterface* const p_int_setTmpMin_ProxyFlowPropertyInterface);
            
            //## auto_generated
            p_TempSensor_C* getPort(void) const;
            
            //## auto_generated
            void setPort(p_TempSensor_C* const p_p_TempSensor_C);
        
        protected :
        
            //## auto_generated
            void cleanUpRelations(void);
            
            ////    Relations and components    ////
        
        private :
        
            int_setTmpMax_ProxyFlowPropertyInterface* itsInt_setTmpMax_ProxyFlowPropertyInterface;		//## link itsInt_setTmpMax_ProxyFlowPropertyInterface
            
            int_setTmpMin_ProxyFlowPropertyInterface* itsInt_setTmpMin_ProxyFlowPropertyInterface;		//## link itsInt_setTmpMin_ProxyFlowPropertyInterface
            
            p_TempSensor_C* port;		//## link port
            
            ////    Framework operations    ////
        
        public :
        
            //## auto_generated
            void __setPort(p_TempSensor_C* const p_p_TempSensor_C);
            
            //## auto_generated
            void _setPort(p_TempSensor_C* const p_p_TempSensor_C);
            
            //## auto_generated
            void _clearPort(void);
        };
        
        //## package System_Analysis::System_Context
        class OutBound_C : public int_currentTmp_ProxyFlowPropertyInterface {
            ////    Constructors and destructors    ////
            
        public :
        
            //## auto_generated
            OutBound_C(void);
            
            //## auto_generated
            virtual ~OutBound_C(void);
            
            ////    Operations    ////
            
            //## auto_generated
            virtual void setCurrentTmp(int p_currentTmp);
            
            ////    Additional operations    ////
            
            //## auto_generated
            void setItsInt_currentTmp_ProxyFlowPropertyInterface(int_currentTmp_ProxyFlowPropertyInterface* const p_int_currentTmp_ProxyFlowPropertyInterface);
        
        protected :
        
            //## auto_generated
            void cleanUpRelations(void);
            
            ////    Relations and components    ////
        
        private :
        
            int_currentTmp_ProxyFlowPropertyInterface* itsInt_currentTmp_ProxyFlowPropertyInterface;		//## link itsInt_currentTmp_ProxyFlowPropertyInterface
        };
        
        ////    Constructors and destructors    ////
        
        //## auto_generated
        p_TempSensor_C(void);
        
        //## auto_generated
        virtual ~p_TempSensor_C(void);
        
        ////    Operations    ////
        
        //## auto_generated
        void connectTempSensor(TempSensor* part);
        
        //## auto_generated
        int_currentTmp_ProxyFlowPropertyInterface* getItsInt_currentTmp_ProxyFlowPropertyInterface(void);
        
        //## auto_generated
        int_setTmpMax_ProxyFlowPropertyInterface* getItsInt_setTmpMax_ProxyFlowPropertyInterface(void);
        
        //## auto_generated
        int_setTmpMin_ProxyFlowPropertyInterface* getItsInt_setTmpMin_ProxyFlowPropertyInterface(void);
        
        //## auto_generated
        void setItsInt_currentTmp_ProxyFlowPropertyInterface(int_currentTmp_ProxyFlowPropertyInterface* const p_int_currentTmp_ProxyFlowPropertyInterface);
        
        //## auto_generated
        void setItsInt_setTmpMax_ProxyFlowPropertyInterface(int_setTmpMax_ProxyFlowPropertyInterface* const p_int_setTmpMax_ProxyFlowPropertyInterface);
        
        //## auto_generated
        void setItsInt_setTmpMin_ProxyFlowPropertyInterface(int_setTmpMin_ProxyFlowPropertyInterface* const p_int_setTmpMin_ProxyFlowPropertyInterface);
        
        ////    Additional operations    ////
        
        //## auto_generated
        InBound_C* getInBound(void) const;
        
        //## auto_generated
        OutBound_C* getOutBound(void) const;
    
    protected :
    
        //## auto_generated
        void initRelations(void);
        
        ////    Attributes    ////
    
    private :
    
        RhpInteger _p_;		//## attribute _p_
        
        ////    Relations and components    ////
        
        InBound_C InBound;		//## classInstance InBound
        
        OutBound_C OutBound;		//## classInstance OutBound
    };
//#]

    ////    Friends    ////
    
#ifdef _OMINSTRUMENT
    friend class OMAnimatedTempSensor;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    TempSensor(void);
    
    //## auto_generated
    ~TempSensor(void);
    
    ////    Operations    ////
    
//#[ ignore
    void setCurrentTmp(int p_currentTmp);
    
    void setSetTmpMax(int p_setTmpMax);
    
    void setSetTmpMin(int p_setTmpMin);
//#]

    ////    Additional operations    ////
    
    //## auto_generated
    p_TempSensor_C* getP_TempSensor(void) const;
    
    //## auto_generated
    p_TempSensor_C* get_p_TempSensor(void) const;
    
    //## auto_generated
    const int getCurrentTmp(void) const;
    
    //## auto_generated
    const int getSetTmpMax(void) const;
    
    //## auto_generated
    const int getSetTmpMin(void) const;
    
    //## auto_generated
    const TMS* getItsTMS(void) const;
    
    //## auto_generated
    void setItsTMS(TMS* const p_TMS);

protected :

    //## auto_generated
    void initRelations(void);
    
    //## auto_generated
    void cleanUpRelations(void);
    
    ////    Attributes    ////

private :

    int currentTmp;		//## attribute currentTmp
    
    int setTmpMax;		//## attribute setTmpMax
    
    int setTmpMin;		//## attribute setTmpMin
    
    ////    Relations and components    ////
    
//#[ ignore
    p_TempSensor_C p_TempSensor;
//#]

    TMS* itsTMS;		//## link itsTMS
    
    ////    Framework operations    ////

public :

    //## auto_generated
    void __setItsTMS(TMS* const p_TMS);
    
    //## auto_generated
    void _setItsTMS(TMS* const p_TMS);
    
    //## auto_generated
    void _clearItsTMS(void);
};

#ifdef _OMINSTRUMENT
DECLARE_OPERATION_CLASS(System_Analysis_System_Context_TempSensor_setCurrentTmp_int)

//#[ ignore
class OMAnimatedTempSensor : virtual public AOMInstance {
    DECLARE_META(TempSensor, OMAnimatedTempSensor)
    
    DECLARE_META_OP(System_Analysis_System_Context_TempSensor_setCurrentTmp_int)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeAttributes(AOMSAttributes* aomsAttributes) const;
    
    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\TempSensor.h
*********************************************************************/
