#ifndef CNOID_OPENRTMPLUGIN_EXPORTDECL_H_INCLUDED
# define CNOID_OPENRTMPLUGIN_EXPORTDECL_H_INCLUDED

# if defined _WIN32 || defined __CYGWIN__
#  define CNOID_OPENRTMPLUGIN_DLLIMPORT __declspec(dllimport)
#  define CNOID_OPENRTMPLUGIN_DLLEXPORT __declspec(dllexport)
#  define CNOID_OPENRTMPLUGIN_DLLLOCAL
# else
#  if __GNUC__ >= 4
#   define CNOID_OPENRTMPLUGIN_DLLIMPORT __attribute__ ((visibility("default")))
#   define CNOID_OPENRTMPLUGIN_DLLEXPORT __attribute__ ((visibility("default")))
#   define CNOID_OPENRTMPLUGIN_DLLLOCAL  __attribute__ ((visibility("hidden")))
#  else
#   define CNOID_OPENRTMPLUGIN_DLLIMPORT
#   define CNOID_OPENRTMPLUGIN_DLLEXPORT
#   define CNOID_OPENRTMPLUGIN_DLLLOCAL
#  endif
# endif

# ifdef CNOID_OPENRTMPLUGIN_STATIC
#  define CNOID_OPENRTMPLUGIN_DLLAPI
#  define CNOID_OPENRTMPLUGIN_LOCAL
# else
#  ifdef CnoidOpenRTMPlugin_EXPORTS
#   define CNOID_OPENRTMPLUGIN_DLLAPI CNOID_OPENRTMPLUGIN_DLLEXPORT
#  else
#   define CNOID_OPENRTMPLUGIN_DLLAPI CNOID_OPENRTMPLUGIN_DLLIMPORT
#  endif
#  define CNOID_OPENRTMPLUGIN_LOCAL CNOID_OPENRTMPLUGIN_DLLLOCAL
# endif

#endif

#ifdef CNOID_EXPORT
# undef CNOID_EXPORT
#endif
#define CNOID_EXPORT CNOID_OPENRTMPLUGIN_DLLAPI