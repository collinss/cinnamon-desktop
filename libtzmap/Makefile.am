lib_LTLIBRARIES = libtzmap.la

# SUBDIRS = po-timezones

libtzmap_la_CPPFLAGS =			\
	$(WARN_CFLAGS)			\
	$(TZMAP_CFLAGS)			\
	-I$(srcdir)			\
	-DDATADIR="\"$(uidir)\""			\
	-DCINNAMONCC_DATA_DIR="\"$(pkgdatadir)\""		\
	-DCINNAMONLOCALEDIR="\"$(datadir)/locale\""	\
	-DWITH_INTROSPECTION		\
	-DG_LOG_DOMAIN="\"Tzmap\""

icons16dir = $(datadir)/icons/hicolor/16x16/apps
dist_icons16_DATA = icons/16x16/cinnamon-preferences-system-time.png
icons22dir = $(datadir)/icons/hicolor/22x22/apps
dist_icons22_DATA = icons/22x22/cinnamon-preferences-system-time.png
icons32dir = $(datadir)/icons/hicolor/32x32/apps
dist_icons32_DATA = icons/32x32/cinnamon-preferences-system-time.png
icons48dir = $(datadir)/icons/hicolor/48x48/apps
dist_icons48_DATA = icons/48x48/cinnamon-preferences-system-time.png
icons256dir = $(datadir)/icons/hicolor/256x256/apps
dist_icons256_DATA = icons/256x256/cinnamon-preferences-system-time.png
iconsscalabledir = $(datadir)/icons/hicolor/scalable/apps
dist_iconsscalable_DATA = icons/scalable/cinnamon-preferences-system-time.svg

# this can be removed once the ui file is removed from the code
uidir = $(pkgdatadir)/ui/tzmap
dist_ui_DATA = \
	datetime.ui \
	data/bg.png \
	data/bg_dim.png \
	data/cc.png \
	data/pin.png \
	data/timezone_0.png \
	data/timezone_0_dim.png \
	data/timezone_-10.png \
	data/timezone_-10_dim.png \
	data/timezone_10.png \
	data/timezone_10_dim.png \
	data/timezone_10.5.png \
	data/timezone_10.5_dim.png \
	data/timezone_-1.png \
	data/timezone_-1_dim.png \
	data/timezone_1.png \
	data/timezone_1_dim.png \
	data/timezone_-11.png \
	data/timezone_-11_dim.png \
	data/timezone_11.png \
	data/timezone_11_dim.png \
	data/timezone_11.5.png \
	data/timezone_11.5_dim.png \
	data/timezone_12.png \
	data/timezone_12_dim.png \
	data/timezone_12.75.png \
	data/timezone_12.75_dim.png \
	data/timezone_13.png \
	data/timezone_13_dim.png \
	data/timezone_14.png \
	data/timezone_14_dim.png \
	data/timezone_-2.png \
	data/timezone_-2_dim.png \
	data/timezone_2.png \
	data/timezone_2_dim.png \
	data/timezone_-3.png \
	data/timezone_-3_dim.png \
	data/timezone_3.png \
	data/timezone_3_dim.png \
	data/timezone_-3.5.png \
	data/timezone_-3.5_dim.png \
	data/timezone_3.5.png \
	data/timezone_3.5_dim.png \
	data/timezone_-4.png \
	data/timezone_-4_dim.png \
	data/timezone_4.png \
	data/timezone_4_dim.png \
	data/timezone_-4.5.png \
	data/timezone_-4.5_dim.png \
	data/timezone_4.5.png \
	data/timezone_4.5_dim.png \
	data/timezone_-5.png \
	data/timezone_-5_dim.png \
	data/timezone_5.png \
	data/timezone_5_dim.png \
	data/timezone_-5.5.png \
	data/timezone_-5.5_dim.png \
	data/timezone_5.5.png \
	data/timezone_5.5_dim.png \
	data/timezone_5.75.png \
	data/timezone_5.75_dim.png \
	data/timezone_-6.png \
	data/timezone_-6_dim.png \
	data/timezone_6.png \
	data/timezone_6_dim.png \
	data/timezone_6.5.png \
	data/timezone_6.5_dim.png \
	data/timezone_-7.png \
	data/timezone_-7_dim.png \
	data/timezone_7.png \
	data/timezone_7_dim.png \
	data/timezone_-8.png \
	data/timezone_-8_dim.png \
	data/timezone_8.png \
	data/timezone_8_dim.png \
	data/timezone_-8.5.png \
	data/timezone_-8.5_dim.png \
	data/timezone_8.5.png \
	data/timezone_8.5_dim.png \
	data/timezone_8.75.png \
	data/timezone_8.75_dim.png \
	data/timezone_-9.png \
	data/timezone_-9_dim.png \
	data/timezone_9.png \
	data/timezone_9_dim.png \
	data/timezone_-9.5.png \
	data/timezone_-9.5_dim.png \
	data/timezone_9.5.png \
	data/timezone_9.5_dim.png

tzdatadir = $(pkgdatadir)/tzmap
dist_tzdata_DATA = backward

libtzmap_la_gir_sources = 			\
	tzmap-timezone-map.c	\
	tzmap-timezone-map.h	\
	$(NULL)

libtzmap_la_SOURCES =				\
	$(libtzmap_la_gir_sources)		\
	dtm.c			\
	dtm.h			\
	date-endian.c		\
	date-endian.h		\
	tz.c				\
	tz.h				\
	$(NULL)

libtzmap_la_LIBADD = 	\
	$(CVC_LIBS)	\
	$(NULL)

pkgconfigdir = $(libdir)/pkgconfig
pkgconfig_DATA = tzmap.pc

libtzmapdir = $(includedir)/cinnamon-desktop/libtzmap
libtzmap_HEADERS = \
	tzmap-timezone-map.h	\
	dtm.h			\
	date-endian.h		\
	tz.h				\
	$(NULL)

if HAVE_INTROSPECTION

include $(INTROSPECTION_MAKEFILE)

INTROSPECTION_SCANNER_ARGS = --add-include-path=$(srcdir) --warn-all
INTROSPECTION_COMPILER_ARGS = --includedir=$(srcdir)

Tzmap-1.0.gir: libtzmap.la
Tzmap_1_0_gir_INCLUDES = GObject-2.0 Gio-2.0 GLib-2.0 Gtk-3.0
Tzmap_1_0_gir_CFLAGS = $(INCLUDES) $(TZMAP_CFLAGS) -I $(top_srcdir)/libtzmap -DWITH_INTROSPECTION
Tzmap_1_0_gir_LIBS = libtzmap.la
Tzmap_1_0_gir_SCANNERFLAGS = --identifier-prefix=Tzmap --symbol-prefix=tzmap_
Tzmap_1_0_gir_FILES = $(libtzmap_la_gir_sources)
INTROSPECTION_GIRS = Tzmap-1.0.gir

girdir = $(datadir)/gir-1.0
gir_DATA = Tzmap-1.0.gir

typelibdir = $(libdir)/girepository-1.0
typelib_DATA = $(INTROSPECTION_GIRS:.gir=.typelib)

CLEANFILES = $(gir_DATA) $(typelib_DATA)

endif
