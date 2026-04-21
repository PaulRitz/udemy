#############
# Variables #
#############
DEBUG ?= 1
ENABLE_WARNINGS ?= 1
ENABLE_WARNINGS_AS_ERRORS ?= 0

INCLUDE_DIR = include
SOURCE_DIR = src
BUILD_DIR = build

ifeq ($(DEBUG), 1)
    CXXFLAGS += -g -O0
    EXECUTABLE_NAME = mainDebug
else
    CXXFLAGS += -O3
    EXECUTABLE_NAME = mainRelease
endif

ifeq ($(ENABLE_WARNINGS), 1)
    CXX_WARNING_FLAGS = -Wall -Wextra -Wpedantic
else
    CXX_WARNING_FLAGS = 
endif

ifeq ($(ENABLE_WARNINGS_AS_ERRORS), 1)
    CXX_WARNING_FLAGS += -Werror
endif

CXX_STANDARD = c++17
CXX = g++
# Use += so we don't overwrite the DEBUG flags set above
CXXFLAGS += $(CXX_WARNING_FLAGS) -std=$(CXX_STANDARD)
CPPFLAGS = -I $(INCLUDE_DIR)

COMPILER_CALL = $(CXX) $(CXXFLAGS) $(CPPFLAGS)

CXX_SOURCES = $(wildcard $(SOURCE_DIR)/*.cpp)
CXX_INCLUDE_SOURCES = $(wildcard $(INCLUDE_DIR)/*.cpp)
CXX_OBJECTS = $(patsubst $(SOURCE_DIR)/%.cpp, $(BUILD_DIR)/%.o, $(CXX_SOURCES))
CXX_OBJECTS += $(patsubst $(INCLUDE_DIR)/%.cpp, $(BUILD_DIR)/%.o, $(CXX_INCLUDE_SOURCES))

###########
# Targets #
###########

all: build

# Ensure build directory exists before trying to compile objects
build: prepare $(CXX_OBJECTS)
	$(COMPILER_CALL) $(CXX_OBJECTS) -o $(BUILD_DIR)/$(EXECUTABLE_NAME)

$(BUILD_DIR)/%.o: $(SOURCE_DIR)/%.cpp
	$(COMPILER_CALL) -c $< -o $@

$(BUILD_DIR)/%.o: $(INCLUDE_DIR)/%.cpp
	$(COMPILER_CALL) -c $< -o $@

prepare:
	@mkdir -p $(BUILD_DIR)

clean:
	rm -rf $(BUILD_DIR)

run: build
	@echo -e "\n"
	@./$(BUILD_DIR)/$(EXECUTABLE_NAME)
	@echo -e "\n"
	@echo "executable has been run"

template: clean
ifndef TM
	$(error TM is undefined. Usage: make template TM=my_template_name)
endif
	mkdir -p ../../templates/project_templates
	cp -R . ../../templates/project_templates/$(TM)

input:
ifndef N
	$(error no name provided. Usage make input N=my_input_name)
endif
	cp ../../templates/inputs/$(N).txt files/in

input-all:
	cp -r ../../templates/inputs/. files/in/

.PHONY: all clean prepare execute template