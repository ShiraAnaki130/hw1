CC=gcc
AR=ar
FLAGS= -Wall -g
OBJECTS_IMPLE=power.o basicMath.o
OBJECT_MAIN=main.o

all: mymathd mymaths mains maind
mains: $(OBJECT_MAIN) libmyMath.a
	$(CC) $(FLAGS) -o mains $(OBJECT_MAIN) libmyMath.a
maind: $(OBJECT_MAIN)
	$(CC) $(FLAGS) -o maind $(OBJECT_MAIN) ./libmyMath.so
mymathd: $(OBJECTS_IMPLE)
	$(CC) -shared -o libmyMath.so $(OBJECTS_IMPLE)
mymaths: $(OBJECTS_IMPLE)
	$(AR) -rcs libmyMath.a $(OBJECTS_IMPLE)
main.o: main.c myMath.h
	$(CC) $(FLAGS) -c $< -o $@
power.o: power.c myMath.h
	$(CC) $(FLAGS) -c $< -o $@
basicMath.o: basicMath.c myMath.h
	$(CC) $(FLAGS) -c $< -o $@
.PHONY: clean all
clean:
	rm *.o *.a *.so mains maind
