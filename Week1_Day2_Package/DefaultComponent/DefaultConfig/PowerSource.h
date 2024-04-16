/*********************************************************************
	Rhapsody	: 9.0 
	Login		: 20235613
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: PowerSource
//!	Generated Date	: Tue, 16, Apr 2024  
	File Path	: DefaultComponent\DefaultConfig\PowerSource.h
*********************************************************************/

#ifndef PowerSource_H
#define PowerSource_H

//## auto_generated
#include <oxf.h>
//## auto_generated
#include <aom.h>
//##   ignore
#include <simulation\OMActivityContext.h>
//## auto_generated
#include "System_Context.h"
//## link itsTMS
class TMS;

//## package System_Analysis::System_Context

//## class PowerSource
class PowerSource : virtual public OMActivityContext {
public :

    //## auto_generated
    class ACT_POWERSOURCEOfPowerSource;
    
//#[ ignore
    class ACT_POWERSOURCEOfPowerSource : virtual public OMActivity {
    public :
    
        class ActionAction_0InActivityACT_POWERSOURCEOfPowerSource : virtual public OMContextualAction {
            ////    Constructors and destructors    ////
            
        public :
        
            ActionAction_0InActivityACT_POWERSOURCEOfPowerSource(const OMString& id, ACT_POWERSOURCEOfPowerSource& activity, PowerSource& context);
            
            virtual OMList<OMString> filterPassableFlows(void);
            
            virtual void invokeContextMethod(void);
            
            ////    Framework operations    ////
            
            ////    Framework    ////
            
            PowerSource* mContext;
        };
        
        class ActionAction_1InActivityACT_POWERSOURCEOfPowerSource : virtual public OMContextualAction {
            ////    Constructors and destructors    ////
            
        public :
        
            ActionAction_1InActivityACT_POWERSOURCEOfPowerSource(const OMString& id, ACT_POWERSOURCEOfPowerSource& activity, PowerSource& context);
            
            virtual OMList<OMString> filterPassableFlows(void);
            
            virtual void invokeContextMethod(void);
            
            ////    Framework operations    ////
            
            ////    Framework    ////
            
            PowerSource* mContext;
        };
        
        class ActionCheckingSystemStatusInActivityACT_POWERSOURCEOfPowerSource : virtual public OMContextualAction {
            ////    Constructors and destructors    ////
            
        public :
        
            ActionCheckingSystemStatusInActivityACT_POWERSOURCEOfPowerSource(const OMString& id, ACT_POWERSOURCEOfPowerSource& activity, PowerSource& context);
            
            virtual OMList<OMString> filterPassableFlows(void);
            
            virtual void invokeContextMethod(void);
            
            ////    Framework operations    ////
            
            ////    Framework    ////
            
            PowerSource* mContext;
        };
        
        class ActionAccepteventaction_4InActivityACT_POWERSOURCEOfPowerSource : virtual public OMAcceptEventAction {
            ////    Constructors and destructors    ////
            
        public :
        
            ActionAccepteventaction_4InActivityACT_POWERSOURCEOfPowerSource(const OMString& id, ACT_POWERSOURCEOfPowerSource& activity, IOxfEvent::ID eventId, PowerSource& context);
            
            virtual OMList<OMString> filterPassableFlows(void);
            
            virtual void acceptEventData(void);
            
            ////    Framework operations    ////
            
            ////    Framework    ////
            
            PowerSource* mContext;
        };
        
        class ActionCalloperation_5InActivityACT_POWERSOURCEOfPowerSource : virtual public OMContextualAction {
            ////    Constructors and destructors    ////
            
        public :
        
            ActionCalloperation_5InActivityACT_POWERSOURCEOfPowerSource(const OMString& id, ACT_POWERSOURCEOfPowerSource& activity, PowerSource& context);
            
            virtual OMList<OMString> filterPassableFlows(void);
            
            virtual void invokeContextMethod(void);
            
            ////    Framework operations    ////
            
            ////    Framework    ////
            
            PowerSource* mContext;
        };
        
        class ActionCalloperation_6InActivityACT_POWERSOURCEOfPowerSource : virtual public OMContextualAction {
            ////    Constructors and destructors    ////
            
        public :
        
            ActionCalloperation_6InActivityACT_POWERSOURCEOfPowerSource(const OMString& id, ACT_POWERSOURCEOfPowerSource& activity, PowerSource& context);
            
            virtual OMList<OMString> filterPassableFlows(void);
            
            virtual void invokeContextMethod(void);
            
            ////    Framework operations    ////
            
            ////    Framework    ////
            
            PowerSource* mContext;
        };
        
        class ActionAccepteventaction_7InActivityACT_POWERSOURCEOfPowerSource : virtual public OMAcceptEventAction {
            ////    Constructors and destructors    ////
            
        public :
        
            ActionAccepteventaction_7InActivityACT_POWERSOURCEOfPowerSource(const OMString& id, ACT_POWERSOURCEOfPowerSource& activity, IOxfEvent::ID eventId, PowerSource& context);
            
            virtual OMList<OMString> filterPassableFlows(void);
            
            virtual void acceptEventData(void);
            
            ////    Framework operations    ////
            
            ////    Framework    ////
            
            PowerSource* mContext;
        };
        
        class ActionAction_8InActivityACT_POWERSOURCEOfPowerSource : virtual public OMContextualAction {
            ////    Constructors and destructors    ////
            
        public :
        
            ActionAction_8InActivityACT_POWERSOURCEOfPowerSource(const OMString& id, ACT_POWERSOURCEOfPowerSource& activity, PowerSource& context);
            
            virtual OMList<OMString> filterPassableFlows(void);
            
            virtual void invokeContextMethod(void);
            
            ////    Framework operations    ////
            
            ////    Framework    ////
            
            PowerSource* mContext;
        };
        
        class ActionCalloperation_9InActivityACT_POWERSOURCEOfPowerSource : virtual public OMContextualAction {
            ////    Constructors and destructors    ////
            
        public :
        
            ActionCalloperation_9InActivityACT_POWERSOURCEOfPowerSource(const OMString& id, ACT_POWERSOURCEOfPowerSource& activity, PowerSource& context);
            
            virtual OMList<OMString> filterPassableFlows(void);
            
            virtual void invokeContextMethod(void);
            
            ////    Framework operations    ////
            
            ////    Framework    ////
            
            PowerSource* mContext;
        };
        
        class ActionAccepteventaction_10InActivityACT_POWERSOURCEOfPowerSource : virtual public OMAcceptEventAction {
            ////    Constructors and destructors    ////
            
        public :
        
            ActionAccepteventaction_10InActivityACT_POWERSOURCEOfPowerSource(const OMString& id, ACT_POWERSOURCEOfPowerSource& activity, IOxfEvent::ID eventId, PowerSource& context);
            
            virtual OMList<OMString> filterPassableFlows(void);
            
            virtual void acceptEventData(void);
            
            ////    Framework operations    ////
            
            ////    Framework    ////
            
            PowerSource* mContext;
        };
        
        class ActionAccepttimeevent_11InActivityACT_POWERSOURCEOfPowerSource : virtual public OMTimeEventAction {
            ////    Constructors and destructors    ////
            
        public :
        
            ActionAccepttimeevent_11InActivityACT_POWERSOURCEOfPowerSource(const OMString& id, ACT_POWERSOURCEOfPowerSource& activity, int duration, PowerSource& context);
            
            virtual OMList<OMString> filterPassableFlows(void);
            
            ////    Framework operations    ////
            
            ////    Framework    ////
            
            PowerSource* mContext;
        };
        
        class ActionSendaction_12InActivityACT_POWERSOURCEOfPowerSource : virtual public OMSendEventAction {
            ////    Constructors and destructors    ////
            
        public :
        
            ActionSendaction_12InActivityACT_POWERSOURCEOfPowerSource(const OMString& id, ACT_POWERSOURCEOfPowerSource& activity, PowerSource& context);
            
            virtual OMList<OMString> filterPassableFlows(void);
            
            virtual void sendEvent(void);
            
            ////    Framework operations    ////
            
            ////    Framework    ////
            
            PowerSource* mContext;
        };
        
        class ControlDecisionnode_7InActivityACT_POWERSOURCEOfPowerSource : virtual public OMDecisionNode {
            ////    Constructors and destructors    ////
            
        public :
        
            ControlDecisionnode_7InActivityACT_POWERSOURCEOfPowerSource(const OMString& id, ACT_POWERSOURCEOfPowerSource& activity, PowerSource& context);
            
            virtual OMList<OMString> filterPassableFlows(void);
            
            ////    Framework operations    ////
            
            ////    Framework    ////
            
            PowerSource* mContext;
        };
        
        class ControlMergenode_24InActivityACT_POWERSOURCEOfPowerSource : virtual public OMMergeNode {
            ////    Constructors and destructors    ////
            
        public :
        
            ControlMergenode_24InActivityACT_POWERSOURCEOfPowerSource(const OMString& id, ACT_POWERSOURCEOfPowerSource& activity, PowerSource& context);
            
            virtual OMList<OMString> filterPassableFlows(void);
            
            ////    Framework operations    ////
            
            ////    Framework    ////
            
            PowerSource* mContext;
        };
        
        class ControlMergenode_33InActivityACT_POWERSOURCEOfPowerSource : virtual public OMMergeNode {
            ////    Constructors and destructors    ////
            
        public :
        
            ControlMergenode_33InActivityACT_POWERSOURCEOfPowerSource(const OMString& id, ACT_POWERSOURCEOfPowerSource& activity, PowerSource& context);
            
            virtual OMList<OMString> filterPassableFlows(void);
            
            ////    Framework operations    ////
            
            ////    Framework    ////
            
            PowerSource* mContext;
        };
        
        ////    Constructors and destructors    ////
        
        ACT_POWERSOURCEOfPowerSource(PowerSource& context);
        
        ////    Framework    ////
        
        PowerSource* mContext;
    };
//#]

    ////    Friends    ////
    
#ifdef _OMINSTRUMENT
    friend class OMAnimatedPowerSource;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    PowerSource(void);
    
    //## auto_generated
    virtual ~PowerSource(void);
    
    ////    Operations    ////
    
    //## operation indicateSystemFault()
    virtual void indicateSystemFault(void);
    
    //## operation indicateSystemReady()
    virtual void indicateSystemReady(void);
    
    //## operation runSystemTest()
    virtual void runSystemTest(void);
    
    //## operation switchLightOff()
    virtual void switchLightOff(void);
    
    //## operation switchLightOn()
    virtual void switchLightOn(void);
    
//#[ ignore
    virtual OMActivity* createMainActivity(void);
    
    virtual void* getMe(void);
//#]

    //## activity_action ACT_POWERSOURCE:ROOT.action_0
    OMList<OMString> delegatedFilterPassableFlowsFromActionAction_0InActivityACT_POWERSOURCEOfPowerSource(void);
    
    //## activity_action ACT_POWERSOURCE:ROOT.action_0
    void delegatedInvokeContextMethodFromActionAction_0InActivityACT_POWERSOURCEOfPowerSource(void);
    
    //## activity_action ACT_POWERSOURCE:ROOT.action_1
    OMList<OMString> delegatedFilterPassableFlowsFromActionAction_1InActivityACT_POWERSOURCEOfPowerSource(void);
    
    //## activity_action ACT_POWERSOURCE:ROOT.action_1
    void delegatedInvokeContextMethodFromActionAction_1InActivityACT_POWERSOURCEOfPowerSource(void);
    
    //## activity_action ACT_POWERSOURCE:ROOT.CheckingSystemStatus
    OMList<OMString> delegatedFilterPassableFlowsFromActionCheckingSystemStatusInActivityACT_POWERSOURCEOfPowerSource(void);
    
    //## activity_action ACT_POWERSOURCE:ROOT.CheckingSystemStatus
    void delegatedInvokeContextMethodFromActionCheckingSystemStatusInActivityACT_POWERSOURCEOfPowerSource(void);
    
    //## activity_action ACT_POWERSOURCE:ROOT.accepteventaction_4
    OMList<OMString> delegatedFilterPassableFlowsFromActionAccepteventaction_4InActivityACT_POWERSOURCEOfPowerSource(void);
    
    //## activity_action ACT_POWERSOURCE:ROOT.accepteventaction_4
    void delegatedAcceptEventDataFromActionAccepteventaction_4InActivityACT_POWERSOURCEOfPowerSource(void);
    
    //## activity_action ACT_POWERSOURCE:ROOT.calloperation_5
    OMList<OMString> delegatedFilterPassableFlowsFromActionCalloperation_5InActivityACT_POWERSOURCEOfPowerSource(void);
    
    //## activity_action ACT_POWERSOURCE:ROOT.calloperation_5
    void delegatedInvokeContextMethodFromActionCalloperation_5InActivityACT_POWERSOURCEOfPowerSource(void);
    
    //## activity_action ACT_POWERSOURCE:ROOT.calloperation_6
    OMList<OMString> delegatedFilterPassableFlowsFromActionCalloperation_6InActivityACT_POWERSOURCEOfPowerSource(void);
    
    //## activity_action ACT_POWERSOURCE:ROOT.calloperation_6
    void delegatedInvokeContextMethodFromActionCalloperation_6InActivityACT_POWERSOURCEOfPowerSource(void);
    
    //## activity_action ACT_POWERSOURCE:ROOT.accepteventaction_7
    OMList<OMString> delegatedFilterPassableFlowsFromActionAccepteventaction_7InActivityACT_POWERSOURCEOfPowerSource(void);
    
    //## activity_action ACT_POWERSOURCE:ROOT.accepteventaction_7
    void delegatedAcceptEventDataFromActionAccepteventaction_7InActivityACT_POWERSOURCEOfPowerSource(void);
    
    //## activity_action ACT_POWERSOURCE:ROOT.action_8
    OMList<OMString> delegatedFilterPassableFlowsFromActionAction_8InActivityACT_POWERSOURCEOfPowerSource(void);
    
    //## activity_action ACT_POWERSOURCE:ROOT.action_8
    void delegatedInvokeContextMethodFromActionAction_8InActivityACT_POWERSOURCEOfPowerSource(void);
    
    //## activity_action ACT_POWERSOURCE:ROOT.calloperation_9
    OMList<OMString> delegatedFilterPassableFlowsFromActionCalloperation_9InActivityACT_POWERSOURCEOfPowerSource(void);
    
    //## activity_action ACT_POWERSOURCE:ROOT.calloperation_9
    void delegatedInvokeContextMethodFromActionCalloperation_9InActivityACT_POWERSOURCEOfPowerSource(void);
    
    //## activity_action ACT_POWERSOURCE:ROOT.accepteventaction_10
    OMList<OMString> delegatedFilterPassableFlowsFromActionAccepteventaction_10InActivityACT_POWERSOURCEOfPowerSource(void);
    
    //## activity_action ACT_POWERSOURCE:ROOT.accepteventaction_10
    void delegatedAcceptEventDataFromActionAccepteventaction_10InActivityACT_POWERSOURCEOfPowerSource(void);
    
    //## activity_action ACT_POWERSOURCE:ROOT.accepttimeevent_11
    OMList<OMString> delegatedFilterPassableFlowsFromActionAccepttimeevent_11InActivityACT_POWERSOURCEOfPowerSource(void);
    
    //## activity_action ACT_POWERSOURCE:ROOT.sendaction_12
    OMList<OMString> delegatedFilterPassableFlowsFromActionSendaction_12InActivityACT_POWERSOURCEOfPowerSource(void);
    
    //## activity_action ACT_POWERSOURCE:ROOT.sendaction_12
    void delegatedSendEventFromActionSendaction_12InActivityACT_POWERSOURCEOfPowerSource(void);
    
    //## activity_control ACT_POWERSOURCE:ROOT.decisionnode_7
    OMList<OMString> delegatedFilterPassableFlowsFromControlDecisionnode_7InActivityACT_POWERSOURCEOfPowerSource(void);
    
    //## activity_control ACT_POWERSOURCE:ROOT.mergenode_24
    OMList<OMString> delegatedFilterPassableFlowsFromControlMergenode_24InActivityACT_POWERSOURCEOfPowerSource(void);
    
    //## activity_control ACT_POWERSOURCE:ROOT.mergenode_33
    OMList<OMString> delegatedFilterPassableFlowsFromControlMergenode_33InActivityACT_POWERSOURCEOfPowerSource(void);
    
    ////    Additional operations    ////
    
    //## auto_generated
    const bool getSystemOk(void) const;
    
    //## auto_generated
    void setSystemOk(const bool p_systemOk);
    
    //## auto_generated
    const TMS* getItsTMS(void) const;
    
    //## auto_generated
    void setItsTMS(TMS* const p_TMS);
    
    //## auto_generated
    virtual bool startBehavior(void);

protected :

    //## auto_generated
    void cleanUpRelations(void);
    
    ////    Attributes    ////

private :

    bool systemOk;		//## attribute systemOk
    
    ////    Relations and components    ////
    
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
//#[ ignore
class OMAnimatedPowerSource : virtual public AOMInstance {
    ////    Framework operations    ////
    
public :

    virtual void serializeAttributes(AOMSAttributes* aomsAttributes) const;
    
    virtual void serializeRelations(AOMSRelations* aomsRelations) const;

    DECLARE_ACTIVITY_META(PowerSource, OMAnimatedPowerSource)
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\PowerSource.h
*********************************************************************/
