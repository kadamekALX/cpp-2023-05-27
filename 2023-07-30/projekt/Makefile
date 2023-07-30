# CEL : ZALEZNOSCI
# 	INSTRUKCJE

OBJS=main.o Ulamek.o

program : $(OBJS)
	g++ $^ -o $@

%.o : %.cpp
# 	echo "ogolna regula"
	g++ $^ -c

clean :
	rm -f program $(OBJS)

	
.PHONY : clean
# main.o : main.cpp
# 	g++ main.cpp -c
# 
# Ulamek.o : Ulamek.cpp
# 	g++ Ulamek.cpp -c
