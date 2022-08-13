TARGET_EXEC := cppcourse

BUILD_DIR := ./build
OBJ_DIR := $(BUILD_DIR)/obj
SRC_DIR := ./src
INC_DIR := $(SRC_DIR)/include

#SRCS := $(shell find $(SRC_DIR) -name '*.cpp' -or -name '*.cc')
#INCS := $(shell find $(INC_DIR) -name '*.hpp' -or -name '*.h')
SRCS := $(shell find $(SRC_DIR) -name '*.cc')
INCS := $(shell find $(INC_DIR) -name '*.h')
OBJS := $(SRCS:%.cc=%.o)
OBJS := $(OBJS:%.cpp=%.o)
OBJS := $(notdir $(OBJS))
OBJS := $(addprefix $(OBJ_DIR)/, $(OBJS))

CXX = g++
CXXFLAGS = -Wall -g
CXXFLAGS += -std=c++17


all: $(TARGET_EXEC)

.PHONY: all

$(TARGET_EXEC): $(OBJS)
	$(CXX) $(CXXFLAGS) $? -o $(BUILD_DIR)/$@

$(OBJ_DIR)%.o: $(SRC_DIR)%.cc $(OBJ_DIR)
	$(CXX) -c $(CXXFLAGS) -I $(INC_DIR) $< -o $@

$(OBJ_DIR):
	mkdir -p $@


.PHONY: clean cleanobj

clean: cleanobj
	rm -r $(BUILD_DIR)

cleanobj:
	rm -r $(OBJ_DIR)
