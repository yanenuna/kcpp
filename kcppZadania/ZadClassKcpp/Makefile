CXX = g++
CXXFLAGS = -Wall -std=c++11

TARGET = program

SOURCES = main.cc \
          src/Figury.cc \
          src/For.cc \
          src/Ksztalt.cc \
          src/Parzysta.cc \
          src/Petle.cc \
          src/Silnia.cc \
          src/Tabela.cc \
          src/Temperatura.cc \
          src/Unia.cc

OBJECTS = $(SOURCES:.cc=.o)

$(TARGET): $(SOURCES)
	$(CXX) $(CXXFLAGS) $(SOURCES) -o $(TARGET)

clean:
	rm -f $(TARGET) $(OBJECTS)
