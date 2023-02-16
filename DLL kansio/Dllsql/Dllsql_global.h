#ifndef DLLSQL_GLOBAL_H
#define DLLSQL_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(DLLSQL_LIBRARY)
#  define DLLSQLSHARED_EXPORT Q_DECL_EXPORT
#else
#  define DLLSQLSHARED_EXPORT Q_DECL_IMPORT
#endif

#endif // DLLSQL_GLOBAL_H
