// The following ifdef block is the standard way of creating macros which make exporting 
// from a DLL simpler. All files within this DLL are compiled with the QUERY_EXPORTS
// symbol defined on the command line. This symbol should not be defined on any project
// that uses this DLL. This way any other project whose source files include this file see 
// QUERY_API functions as being imported from a DLL, whereas this DLL sees symbols
// defined with this macro as being exported.
#ifdef GUMBO_QUERY_EXPORTS
#define GUMBO_QUERY_API __declspec(dllexport)
#else
#define GUMBO_QUERY_API __declspec(dllimport)
#endif

//// This class is exported from the query.dll
//class QUERY_API Cquery {
//public:
//	Cquery(void);
//	// TODO: add your methods here.
//};
//
//extern QUERY_API int nquery;
//
//QUERY_API int fnquery(void);
