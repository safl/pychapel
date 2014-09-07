CHPL = chpl --savec ccode --fast --dynamic --library
TARGETS = \
	ufunc

default: all 

all: $(TARGETS)

clean: FORCE
	rm ccode/*

%: %.chpl
	$(CHPL) -o $@ $<

FORCE:
