#############
# Variables #
#############
DEBUG ?= 1
ENABLE_WARNINGS ?= 1
ENABLE_WARNINGS_AS_ERRORS ?= 0

INCLUDE_DIR = include
SOURCE_DIR = src
BUILD_DIR = build

# Determine name based on Debug/Release
ifeq ($(DEBUG), 1)
    CXXFLAGS += -g -O0
    EXECUTABLE_NAME = mainDebug
else
    CXXFLAGS += -g -O3
    EXECUTABLE_NAME = mainRelease
endif

ifeq ($(ENABLE_WARNINGS), 1)
    CXX_WARNINGS = -Wall -Wextra -Wpedantic
else
    CXX_WARNINGS = 
endif

ifeq ($(ENABLE_WARNINGS_AS_ERRORS), 1)
    CXX_WARNINGS += -Werror
endif

CXX_STANDARD = c++17
CXX = g++
CXXFLAGS += $(CXX_WARNINGS) -std=$(CXX_STANDARD)
CPPFLAGS = -I $(INCLUDE_DIR)

COMPILER_CALL = $(CXX) $(CXXFLAGS) $(CPPFLAGS)

# FIX: Define SOURCES first, then derive OBJECTS from them
CXX_SOURCES = $(wildcard $(SOURCE_DIR)/*.cpp)
CXX_OBJECTS = $(patsubst $(SOURCE_DIR)/%.cpp, $(BUILD_DIR)/%.o, $(CXX_SOURCES))

###########
# Targets #
###########

# Default target
all: build

# Step 1: Link the executable from object files
build: prepare $(CXX_OBJECTS)
	$(COMPILER_CALL) $(CXX_OBJECTS) -o $(BUILD_DIR)/$(EXECUTABLE_NAME)

# Step 2: Rule to create object files from .cpp files
$(BUILD_DIR)/%.o: $(SOURCE_DIR)/%.cpp
	$(COMPILER_CALL) -c $< -o $@

prepare:
	mkdir -p $(BUILD_DIR)

clean:
	rm -rf $(BUILD_DIR)

execute: build
	./$(BUILD_DIR)/$(EXECUTABLE_NAME)

.PHONY: all clean prepare execute