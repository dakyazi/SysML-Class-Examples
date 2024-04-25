
############# Target type (Debug/Release) ##################
############################################################
CPPCompileDebug= /Zi /Od /D "_DEBUG" $(LIBCRT_FLAG)d  /Fd"$(TARGET_NAME)" 
CPPCompileRelease= /Ox /D"NDEBUG" $(LIBCRT_FLAG) /Fd"$(TARGET_NAME)" 
LinkDebug=
LinkRelease=
BuildSet=Debug
SUBSYSTEM=/SUBSYSTEM:console
RPFrameWorkDll=False
SimulinkLibName=

ConfigurationCPPCompileSwitches=   /I . /I . /I $(OMROOT)\LangCpp /I $(OMROOT)\LangCpp\oxf /nologo /W3 $(ENABLE_EH) $(CRT_FLAGS) $(CPPCompileDebug) /D "_AFXDLL" /D "WIN32" /D "_CONSOLE" /D "_MBCS" /D "_WINDOWS" $(INST_FLAGS) $(INCLUDE_PATH) $(INST_INCLUDES) /c   

SIMULINK_CONFIG=False
!IF "$(SIMULINK_CONFIG)" == "True"
ConfigurationCPPCompileSwitches=$(ConfigurationCPPCompileSwitches) /D "OM_WITH_CLEANUP"
!ENDIF


!IF "$(RPFrameWorkDll)" == "True"
ConfigurationCPPCompileSwitches=$(ConfigurationCPPCompileSwitches) /D "FRAMEWORK_DLL"
!ENDIF

################### Compilation flags ######################
############################################################
INCLUDE_QUALIFIER=/I
DEFINE_QUALIFIER=/D

!IF "False" == "True"
MT_PREFIX=MT
LIBCRT_FLAG=/MT
!ELSE
MT_PREFIX=
LIBCRT_FLAG=/MD
!ENDIF

LIB_PREFIX=MSVC15x86$(MT_PREFIX)

CRT_FLAGS=$(DEFINE_QUALIFIER)_CRT_SECURE_NO_DEPRECATE $(DEFINE_QUALIFIER)_CRT_SECURE_NO_WARNINGS
ENABLE_EH=/EHa

WINMM_LIB=winmm.lib

################### Commands definition #########################
#################################################################
RMDIR = rmdir
LIB_CMD=link.exe -lib
LINK_CMD=link.exe
LIB_FLAGS=$(LinkDebug)  /NOLOGO   
LINK_FLAGS=$(LinkDebug)  /NOLOGO    $(SUBSYSTEM) /MACHINE:x86 

############### Generated macros #################
##################################################

FLAGSFILE=
RULESFILE=
OMROOT="C:\Program Files (x86)\IBM\Rhapsody\9.0\Share"
RHPROOT="C:\Program Files (x86)\IBM\Rhapsody\9.0"
FRAMEWORK_LIB_ROOT="C:\ProgramData\IBM\Rhapsody\9.0\UserShare"

CPP_EXT=.cpp
H_EXT=.h
OBJ_EXT=.obj
EXE_EXT=.exe
LIB_EXT=.lib

INSTRUMENTATION=Animation

TIME_MODEL=RealTime

TARGET_TYPE=Executable

TARGET_NAME=DefaultComponent

all : $(TARGET_NAME)$(EXE_EXT) DefaultComponent.mak

TARGET_MAIN=MainDefaultComponent

LIBS=

INCLUDE_PATH= \
  $(INCLUDE_QUALIFIER)$(OMROOT)/LangCpp/osconfig/WIN32

ADDITIONAL_OBJS=

OBJS= \
  NVIS.obj \
  Stakeholder.obj \
  Constraints.obj \
  HighResVideoCam.obj \
  InfraredFilter.obj \
  Standards.obj \
  NaturalEnvironment.obj \
  CommunicationSystem.obj \
  Headlights.obj \
  MonitoringScreen.obj \
  Car.obj \
  IB_NVIS.obj \
  NVIS_1.obj \
  Driver.obj \
  System_Context.obj \
  NVIS_Operating_Environment.obj \
  NVIS_Use_Case.obj \
  User_Models.obj




OBJ_DIR=

!IF "$(OBJ_DIR)"!=""
CREATE_OBJ_DIR=if not exist $(OBJ_DIR) mkdir $(OBJ_DIR)
CLEAN_OBJ_DIR= if exist $(OBJ_DIR) $(RMDIR) $(OBJ_DIR)
!ELSE
CREATE_OBJ_DIR=
CLEAN_OBJ_DIR=
!ENDIF

######################## Predefined macros ############################
#######################################################################
!IF "$(OBJS)" != ""
$(OBJS) : $(INST_LIBS) $(OXF_LIBS)
!ENDIF

LIB_POSTFIX=
!IF "$(BuildSet)"=="Release"
LIB_POSTFIX=R
!ENDIF

!IF "$(TARGET_TYPE)" == "Executable"
LinkDebug=$(LinkDebug) /DEBUG
LinkRelease=$(LinkRelease) /OPT:NOREF
!ELSEIF "$(TARGET_TYPE)" == "Library"
LinkDebug=$(LinkDebug)
!ENDIF


!IF "$(INSTRUMENTATION)" == "Animation"
INST_FLAGS=/D "OMANIMATOR"
INST_INCLUDES=/I $(OMROOT)\LangCpp\aom /I $(OMROOT)\LangCpp\tom
!IF "$(RPFrameWorkDll)" == "True"
INST_LIBS= 
OXF_LIBS=$(OMROOT)\LangCpp\lib\$(LIB_PREFIX)oxfanimdll$(LIB_POSTFIX)$(LIB_EXT) 
!ELSE
INST_LIBS= $(FRAMEWORK_LIB_ROOT)\LangCpp\lib\$(LIB_PREFIX)aomanim$(LIB_POSTFIX)$(LIB_EXT) $(FRAMEWORK_LIB_ROOT)\LangCpp\lib\$(LIB_PREFIX)oxsiminst$(LIB_POSTFIX)$(LIB_EXT)
OXF_LIBS=$(FRAMEWORK_LIB_ROOT)\LangCpp\lib\$(LIB_PREFIX)oxfinst$(LIB_POSTFIX)$(LIB_EXT) $(FRAMEWORK_LIB_ROOT)\LangCpp\lib\$(LIB_PREFIX)omComAppl$(LIB_POSTFIX)$(LIB_EXT) $(SimulinkLibName)
!ENDIF
SOCK_LIB=wsock32.lib

!ELSEIF "$(INSTRUMENTATION)" == "Tracing"
INST_FLAGS=/D "OMTRACER"
INST_INCLUDES=/I $(OMROOT)\LangCpp\aom /I $(OMROOT)\LangCpp\tom
!IF "$(RPFrameWorkDll)" == "True"
INST_LIBS=
OXF_LIBS= $(FRAMEWORK_LIB_ROOT)\LangCpp\lib\$(LIB_PREFIX)oxftracedll$(LIB_POSTFIX)$(LIB_EXT) 
!ELSE
INST_LIBS=$(FRAMEWORK_LIB_ROOT)\LangCpp\lib\$(LIB_PREFIX)tomtrace$(LIB_POSTFIX)$(LIB_EXT) $(FRAMEWORK_LIB_ROOT)\LangCpp\lib\$(LIB_PREFIX)aomtrace$(LIB_POSTFIX)$(LIB_EXT) $(FRAMEWORK_LIB_ROOT)\LangCpp\lib\$(LIB_PREFIX)oxsiminst$(LIB_POSTFIX)$(LIB_EXT)
OXF_LIBS= $(FRAMEWORK_LIB_ROOT)\LangCpp\lib\$(LIB_PREFIX)oxfinst$(LIB_POSTFIX)$(LIB_EXT) $(FRAMEWORK_LIB_ROOT)\LangCpp\lib\$(LIB_PREFIX)omComAppl$(LIB_POSTFIX)$(LIB_EXT) $(SimulinkLibName)
!ENDIF
SOCK_LIB=wsock32.lib

!ELSEIF "$(INSTRUMENTATION)" == "None" 
INST_FLAGS=
INST_INCLUDES=
INST_LIBS=
!IF "$(RPFrameWorkDll)" == "True"
OXF_LIBS=$(FRAMEWORK_LIB_ROOT)\LangCpp\lib\$(LIB_PREFIX)oxfdll$(LIB_POSTFIX)$(LIB_EXT) $(FRAMEWORK_LIB_ROOT)\LangCpp\lib\$(LIB_PREFIX)oxsim$(LIB_POSTFIX)$(LIB_EXT)
!ELSE
OXF_LIBS=$(FRAMEWORK_LIB_ROOT)\LangCpp\lib\$(LIB_PREFIX)oxf$(LIB_POSTFIX)$(LIB_EXT) $(SimulinkLibName) $(FRAMEWORK_LIB_ROOT)\LangCpp\lib\$(LIB_PREFIX)oxsim$(LIB_POSTFIX)$(LIB_EXT)
!ENDIF
SOCK_LIB=

!ELSE
!ERROR An invalid Instrumentation $(INSTRUMENTATION) is specified.
!ENDIF



################## Generated dependencies ########################
##################################################################






NVIS.obj : NVIS.cpp NVIS.h    System_Context.h HighResVideoCam.h InfraredFilter.h Standards.h NaturalEnvironment.h CommunicationSystem.h Constraints.h Stakeholder.h Headlights.h MonitoringScreen.h Car.h IB_NVIS.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"NVIS.obj" "NVIS.cpp" 



Stakeholder.obj : Stakeholder.cpp Stakeholder.h    System_Context.h NVIS.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"Stakeholder.obj" "Stakeholder.cpp" 



Constraints.obj : Constraints.cpp Constraints.h    System_Context.h NVIS.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"Constraints.obj" "Constraints.cpp" 



HighResVideoCam.obj : HighResVideoCam.cpp HighResVideoCam.h    System_Context.h NVIS.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"HighResVideoCam.obj" "HighResVideoCam.cpp" 



InfraredFilter.obj : InfraredFilter.cpp InfraredFilter.h    System_Context.h NVIS.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"InfraredFilter.obj" "InfraredFilter.cpp" 



Standards.obj : Standards.cpp Standards.h    System_Context.h NVIS.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"Standards.obj" "Standards.cpp" 



NaturalEnvironment.obj : NaturalEnvironment.cpp NaturalEnvironment.h    System_Context.h NVIS.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"NaturalEnvironment.obj" "NaturalEnvironment.cpp" 



CommunicationSystem.obj : CommunicationSystem.cpp CommunicationSystem.h    System_Context.h NVIS.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"CommunicationSystem.obj" "CommunicationSystem.cpp" 



Headlights.obj : Headlights.cpp Headlights.h    System_Context.h NVIS.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"Headlights.obj" "Headlights.cpp" 



MonitoringScreen.obj : MonitoringScreen.cpp MonitoringScreen.h    System_Context.h NVIS.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"MonitoringScreen.obj" "MonitoringScreen.cpp" 



Car.obj : Car.cpp Car.h    System_Context.h NVIS.h IB_NVIS.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"Car.obj" "Car.cpp" 



IB_NVIS.obj : IB_NVIS.cpp IB_NVIS.h    System_Context.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"IB_NVIS.obj" "IB_NVIS.cpp" 



NVIS_1.obj : NVIS_1.cpp NVIS_1.h    NVIS_Operating_Environment.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"NVIS_1.obj" "NVIS_1.cpp" 



Driver.obj : Driver.cpp Driver.h    NVIS_Use_Case.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"Driver.obj" "Driver.cpp" 



System_Context.obj : System_Context.cpp System_Context.h    NVIS.h Stakeholder.h Constraints.h HighResVideoCam.h InfraredFilter.h Standards.h NaturalEnvironment.h CommunicationSystem.h Headlights.h MonitoringScreen.h Car.h IB_NVIS.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"System_Context.obj" "System_Context.cpp" 



NVIS_Operating_Environment.obj : NVIS_Operating_Environment.cpp NVIS_Operating_Environment.h    NVIS_1.h HighResVideoCam.h InfraredFilter.h NaturalEnvironment.h Headlights.h CommunicationSystem.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"NVIS_Operating_Environment.obj" "NVIS_Operating_Environment.cpp" 



NVIS_Use_Case.obj : NVIS_Use_Case.cpp NVIS_Use_Case.h    
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"NVIS_Use_Case.obj" "NVIS_Use_Case.cpp" 



User_Models.obj : User_Models.cpp User_Models.h    NVIS.h 
	$(CREATE_OBJ_DIR)
	$(CPP) $(ConfigurationCPPCompileSwitches)  /Fo"User_Models.obj" "User_Models.cpp" 






$(TARGET_MAIN)$(OBJ_EXT) : $(TARGET_MAIN)$(CPP_EXT) $(OBJS) 
	$(CPP) $(ConfigurationCPPCompileSwitches) /Fo"$(TARGET_MAIN)$(OBJ_EXT)" $(TARGET_MAIN)$(CPP_EXT)

########################## Linking instructions ###############################
###############################################################################
$(TARGET_NAME)$(EXE_EXT): $(OBJS) $(ADDITIONAL_OBJS) $(TARGET_MAIN)$(OBJ_EXT) DefaultComponent.mak 
	@echo Linking $(TARGET_NAME)$(EXE_EXT)
	$(LINK_CMD)  $(TARGET_MAIN)$(OBJ_EXT) $(OBJS) $(ADDITIONAL_OBJS) \
	$(LIBS) \
	$(INST_LIBS) \
	$(OXF_LIBS) \
	$(SOCK_LIB) \
	$(WINMM_LIB) \
	$(LINK_FLAGS) /out:$(TARGET_NAME)$(EXE_EXT)
	if exist $(TARGET_NAME)$(EXE_EXT).manifest mt.exe -manifest $@.manifest -outputresource:$(TARGET_NAME)$(EXE_EXT);1



$(TARGET_NAME)$(LIB_EXT) : $(OBJS) $(ADDITIONAL_OBJS) DefaultComponent.mak
	@echo Building library $@
	$(LIB_CMD) $(LIB_FLAGS) /out:$(TARGET_NAME)$(LIB_EXT) $(OBJS) $(ADDITIONAL_OBJS) $(LIBS)

clean:
	@echo Cleanup
	if exist NVIS.obj erase NVIS.obj
	if exist Stakeholder.obj erase Stakeholder.obj
	if exist Constraints.obj erase Constraints.obj
	if exist HighResVideoCam.obj erase HighResVideoCam.obj
	if exist InfraredFilter.obj erase InfraredFilter.obj
	if exist Standards.obj erase Standards.obj
	if exist NaturalEnvironment.obj erase NaturalEnvironment.obj
	if exist CommunicationSystem.obj erase CommunicationSystem.obj
	if exist Headlights.obj erase Headlights.obj
	if exist MonitoringScreen.obj erase MonitoringScreen.obj
	if exist Car.obj erase Car.obj
	if exist IB_NVIS.obj erase IB_NVIS.obj
	if exist NVIS_1.obj erase NVIS_1.obj
	if exist Driver.obj erase Driver.obj
	if exist System_Context.obj erase System_Context.obj
	if exist NVIS_Operating_Environment.obj erase NVIS_Operating_Environment.obj
	if exist NVIS_Use_Case.obj erase NVIS_Use_Case.obj
	if exist User_Models.obj erase User_Models.obj
	if exist $(TARGET_MAIN)$(OBJ_EXT) erase $(TARGET_MAIN)$(OBJ_EXT)
	if exist *$(OBJ_EXT) erase *$(OBJ_EXT)
	if exist $(TARGET_NAME).pdb erase $(TARGET_NAME).pdb
	if exist $(TARGET_NAME)$(LIB_EXT) erase $(TARGET_NAME)$(LIB_EXT)
	if exist $(TARGET_NAME).ilk erase $(TARGET_NAME).ilk
	if exist $(TARGET_NAME)$(EXE_EXT) erase $(TARGET_NAME)$(EXE_EXT)
	if exist $(TARGET_NAME)$(EXE_EXT).manifest erase $(TARGET_NAME)$(EXE_EXT).manifest
	$(CLEAN_OBJ_DIR)
	
