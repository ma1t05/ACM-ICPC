
CCC 		:= gcc -O2
CCOPT     	:= -pipe -ansi -DONLINE_JUDGE
CCLNFLAGS	:= -lm -lcrypt
DATA		:= Input
target		:= $(patsubst %,%,$(foo:.c=.o))
input		:= $(patsubst %,$(DATA)/%,$(foo:.c=.in))

$(target): $(foo)
	$(CCC) $(CCLNFLAGS) $(CCOPT) $< -o $@

test: $(target)
	./$(target) < $(input)

clean:
	rm $(target)
.PHONY: clean