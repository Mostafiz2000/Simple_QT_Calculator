C=Calculator

.PHONY : all
all : $(C)-build/$(C) clean

$(C)-build/$(C): Source_Code
	cd $(C)-build && qmake ../Source_Code && make

.PHONY : clean
clean:
	cd $(C)-build && rm *.o *.cpp *.h Makefile
