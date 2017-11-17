CC := g++

SRCDIR := src
BUILDDIR := build
TARGET := bin/executable

SRCEXT := cpp
SOURCES := $(shell find $(SRCDIR) -type f -name *.$(SRCEXT))
OBJECTS := $(patsubst $(SRCDIR)/%,$(BUILDDIR)/%,$(SOURCES:.$(SRCEXT)=.o))
CXXFLAGS := -std=c++11 -Wall -I include
DBOOST := -lboost_unit_test_framework


$(TARGET): $(OBJECTS)
	$(CC) $^ -o $(TARGET)

$(BUILDDIR)/%.o: $(SRCDIR)/%.$(SRCEXT)
	mkdir -p $(BUILDDIR)
	$(CC) $(CXXFLAGS) -c -o $@ $<

clean:
	$(RM) -r $(BUILDDIR) $(TARGET)

#Tests
tester:
	$(CC) $(CXXFLAGS) test/test.cpp $(DBOOST) -o bin/test

.PHONY: clean
