
ifndef EXT
	EXT	:= .c
endif
ifeq ($(EXT),.c)
	CCC 	:= gcc -O2
	CCOPT 	:= -pipe -ansi -DONLINE_JUDGE
else 
	CCC 	:= g++ -O2
	CCOPT 	:= -pipe -DONLINE_JUDGE
endif
CCLNFLAGS	:= -lm -lcrypt
DATA		:= Input
target		:= $(patsubst %,%,$(foo:$(EXT)=.o))
input		:= $(patsubst %,$(DATA)/%,$(foo:$(EXT)=.in))

$(target): $(foo)
	$(CCC) $(CCLNFLAGS) $(CCOPT) $< -o $@

test: $(target)
	./$(target) < $(input)

clean:
	rm $(target)
.PHONY: clean