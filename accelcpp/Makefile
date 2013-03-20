CXXFLAGS =	-O2 -g -Wall -fmessage-length=0

OBJS =		accelcpp.o

LIBS =

TARGET =	accelcpp

$(TARGET):	$(OBJS)
	$(CXX) -o $(TARGET) $(OBJS) $(LIBS)

all:	$(TARGET)

clean:
	rm -f $(OBJS) $(TARGET)
