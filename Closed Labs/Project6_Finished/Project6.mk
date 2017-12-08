##
## Auto Generated makefile by CodeLite IDE
## any manual changes will be erased      
##
## Debug
ProjectName            :=Project6
ConfigurationName      :=Debug
WorkspacePath          :="/nfshome/c1001906/csci2170/ClosedLabs/Closed Labs"
ProjectPath            :="/nfshome/c1001906/csci2170/ClosedLabs/Closed Labs/Project6"
IntermediateDirectory  :=./Debug
OutDir                 := $(IntermediateDirectory)
CurrentFileName        :=
CurrentFilePath        :=
CurrentFileFullPath    :=
User                   :=Peyton Thomas Cox
Date                   :=05/06/17
CodeLitePath           :=/nfshome/c1001906/.codelite
LinkerName             :=/usr/bin/x86_64-linux-gnu-g++
SharedObjectLinkerName :=/usr/bin/x86_64-linux-gnu-g++ -shared -fPIC
ObjectSuffix           :=.o
DependSuffix           :=.o.d
PreprocessSuffix       :=.i
DebugSwitch            :=-g 
IncludeSwitch          :=-I/nfshome/cs/public_html/GENERAL/bin -I
LibrarySwitch          :=-l
OutputSwitch           :=-o 
LibraryPathSwitch      :=-L/nfshome/cs/public_html/GENERAL/bin -lkarel -L
PreprocessorSwitch     :=-D
SourceSwitch           :=-c 
OutputFile             :=$(IntermediateDirectory)/$(ProjectName)
Preprocessors          :=
ObjectSwitch           :=-o 
ArchiveOutputSwitch    := 
PreprocessOnlySwitch   :=-E
ObjectsFileList        :="Project6.txt"
PCHCompileFlags        :=
MakeDirCommand         :=mkdir -p
LinkOptions            :=  
IncludePath            :=  $(IncludeSwitch). $(IncludeSwitch). 
IncludePCH             := 
RcIncludePath          := 
Libs                   := 
ArLibs                 :=  
LibPath                := $(LibraryPathSwitch). 

##
## Common variables
## AR, CXX, CC, AS, CXXFLAGS and CFLAGS can be overriden using an environment variables
##
AR       := /usr/bin/x86_64-linux-gnu-ar rcu
CXX      := /usr/bin/x86_64-linux-gnu-g++
CC       := /usr/bin/x86_64-linux-gnu-gcc
CXXFLAGS :=  -g -O0 -Wall $(Preprocessors)
CFLAGS   :=  -g -O0 -Wall $(Preprocessors)
ASFLAGS  := 
AS       := /usr/bin/x86_64-linux-gnu-as


##
## User defined environment variables
##
CodeLiteDir:=/usr/share/codelite
Objects0=$(IntermediateDirectory)/maindriver.cpp$(ObjectSuffix) $(IntermediateDirectory)/Cashier.cpp$(ObjectSuffix) $(IntermediateDirectory)/Employee.cpp$(ObjectSuffix) $(IntermediateDirectory)/Manager.c$(ObjectSuffix) $(IntermediateDirectory)/Manager.cpp$(ObjectSuffix) 



Objects=$(Objects0) 

##
## Main Build Targets 
##
.PHONY: all clean PreBuild PrePreBuild PostBuild MakeIntermediateDirs
all: $(OutputFile)

$(OutputFile): $(IntermediateDirectory)/.d $(Objects) 
	@$(MakeDirCommand) $(@D)
	@echo "" > $(IntermediateDirectory)/.d
	@echo $(Objects0)  > $(ObjectsFileList)
	$(LinkerName) $(OutputSwitch)$(OutputFile) @$(ObjectsFileList) $(LibPath) $(Libs) $(LinkOptions)

MakeIntermediateDirs:
	@test -d ./Debug || $(MakeDirCommand) ./Debug


$(IntermediateDirectory)/.d:
	@test -d ./Debug || $(MakeDirCommand) ./Debug

PreBuild:


##
## Objects
##
$(IntermediateDirectory)/maindriver.cpp$(ObjectSuffix): maindriver.cpp $(IntermediateDirectory)/maindriver.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/nfshome/c1001906/csci2170/ClosedLabs/Closed Labs/Project6/maindriver.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/maindriver.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/maindriver.cpp$(DependSuffix): maindriver.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/maindriver.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/maindriver.cpp$(DependSuffix) -MM maindriver.cpp

$(IntermediateDirectory)/maindriver.cpp$(PreprocessSuffix): maindriver.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/maindriver.cpp$(PreprocessSuffix) maindriver.cpp

$(IntermediateDirectory)/Cashier.cpp$(ObjectSuffix): Cashier.cpp $(IntermediateDirectory)/Cashier.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/nfshome/c1001906/csci2170/ClosedLabs/Closed Labs/Project6/Cashier.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Cashier.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Cashier.cpp$(DependSuffix): Cashier.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/Cashier.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/Cashier.cpp$(DependSuffix) -MM Cashier.cpp

$(IntermediateDirectory)/Cashier.cpp$(PreprocessSuffix): Cashier.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Cashier.cpp$(PreprocessSuffix) Cashier.cpp

$(IntermediateDirectory)/Employee.cpp$(ObjectSuffix): Employee.cpp $(IntermediateDirectory)/Employee.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/nfshome/c1001906/csci2170/ClosedLabs/Closed Labs/Project6/Employee.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Employee.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Employee.cpp$(DependSuffix): Employee.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/Employee.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/Employee.cpp$(DependSuffix) -MM Employee.cpp

$(IntermediateDirectory)/Employee.cpp$(PreprocessSuffix): Employee.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Employee.cpp$(PreprocessSuffix) Employee.cpp

$(IntermediateDirectory)/Manager.c$(ObjectSuffix): Manager.c $(IntermediateDirectory)/Manager.c$(DependSuffix)
	$(CC) $(SourceSwitch) "/nfshome/c1001906/csci2170/ClosedLabs/Closed Labs/Project6/Manager.c" $(CFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Manager.c$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Manager.c$(DependSuffix): Manager.c
	@$(CC) $(CFLAGS) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/Manager.c$(ObjectSuffix) -MF$(IntermediateDirectory)/Manager.c$(DependSuffix) -MM Manager.c

$(IntermediateDirectory)/Manager.c$(PreprocessSuffix): Manager.c
	$(CC) $(CFLAGS) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Manager.c$(PreprocessSuffix) Manager.c

$(IntermediateDirectory)/Manager.cpp$(ObjectSuffix): Manager.cpp $(IntermediateDirectory)/Manager.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/nfshome/c1001906/csci2170/ClosedLabs/Closed Labs/Project6/Manager.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Manager.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Manager.cpp$(DependSuffix): Manager.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/Manager.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/Manager.cpp$(DependSuffix) -MM Manager.cpp

$(IntermediateDirectory)/Manager.cpp$(PreprocessSuffix): Manager.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Manager.cpp$(PreprocessSuffix) Manager.cpp


-include $(IntermediateDirectory)/*$(DependSuffix)
##
## Clean
##
clean:
	$(RM) -r ./Debug/


