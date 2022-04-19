PROJ_NAME = smart_switch
SRC = src/main.cxx
ifdef OS
	RM = del /q
	FixPath= $(subst /,\,$l)
	EXEC=exe 
else
	ifeq ($(shell uname), Linux)
		RM = rm -rf
		FixPath = $Linux
		EXEC = out
	endif
endif	

Build :$(SRC)
	g++ $(SRC) -Iinc -o $(call FixPath,$(PROJ_NAME).$(EXEC))

Run : Build
	./$(call FixPath,$(PROJ_NAME).$(EXEC))
Analyse:
       cppcheck --enable==all $(SRC)
Clean :
	$(RM) $(call FixPath,$(BUILD_DIR)/*.out)
