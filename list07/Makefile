EX01:=$(CURDIR)/Exercise01
EX02:=$(CURDIR)/Exercise02
EX03:=$(CURDIR)/Exercise03
EX04:=$(CURDIR)/Exercise04

MAKEFILESDIR:="${EX01}" "${EX02}" "${EX03}" "${EX04}"

all: compile

compile:
	@ for i in ${MAKEFILESDIR}; do $(MAKE) -C "$$i" || exit; done

clean:
	@ for i in ${MAKEFILESDIR}; do $(MAKE) clean -C "$$i" || exit; done