/*********************************************************************
	Rhapsody	: 9.0 
	Login		: 20235604
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: TMS
//!	Generated Date	: Wed, 17, Apr 2024  
	File Path	: DefaultComponent\DefaultConfig\TMS.h
*********************************************************************/

#ifndef TMS_H
#define TMS_H

//## auto_generated
#include <oxf.h>
//## auto_generated
#include <aom.h>
//## auto_generated
#include "System_Context.h"
//## class TMS
#include "int_currentTmp_ProxyFlowPropertyInterface.h"
//## class TMS
#include "int_voltage_ProxyFlowPropertyInterface.h"
//## class OutBound
#include "int_setTmpMax_ProxyFlowPropertyInterface.h"
//## class OutBound
#include "int_setTmpMin_ProxyFlowPropertyInterface.h"
//## link itsCarOccupant
class CarOccupant;

//## link itsCommunicationSystem
class CommunicationSystem;

//## link itsConstraints
class Constraints;

//## link itsCoolingSystem
class CoolingSystem;

//## link itsHeatingSystem
class HeatingSystem;

//## link itsNaturalEnvironment
class NaturalEnvironment;

//## link itsPowerSource
class PowerSource;

//## link itsPresenceSensor
class PresenceSensor;

//## link itsStakeholder
class Stakeholder;

//## link itsStandard
class Standard;

//## link itsTempSensor
class TempSensor;

//#[ ignore
#define OMAnim_System_Analysis_System_Context_TMS_setSetTmpMax_int_ARGS_DECLARATION int p_setTmpMax;

#define OMAnim_System_Analysis_System_Context_TMS_setSetTmpMin_int_ARGS_DECLARATION int p_setTmpMin;
//#]

//## package System_Analysis::System_Context

//## class TMS
class TMS : public int_voltage_ProxyFlowPropertyInterface, public int_currentTmp_ProxyFlowPropertyInterface {
public :

//#[ ignore
    //## package System_Analysis::System_Context
    class p_PowerSource_C : public int_voltage_ProxyFlowPropertyInterface {
        ////    Constructors and destructors    ////
        
    public :
    
        //## auto_generated
        p_PowerSource_C(void);
        
        //## auto_generated
        virtual ~p_PowerSource_C(void);
        
        ////    Operations    ////
        
        //## auto_generated
        void connectTMS(TMS* part);
        
        //## auto_generated
        int_voltage_ProxyFlowPropertyInterface* getItsInt_voltage_ProxyFlowPropertyInterface(void);
        
        //## auto_generated
        virtual void setVoltage(int p_voltage);
        
        ////    Additional operations    ////
        
        //## auto_generated
        void setItsInt_voltage_ProxyFlowPropertyInterface(int_voltage_ProxyFlowPropertyInterface* const p_int_voltage_ProxyFlowPropertyInterface);
    
    protected :
    
        //## auto_generated
        void cleanUpRelations(void);
        
        ////    Attributes    ////
    
    private :
    
        RhpInteger _p_;		//## attribute _p_
        
        ////    Relations and components    ////
        
        int_voltage_ProxyFlowPropertyInterface* itsInt_voltage_ProxyFlowPropertyInterface;		//## link itsInt_voltage_ProxyFlowPropertyInterface
    };
    
    //## package System_Analysis::System_Context
    class p_TempSensor_C {
    public :
    
        //## auto_generated
        class InBound_C;
        
        //## auto_generated
        class OutBound_C;
        
        //## package System_Analysis::System_Context
        class InBound_C : public int_currentTmp_ProxyFlowPropertyInterface {
            ////    Constructors and destructors    ////
            
        public :
        
            //## auto_generated
            InBound_C(void);
            
            //## auto_generated
            virtual ~InBound_C(void);
            
            ////    Operations    ////
            
            //## auto_generated
            virtual void setCurrentTmp(int p_currentTmp);
            
            ////    Additional operations    ////
            
            //## auto_generated
            void setItsInt_currentTmp_ProxyFlowPropertyInterface(int_currentTmp_ProxyFlowPropertyInterface* const p_int_currentTmp_ProxyFlowPropertyInterface);
            
            //## auto_generated
            p_TempSensor_C* getPort(void) const;
            
            //## auto_generated
            void setPort(p_TempSensor_C* const p_p_TempSensor_C);
        
        protected :
        
            //## auto_generated
            void cleanUpRelations(void);
            
            ////    Relations and components    ////
        
        private :
        
            int_currentTmp_ProxyFlowPropertyInterface* itsInt_currentTmp_ProxyFlowPropertyInterface;		//## link itsInt_currentTmp_ProxyFlowPropertyInterface
            
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
        class OutBound_C : public int_setTmpMax_ProxyFlowPropertyInterface, public int_setTmpMin_ProxyFlowPropertyInterface {
            ////    Constructors and destructors    ////
            
        public :
        
            //## auto_generated
            OutBound_C(void);
            
            //## auto_generated
            virtual ~OutBound_C(void);
            
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
        
        protected :
        
            //## auto_generated
            void cleanUpRelations(void);
            
            ////    Relations and components    ////
        
        private :
        
            int_setTmpMax_ProxyFlowPropertyInterface* itsInt_setTmpMax_ProxyFlowPropertyInterface;		//## link itsInt_setTmpMax_ProxyFlowPropertyInterface
            
            int_setTmpMin_ProxyFlowPropertyInterface* itsInt_setTmpMin_ProxyFlowPropertyInterface;		//## link itsInt_setTmpMin_ProxyFlowPropertyInterface
        };
        
        ////    Constructors and destructors    ////
        
        //## auto_generated
        p_TempSensor_C(void);
        
        //## auto_generated
        virtual ~p_TempSensor_C(void);
        
        ////    Operations    ////
        
        //## auto_generated
        void connectTMS(TMS* part);
        
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
    friend class OMAnimatedTMS;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    TMS(void);
    
    //## auto_generated
    ~TMS(void);
    
    ////    Operations    ////
    
//#[ ignore
    void setCurrentTmp(int p_currentTmp);
    
    void setSetTmpMax(int p_setTmpMax);
    
    void setSetTmpMin(int p_setTmpMin);
    
    void setVoltage(int p_voltage);
//#]

    ////    Additional operations    ////
    
    //## auto_generated
    p_PowerSource_C* getP_PowerSource(void) const;
    
    //## auto_generated
    p_PowerSource_C* get_p_PowerSource(void) const;
    
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
    const int getVoltage(void) const;
    
    //## auto_generated
    const CarOccupant* getItsCarOccupant(void) const;
    
    //## auto_generated
    void setItsCarOccupant(CarOccupant* const p_CarOccupant);
    
    //## auto_generated
    const CommunicationSystem* getItsCommunicationSystem(void) const;
    
    //## auto_generated
    void setItsCommunicationSystem(CommunicationSystem* const p_CommunicationSystem);
    
    //## auto_generated
    const Constraints* getItsConstraints(void) const;
    
    //## auto_generated
    void setItsConstraints(Constraints* const p_Constraints);
    
    //## auto_generated
    const CoolingSystem* getItsCoolingSystem(void) const;
    
    //## auto_generated
    void setItsCoolingSystem(CoolingSystem* const p_CoolingSystem);
    
    //## auto_generated
    const HeatingSystem* getItsHeatingSystem(void) const;
    
    //## auto_generated
    void setItsHeatingSystem(HeatingSystem* const p_HeatingSystem);
    
    //## auto_generated
    const NaturalEnvironment* getItsNaturalEnvironment(void) const;
    
    //## auto_generated
    void setItsNaturalEnvironment(NaturalEnvironment* const p_NaturalEnvironment);
    
    //## auto_generated
    const PowerSource* getItsPowerSource(void) const;
    
    //## auto_generated
    void setItsPowerSource(PowerSource* const p_PowerSource);
    
    //## auto_generated
    const PresenceSensor* getItsPresenceSensor(void) const;
    
    //## auto_generated
    void setItsPresenceSensor(PresenceSensor* const p_PresenceSensor);
    
    //## auto_generated
    const Stakeholder* getItsStakeholder(void) const;
    
    //## auto_generated
    void setItsStakeholder(Stakeholder* const p_Stakeholder);
    
    //## auto_generated
    const Standard* getItsStandard(void) const;
    
    //## auto_generated
    void setItsStandard(Standard* const p_Standard);
    
    //## auto_generated
    const TempSensor* getItsTempSensor(void) const;
    
    //## auto_generated
    void setItsTempSensor(TempSensor* const p_TempSensor);

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
    
    int voltage;		//## attribute voltage
    
    ////    Relations and components    ////
    
//#[ ignore
    p_PowerSource_C p_PowerSource;
    
    p_TempSensor_C p_TempSensor;
//#]

    CarOccupant* itsCarOccupant;		//## link itsCarOccupant
    
    CommunicationSystem* itsCommunicationSystem;		//## link itsCommunicationSystem
    
    Constraints* itsConstraints;		//## link itsConstraints
    
    CoolingSystem* itsCoolingSystem;		//## link itsCoolingSystem
    
    HeatingSystem* itsHeatingSystem;		//## link itsHeatingSystem
    
    NaturalEnvironment* itsNaturalEnvironment;		//## link itsNaturalEnvironment
    
    PowerSource* itsPowerSource;		//## link itsPowerSource
    
    PresenceSensor* itsPresenceSensor;		//## link itsPresenceSensor
    
    Stakeholder* itsStakeholder;		//## link itsStakeholder
    
    Standard* itsStandard;		//## link itsStandard
    
    TempSensor* itsTempSensor;		//## link itsTempSensor
    
    ////    Framework operations    ////

public :

    //## auto_generated
    void __setItsCarOccupant(CarOccupant* const p_CarOccupant);
    
    //## auto_generated
    void _setItsCarOccupant(CarOccupant* const p_CarOccupant);
    
    //## auto_generated
    void _clearItsCarOccupant(void);
    
    //## auto_generated
    void __setItsCommunicationSystem(CommunicationSystem* const p_CommunicationSystem);
    
    //## auto_generated
    void _setItsCommunicationSystem(CommunicationSystem* const p_CommunicationSystem);
    
    //## auto_generated
    void _clearItsCommunicationSystem(void);
    
    //## auto_generated
    void __setItsConstraints(Constraints* const p_Constraints);
    
    //## auto_generated
    void _setItsConstraints(Constraints* const p_Constraints);
    
    //## auto_generated
    void _clearItsConstraints(void);
    
    //## auto_generated
    void __setItsCoolingSystem(CoolingSystem* const p_CoolingSystem);
    
    //## auto_generated
    void _setItsCoolingSystem(CoolingSystem* const p_CoolingSystem);
    
    //## auto_generated
    void _clearItsCoolingSystem(void);
    
    //## auto_generated
    void __setItsHeatingSystem(HeatingSystem* const p_HeatingSystem);
    
    //## auto_generated
    void _setItsHeatingSystem(HeatingSystem* const p_HeatingSystem);
    
    //## auto_generated
    void _clearItsHeatingSystem(void);
    
    //## auto_generated
    void __setItsNaturalEnvironment(NaturalEnvironment* const p_NaturalEnvironment);
    
    //## auto_generated
    void _setItsNaturalEnvironment(NaturalEnvironment* const p_NaturalEnvironment);
    
    //## auto_generated
    void _clearItsNaturalEnvironment(void);
    
    //## auto_generated
    void __setItsPowerSource(PowerSource* const p_PowerSource);
    
    //## auto_generated
    void _setItsPowerSource(PowerSource* const p_PowerSource);
    
    //## auto_generated
    void _clearItsPowerSource(void);
    
    //## auto_generated
    void __setItsPresenceSensor(PresenceSensor* const p_PresenceSensor);
    
    //## auto_generated
    void _setItsPresenceSensor(PresenceSensor* const p_PresenceSensor);
    
    //## auto_generated
    void _clearItsPresenceSensor(void);
    
    //## auto_generated
    void __setItsStakeholder(Stakeholder* const p_Stakeholder);
    
    //## auto_generated
    void _setItsStakeholder(Stakeholder* const p_Stakeholder);
    
    //## auto_generated
    void _clearItsStakeholder(void);
    
    //## auto_generated
    void __setItsStandard(Standard* const p_Standard);
    
    //## auto_generated
    void _setItsStandard(Standard* const p_Standard);
    
    //## auto_generated
    void _clearItsStandard(void);
    
    //## auto_generated
    void __setItsTempSensor(TempSensor* const p_TempSensor);
    
    //## auto_generated
    void _setItsTempSensor(TempSensor* const p_TempSensor);
    
    //## auto_generated
    void _clearItsTempSensor(void);
};

#ifdef _OMINSTRUMENT
DECLARE_OPERATION_CLASS(System_Analysis_System_Context_TMS_setSetTmpMax_int)

DECLARE_OPERATION_CLASS(System_Analysis_System_Context_TMS_setSetTmpMin_int)

//#[ ignore
class OMAnimatedTMS : virtual public AOMInstance {
    DECLARE_META(TMS, OMAnimatedTMS)
    
    DECLARE_META_OP(System_Analysis_System_Context_TMS_setSetTmpMax_int)
    
    DECLARE_META_OP(System_Analysis_System_Context_TMS_setSetTmpMin_int)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeAttributes(AOMSAttributes* aomsAttributes) const;
    
    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\TMS.h
*********************************************************************/
