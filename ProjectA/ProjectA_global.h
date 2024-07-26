#ifndef PROJECTA_GLOBAL_H
#define PROJECTA_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(PROJECTA_LIBRARY)
#  define PROJECTA_EXPORT Q_DECL_EXPORT
#else
#  define PROJECTA_EXPORT Q_DECL_IMPORT
#endif

#endif // PROJECTA_GLOBAL_H
