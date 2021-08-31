#if defined(_WIN32)
#if defined(EXPORTING_Alpha)
#define DECLSPEC __declspec(dllexport)
#else
#define DECLSPEC __declspec(dllimport)
#endif
#define ALPHA_API __cdecl
#else // non windows
#define DECLSPEC
#define ALPHA_API
#endif

#define BIT(x) (1 << x)
#define AL_BIND_EVENT_FN(fn) std::bind(&fn, this, std::placeholders::_1)
