
AM_CPPFLAGS = -I$(top_srcdir)/lib/iniparser3.0b/src
AM_CPPFLAGS += -I$(top_srcdir)/lib/libghthash-0.6.2/src
# _GNU_SOURCE is needed for strverscmp and strchrnul
AM_CPPFLAGS += -D_GNU_SOURCE

sbin_PROGRAMS = distored
distored_SOURCES = main.c config.c debug.c sock.c messages.c callbacks.c update.c hash.c
distored_LDADD =	$(top_srcdir)/lib/iniparser3.0b/libiniparser.a \
					$(top_srcdir)/lib/libghthash-0.6.2/src/.libs/libghthash.a

noinst_HEADERS = callbacks.h config.h debug.h hash.h messages.h sock.h update.h

