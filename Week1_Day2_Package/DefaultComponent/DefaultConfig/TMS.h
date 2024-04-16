/*********************************************************************
	Rhapsody	: 9.0 
	Login		: 20235613
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: TMS
//!	Generated Date	: Mon, 15, Apr 2024  
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

//## package System_Analysis::System_Context

//## class TMS
class TMS {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedTMS;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    TMS(void);
    
    //## auto_generated
    ~TMS(void);
    
    ////    Additional operations    ////
    
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
    void cleanUpRelations(void);
    
    ////    Relations and components    ////

private :

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
//#[ ignore
class OMAnimatedTMS : virtual public AOMInstance {
    DECLARE_META(TMS, OMAnimatedTMS)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\TMS.h
*********************************************************************/
