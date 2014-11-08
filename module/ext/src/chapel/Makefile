CHPL = chpl --savec genna --fast --library --static
#CHPL = chpl --savec ccode --fast
TARGETS = \
	chapel

LIB_PATH=/home/safl/chapel/lib/linux64.gnu.arch-native.loc-flat.comm-none.tasks-fifo.tmr-generic.mem-cstdlib.atomics-intrinsics.gmp-none.hwloc-none.re-none.wide-struct.fs-none

default: all 

all: $(TARGETS)

libby:
	gcc -g -o libby libby.c -ldl -lpthread

link:
	g++ -shared -lpthread -o chapel.so -Wl,--whole-archive chapel.a $(LIB_PATH)/libchpl.a $(LIB_PATH)/main.o  -Wl,--no-whole-archive

clean: FORCE
	rm -rf ccode/*
	rm -f chapel
	rm -f chapel.a
	rm -f chapel.so
	rm -f libby
	rm -f core

%: %.chpl
	$(CHPL) -o $@ $<

FORCE:
