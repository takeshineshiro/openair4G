if !STANDALONE_EPC
AM_CFLAGS = @ADD_CFLAGS@ \
	-I$(top_srcdir)/COMMON				\
	-I$(top_srcdir)/GTPV1-U				\
	-I$(top_srcdir)/GTPV1-U/nw-gtpv1u/include	\
	-I$(top_srcdir)/GTPV1-U/nw-gtpv1u/shared		\
	-I$(top_srcdir)/INTERTASK_INTERFACE		\
	-I$(top_srcdir)/S11				\
	-I$(top_srcdir)/SGI				\
	-I$(top_srcdir)/SGW-LITE			\
	-I$(top_srcdir)/UDP				\
	-I$(top_srcdir)/UTILS				\
	-I$(top_srcdir)/UTILS/HASHTABLE

oai_sgw_LDADD = \
	$(top_builddir)/GTPV1-U/libgtpv1u.la	\
	$(top_builddir)/INTERTASK_INTERFACE/libitti.la	\
	$(top_builddir)/S11/libs11.la	\
	$(top_builddir)/GTPV2-C/nwgtpv2c-0.11/src/libNwGtpv2c.a	\
	$(top_builddir)/SGI/libsgi.la	\
	$(top_builddir)/SGW-LITE/libsgw_lite.la	\
	$(top_builddir)/UTILS/HASHTABLE/libhashtable.la \
	$(top_builddir)/UDP/libudpserver.la	\
	$(top_builddir)/SECU/libsecu.la	\
	$(top_builddir)/UTILS/libutils.la

oai_sgw_SOURCES = \
	oai_sgw_log.c	\
	oai_sgw.c

bin_PROGRAMS = oai_sgw
endif