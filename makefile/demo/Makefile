OBJECTS = main.o defs.o 
XX = g++
CFLAGS = -Wall -O

newTest:$(OBJECTS)
	$(XX) $(OBJECTS) -o newTest;
main.o:defs.h
	$(XX) $(CFLAGS) -c main.cpp -o main.o;
defs.o:defs.h
	$(XX) $(CFLAGS) -c defs.cpp -o defs.o;

.PHONY : clean
clean :
	@echo 正在清楚文件;
	-rm -rf *.o newTest;
