#ifndef SIGNALRCORE_GLOBAL_H
#define SIGNALRCORE_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(SIGNALRCORE_LIBRARY)
#  define SIGNALRCORESHARED_EXPORT Q_DECL_EXPORT
#else
#  define SIGNALRCORESHARED_EXPORT Q_DECL_IMPORT
#endif

#endif // SIGNALRCORE_GLOBAL_H