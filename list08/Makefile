EX01:=$(CURDIR)/Exercise01

MAKEFILESDIR:="${EX01}"

all: compile

compile:
	@ for i in ${MAKEFILESDIR}; do $(MAKE) -C "$$i" || exit; done

clean:
	@ for i in ${MAKEFILESDIR}; do $(MAKE) clean -C "$$i" || exit; done