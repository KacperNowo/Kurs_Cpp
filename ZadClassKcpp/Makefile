CXX = g++
CXXFLAGS = -std=c++14 -Wall -Wextra -Iinclude
SRCDIR = src
SOURCES = $(SRCDIR)/main.cc $(SRCDIR)/ZadKcpp.cc \
          $(SRCDIR)/Zad1.cc $(SRCDIR)/Zad2.cc $(SRCDIR)/Zad3.cc \
          $(SRCDIR)/Zad4.cc $(SRCDIR)/Zad5.cc $(SRCDIR)/Zad6.cc \
          $(SRCDIR)/Zad7.cc $(SRCDIR)/Zad8.cc $(SRCDIR)/Zad9.cc \
          $(SRCDIR)/Zad10.cc

OBJECTS = $(SOURCES:.cc=.o)
TARGET = main

all: $(TARGET)

$(TARGET): $(OBJECTS)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJECTS)

clean:
	rm -f $(OBJECTS) $(TARGET)

.PHONY: all clean
