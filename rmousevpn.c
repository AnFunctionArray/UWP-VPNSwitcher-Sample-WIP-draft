//Note on first iteration you need to create a local app profile
//for this search "change to 1 to create your first (app local) profile"
//and first time run use this

#ifndef FIRSTPASS
#define COBJMACROS
#include <roapi.h>
#include <windows.networking.vpn.h>
#include <stdbool.h>
#include <stdio.h>
#include <windows.ui.xaml.h>
#include <mprapi.h>
#include <Windows.Applicationmodel.Activation.h>
#include <Windows.h>
#include <windows.storage.h>

//#define TIMEOUTS

#define system(...) 0 //silenece pauses

#define printf(...) (__VA_ARGS__, 0) //silence logs

static const IID IID___x_ABI_CWindows_CStorage_CIApplicationDataStatics = { 0x5612147B,0xE843,0x45E3,0x94,0xD8,0x06,0x16,0x9E,0x3C,0x8E,0x17 };

static const IID IID_RasMediaManager = { 0xc612a6f2,0x49b0,0x47dd,0xa0,0x64,0x9b,0x78,0xb7,0xaa,0xcd,0xf7 };

typedef struct IRasMediaManager IRasMediaManager;

/*typedef struct IRasMediaManagerVtbl {

} IRasMediaManagerVtbl;*/

static const IID IID___x_ABI_CWindows_CNetworking_CVpn_CIVpnManagementAgent = { 0x193696CD,0xA5C4,0x4ABE,0x85,0x2B,0x78,0x5B,0xE4,0xCB,0x3E,0x34 };
//static const IID IID___x_ABI_CWindows_CNetworking_CVpn_CIVpnManagementAgent = {0x49D9DCC1,0x272F,0x4230,0x8FF3,0xF8E30E574F46};

static const IID IID_IUnknownProfileType = { 0x93F55CD6,0x628E,0x49FF,0x0B6,0x0BC,0x1B,0x40,0x69,0x85,0xC5,0xE };

static const IID IID___x_ABI_CWindows_CSecurity_CCredentials_CIPasswordCredential = { 0x6AB18989,0xC720,0x41A7,0xA6,0xC1,0xFE,0xAD,0xB3,0x63,0x29,0xA0 };

typedef interface IUnknownProfileType IUnknownProfileType;

typedef interface IUnknownProfileTypeVtbl {
	const (*pUsellessJunk[0x10])();
	HRESULT(STDMETHODCALLTYPE* SomethingSomethingHostNames)(
		IUnknownProfileType* This,
		//it's probably an interface that is returned
		/* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CVpn__CIVpnProfile** operation
		);
} IUnknownProfileTypeVtbl;

interface IUnknownProfileType {
	const IUnknownProfileTypeVtbl* lpVtbl;
};

static const IID IID___FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CVpn__CIVpnProfile = { 0xdac6dd72,0xa5d1,0x56d4,0xaf,0xc4,0x98,0x9f,0x84,0xdc,0xb2,0xb3 };

static const IID IID___x_ABI_CWindows_CNetworking_CVpn_CIVpnProfile = { 0x7875B751,0xB0D7,0x43DB,0x8A,0x93,0xD3,0xFE,0x24,0x79,0xE5,0x6A };

static const IID IID___x_ABI_CWindows_CNetworking_CVpn_CIVpnNativeProfile = { 0xA4AEE29E,0x6417,0x4333,0x98,0x42,0xF0,0xA6,0x6D,0xB6,0x98,0x02 };

static const IID IID___x_ABI_CWindows_CNetworking_CVpn_CIVpnChannel = { 0x4AC78D07,0xD1A8,0x4303,0xA0,0x91,0xC8,0xD2,0xE0,0x91,0x5B,0xC3 };

static const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CVpn__CVpnManagementErrorStatus = { 0x31229f8c,0x709d,0x5017,0x86,0x29,0x57,0xef,0x12,0x89,0xe6,0x16 };

static const IID IID___x_ABI_CWindows_CNetworking_CVpn_CIVpnNativeProfile2 = { 0x0FEC2467,0xCDB5,0x4AC7,0xB5,0xA3,0x0A,0xFB,0x5E,0xC4,0x76,0x82 };

//3276167D-C9F6-462D-9DE2-AE4C1FD8C2E5
static const IID IID___x_ABI_CWindows_CUI_CXaml_CIWindow = { 0x3276167D,0xC9F6,0x462D,0x9D,0xE2,0xAE,0x4C,0x1F,0xD8,0xC2,0xE5 };

static const IID IID___x_ABI_CWindows_CUI_CXaml_CIApplicationInitializationCallback = { 0xB6351C55,0xC284,0x46E4,0x83,0x10,0xFB,0x09,0x67,0xFA,0xB7,0x6F };

static const IID IID___x_ABI_CWindows_CUI_CXaml_CIApplicationStatics = { 0x06499997,0xF7B4,0x45FE,0xB7,0x63,0x75,0x77,0xD1,0xD3,0xCB,0x4A };

static const IID IID___x_ABI_CWindows_CUI_CXaml_CIApplicationFactory = { 0x93BBE361,0xBE5A,0x4EE3,0xB4,0xA3,0x95,0x11,0x8D,0xC9,0x7A,0x89 };
static const IID IID___x_ABI_CWindows_CUI_CXaml_CIApplicationOverrides = { 0x25F99FF7, 0x9347, 0x459A, 0x9F,0xAC, 0xB2,0xD0,0xE1,0x1C,0x1A, 0x0F };
static const IID IID___x_ABI_CWindows_CUI_CXaml_CIUnhandledExceptionEventHandler = { 0x9274E6BD , 0x49A1 , 0x4958 , 0xBE, 0xEE, 0xD0, 0xE1, 0x95, 0x87, 0xB6, 0xE3 };
static const IID IID___x_ABI_CWindows_CApplicationModel_CActivation_CICommandLineActivatedEventArgs = { 0x4506472C, 0x006A , 0x48EB , 0x8A, 0xFB, 0xD0, 0x7A, 0xB2, 0x5E, 0x33, 0x66 };
//DB5CD2B9-D3B4-558C-C64E-0434FD1BD889
static const IID IID___x_ABI_CWindows_CUI_CXaml_CIApplicationOverrides2 = { 0xDB5CD2B9,0xD3B4,0x558C,0xC6,0x4E,0x04,0x34,0xFD,0x1B,0xD8,0x89 };
static const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIRandomAccessStream = { 0x398C4183,0x793D,0x5B00,0x81,0x9B,0x4A,0xEF,0x92,0x48,0x5E,0x94 };
static const IID IID___x_ABI_CWindows_CStorage_CStreams_CIInputStream = { 0x905A0FE2,0xBC53,0x11DF,0x8C,0x49,0x00,0x1E,0x4F,0xC6,0x86,0xDA };

static const wchar_t* const servers[1] = {// L"localhost",

//fill with VPN servers
//they will be iterated over

//I used some sample ones here

L"us.superfreevpn.com",
/*
L"uk.superfreevpn.com",
L"ca.superfreevpn.com",
L"de.superfreevpn.com",
L"fr.superfreevpn.com"*/
};

static const wchar_t* const serversPINs[1] = { // L"", //for sstp which didn't work
L"6003",
/*L"2588",
L"2208",
L"7343",
L"8520"*/
};

#define user L"free" //put user name
#define pass L"XXXX" //l2tp pass

static HRESULT QueryInterface();
static(AddRef)(in);
static(Release)(in);
static __x_ABI_CWindows_CUI_CXaml_CIApplicationOverrides* inner;
static HRESULT QueryInterfaceOutter(This, riid, ppvObject)
void* This; REFIID riid; void** ppvObject; {if (QueryInterface(This, riid, ppvObject) == E_NOTIMPL)
return IInspectable_QueryInterface(inner, riid, ppvObject);
return S_OK; }

struct __x_ABI_CWindows_CUI_CXaml_CIApplicationOverridesRmouse {
	__x_ABI_CWindows_CUI_CXaml_CIApplicationOverrides;
	LONGLONG count;
};

static(AddRefOutter)(in) struct __x_ABI_CWindows_CUI_CXaml_CIApplicationOverridesRmouse* in;
{ printf("outteraddref\n"); InterlockedIncrement64(&in->count); }
static(ReleaseOutter)(in) struct __x_ABI_CWindows_CUI_CXaml_CIApplicationOverridesRmouse* in;
{ printf("outteraddref\n"); InterlockedDecrement64(&in->count); in->count ? 0 : (printf("gotcna\n"), IInspectable_Release(inner)); }

static const wchar_t* const* getnextserver(const wchar_t* Target) {
	bool bConnected = false; const wchar_t* const* pServer = servers + sizeof servers / sizeof pServer - 1;
	for (; pServer != servers - 1; --pServer)
	{
		if (bConnected) return pServer; bConnected = !wcscmp(*pServer, Target);
	} return bConnected ? (servers + sizeof servers / sizeof pServer - 1) : 0;
}

static const wchar_t* getcurrserver(const wchar_t* Target)
{
	for (const wchar_t* const* pServer = servers; pServer != servers + sizeof servers / sizeof pServer; ++pServer)
		if (!wcscmp(*pServer, Target)) return *pServer; return 0;
}
HRESULT(STDMETHODCALLTYPE GetIids)(
	__RPC__in __x_ABI_CWindows_CUI_CXaml_CIApplicationOverrides* This,
	/* [out] */ __RPC__out ULONG* iidCount,
	/* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID** iids
	) {
	printf("iids"); system("PAUSE");
}

HRESULT(STDMETHODCALLTYPE GetRuntimeClassName)(
	__RPC__in __x_ABI_CWindows_CUI_CXaml_CIApplicationOverrides* This,
	/* [out] */ __RPC__deref_out_opt HSTRING* className
	) {
	printf("name"); system("PAUSE");
}

HRESULT(STDMETHODCALLTYPE GetTrustLevel)(
	__RPC__in __x_ABI_CWindows_CUI_CXaml_CIApplicationOverrides* This,
	/* [OUT ] */ __RPC__out TrustLevel* trustLevel
	) {
	printf("truzt"); system("PAUSE");
}
HRESULT(STDMETHODCALLTYPE OnWindowCreated)(
	__x_ABI_CWindows_CUI_CXaml_CIApplicationOverrides* This,
	/* [in] */__RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIWindowCreatedEventArgs* args
	) {
	__x_ABI_CWindows_CUI_CXaml_CIWindow* pwindow;
	__x_ABI_CWindows_CUI_CXaml_CIWindowCreatedEventArgs_get_Window(args, &pwindow);
	__x_ABI_CWindows_CUI_CXaml_CIWindow_Activate(pwindow);
	//__x_ABI_CWindows_CUI_CXaml_CIWindowCreatedEventArgs_Release(args);	
	return S_OK;
}
static __x_ABI_CWindows_CUI_CXaml_CIApplicationOverrides* inner;
static __x_ABI_CWindows_CUI_CXaml_CIApplicationOverridesVtbl outtervtbl = { QueryInterface,AddRefOutter,ReleaseOutter , GetIids, GetRuntimeClassName, GetTrustLevel };
static struct __x_ABI_CWindows_CUI_CXaml_CIApplicationOverridesRmouse outter = { &outtervtbl };// = {(__x_ABI_CWindows_CUI_CXaml_CIApplicationOverridesVtbl[1]){QueryInterface,AddRef,Release}};
//outtervtbl.Release = 0;
static HRESULT(*getcurrhandler(const wchar_t* Target))()
{
	for (const wchar_t* const* pServer = &outtervtbl; pServer != &outtervtbl + 1; ++pServer)
		if (*pServer == Target) return pServer - &outtervtbl + (char**)inner->lpVtbl; return 0;
}

static LONG __stdcall PvectoredExceptionHandler1(
	EXCEPTION_POINTERS* ExceptionInfo
)
{
	system("PAUSE");
	exit(0);
}

#define defaulthandler(name)\
static name(a, b, c) void* a, b, c; {getcurrhandler(name)(a, b, c) ; }
HRESULT(STDMETHODCALLTYPE InvokeExcpt)(
	__x_ABI_CWindows_CUI_CXaml_CIUnhandledExceptionEventHandler* This,
	/* [in] */__RPC__in_opt IInspectable* sender,
	/* [in] */__RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIUnhandledExceptionEventArgs* e
	) {
	HSTRING info; ULONG32 nocare;
	__x_ABI_CWindows_CUI_CXaml_CIUnhandledExceptionEventArgs_get_Message(e, &info);
	system("PAUSE");
	wprintf(L"%s\n", WindowsGetStringRawBuffer(info, &nocare));
	system("PAUSE");
	exit(0);
}

static __x_ABI_CWindows_CUI_CXaml_CIUnhandledExceptionEventHandlerVtbl excptVtbl = { QueryInterface,AddRef,Release, InvokeExcpt };
static __x_ABI_CWindows_CUI_CXaml_CIUnhandledExceptionEventHandler excimpl = { &excptVtbl };// = {(__x_ABI_CWindows_CUI_CXaml_CIApplicationOverridesVtbl[1]){QueryInterface,AddRef,Release}};

//defaulthandler ()
static HRESULT QueryInterface(This, riid, ppvObject)void* This; REFIID riid; void** ppvObject; {if (!ppvObject) return E_POINTER;
printf("%p\n", inner);
if (!memcmp(riid, &IID___x_ABI_CWindows_CUI_CXaml_CIApplicationOverrides2, sizeof * riid))
printf("here we go\n"), system("PAUSE");
return !memcmp(riid, &IID_IUnknown, sizeof * riid) ||
!memcmp(riid, &IID_IInspectable, sizeof * riid) ||
!memcmp(riid, &IID___FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CVpn__CVpnManagementErrorStatus, sizeof * riid) ||
!memcmp(riid, &IID___FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CVpn__CIVpnProfile, sizeof * riid) ||
!memcmp(riid, &IID___x_ABI_CWindows_CUI_CXaml_CIApplicationInitializationCallback, sizeof * riid) ||
!memcmp(&IID___x_ABI_CWindows_CUI_CXaml_CIUnhandledExceptionEventHandler, riid, sizeof * riid) ||
!memcmp(riid, &IID___x_ABI_CWindows_CUI_CXaml_CIApplicationOverrides, sizeof * riid) ||
!memcmp(riid, &IID___FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStorageFile, sizeof * riid) ||
!memcmp(riid, &IID___FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIRandomAccessStream, sizeof * riid) ||
!memcmp(riid, &IID___FIAsyncOperationCompletedHandler_1_UINT32, sizeof * riid) ||
!memcmp(riid, &IID___FIAsyncOperationCompletedHandler_1_boolean, sizeof * riid) ? *ppvObject = This,
printf("%p\n", inner), S_OK
	: E_NOINTERFACE; }
static HANDLE hReady;
static(AddRef)(in) void* in; {; printf("add %p\n", inner); /*inner ? IInspectable_AddRef(inner) : 0;*/ }
static(Release)(in) void* in; {; printf("rels %p\n", inner); /*inner ? IInspectable_AddRef(inner) : 0;*/ }
static stub() { return S_OK; }
static HRESULT(InvokeError)(in, asyncInfo, status) void* in;
__FIAsyncOperation_1_Windows__CNetworking__CVpn__CVpnManagementErrorStatus* asyncInfo; AsyncStatus status;
{
	enum __x_ABI_CWindows_CNetworking_CVpn_CVpnManagementErrorStatus disconnectstatus;
	__FIAsyncOperation_1_Windows__CNetworking__CVpn__CVpnManagementErrorStatus_GetResults(asyncInfo, &disconnectstatus),
		__FIAsyncOperation_1_Windows__CNetworking__CVpn__CVpnManagementErrorStatus_Release(asyncInfo),
		wprintf(L"SET0:%d\n%x\n", disconnectstatus, GetLastError()), SetEvent(hReady);
	return S_OK; }

static __x_ABI_CWindows_CNetworking_CVpn_CIVpnProfile* pProfile;

static HRESULT(InvokeCollect)(in, asyncInfo, status) void* in;
__FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CVpn__CIVpnProfile* asyncInfo; AsyncStatus status;
{__FIVectorView_1_Windows__CNetworking__CVpn__CIVpnProfile* pResults;
unsigned int sz, sz1;
HSTRING hProfileName;
printf("SET1:%d\n", status),
printf("%x\n", __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CVpn__CIVpnProfile_GetResults(asyncInfo, &pResults)),
__FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CVpn__CIVpnProfile_Release(asyncInfo),
__FIVectorView_1_Windows__CNetworking__CVpn__CIVpnProfile_get_Size(pResults, &sz),
__FIVectorView_1_Windows__CNetworking__CVpn__CIVpnProfile_GetAt(pResults, 0, &pProfile),
__FIVectorView_1_Windows__CNetworking__CVpn__CIVpnProfile_Release(pResults),
__x_ABI_CWindows_CNetworking_CVpn_CIVpnProfile_get_ProfileName(pProfile, &hProfileName),
//__x_ABI_CWindows_CNetworking_CVpn_CIVpnProfile_Release(pProfile),
wprintf(L"Amount of profiles find: %x\nProfile Name: %s\n", sz, WindowsGetStringRawBuffer(hProfileName, &sz1)),
WindowsDeleteString(hProfileName),
SetEvent(hReady); return S_OK; }

/*static HRESULT(InvokeCollect2)(in, asyncInfo, status) void* in;
__FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CVpn__CIVpnProfile* asyncInfo; AsyncStatus status;
{__FIVectorView_1_Windows__CNetworking__CVpn__CIVpnProfile* pResults;
__x_ABI_CWindows_CNetworking_CVpn_CIVpnProfile* pProfile;
	unsigned int sz, sz1;
	HSTRING hProfileName;
	system("PAUSE");
	printf("SET2:%d\n", status),
		printf("%x\n", __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CVpn__CIVpnProfile_GetResults(asyncInfo, &pResults)),
		__FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CVpn__CIVpnProfile_Release(asyncInfo),
		__FIVectorView_1_Windows__CNetworking__CVpn__CIVpnProfile_get_Size(pResults, &sz),
		__FIVectorView_1_Windows__CNetworking__CVpn__CIVpnProfile_GetAt(pResults, 0, &pProfile),
		__FIVectorView_1_Windows__CNetworking__CVpn__CIVpnProfile_Release(pResults),

		printf("%p\n", pProfile->lpVtbl->QueryInterface);
	system("PAUSE");
	SetEvent(hReady); return S_OK; }*/

static HRESULT(STDMETHODCALLTYPE OnActivated)(
	__x_ABI_CWindows_CUI_CXaml_CIApplicationOverrides* This,
	/* [in] */__RPC__in_opt __x_ABI_CWindows_CApplicationModel_CActivation_CIActivatedEventArgs* args
	) {
	HSTRING string; UINT32 nocare;
	__x_ABI_CWindows_CApplicationModel_CActivation_CICommandLineActivationOperation* poperation;
	__x_ABI_CWindows_CApplicationModel_CActivation_CICommandLineActivatedEventArgs* pargs;
	system("PAUSE");
	printf("%x\n", __x_ABI_CWindows_CApplicationModel_CActivation_CIActivatedEventArgs_QueryInterface(args, &IID___x_ABI_CWindows_CApplicationModel_CActivation_CICommandLineActivatedEventArgs, &pargs));
	system("PAUSE");
	__x_ABI_CWindows_CApplicationModel_CActivation_CICommandLineActivatedEventArgs_get_Operation(pargs, &poperation);
	__x_ABI_CWindows_CApplicationModel_CActivation_CICommandLineActivationOperation_get_Arguments(poperation, &string);
	wprintf(L"actual shit %s\n", WindowsGetStringRawBuffer(string, &nocare));
	system("PAUSE");
	return S_OK;
}


static HRESULT(OnLaunched)(This, args)__x_ABI_CWindows_CUI_CXaml_CIApplicationOverrides* This;
__x_ABI_CWindows_CApplicationModel_CActivation_CILaunchActivatedEventArgs* args; {
	HSTRING string; UINT32 nocare;
	printf("%p\n", args);
	system("PAUSE");
	//printf("%x\n",  __x_ABI_CWindows_CApplicationModel_CActivation_CICommandLineActivatedEventArgs_QueryInterface(args, &IID___x_ABI_CWindows_CApplicationModel_CActivation_CICommandLineActivatedEventArgs, &args1)) ;
	//__x_ABI_CWindows_CApplicationModel_CActivation_CICommandLineActivatedEventArgs_get_Operation(args, &poperation);
	//system("PAUSE");
	printf("%x\n", __x_ABI_CWindows_CApplicationModel_CActivation_CILaunchActivatedEventArgs_get_Arguments(args, &string));
	wprintf(L"actual shit %s\n", WindowsGetStringRawBuffer(string, &nocare));
	system("PAUSE");
	WindowsDeleteString(string);
	//__x_ABI_CWindows_CApplicationModel_CActivation_CILaunchActivatedEventArgs_Release(args);
	extern (__stdcall stdcallmainras)(unused);
	return S_OK;
}


static HRESULT(InvokeApp)(This, p) __x_ABI_CWindows_CUI_CXaml_CIApplicationInitializationCallback* This; //another activation shennanigans
__x_ABI_CWindows_CUI_CXaml_CIApplicationInitializationCallbackParams* p; {
	HSTRING_HEADER header; HSTRING string;
	__x_ABI_CWindows_CUI_CXaml_CIApplicationFactory* pAppFact;

	__x_ABI_CWindows_CUI_CXaml_CIApplication* pApp;
	WindowsCreateStringReference(RuntimeClass_Windows_UI_Xaml_Application,
		sizeof RuntimeClass_Windows_UI_Xaml_Application / sizeof(WCHAR) - 1,
		&header, &string),
		//RoGetActivationFactory(string, &IID___x_ABI_CWindows_CUI_CXaml_CIApplicationOverrides, &outter), WindowsDeleteString(string),

		RoGetActivationFactory(string, &IID___x_ABI_CWindows_CUI_CXaml_CIApplicationFactory, &pAppFact);
	printf("%p\n", pAppFact);
	__x_ABI_CWindows_CUI_CXaml_CIApplicationOverrides* inntmp;
	printf("%x\n", __x_ABI_CWindows_CUI_CXaml_CIApplicationFactory_CreateInstance(pAppFact, &outter, &inner, &pApp));
	//IInspectable_Release(inner);
	//printf("%x\n", __x_ABI_CWindows_CUI_CXaml_CIApplicationFactory_CreateInstance(pAppFact, inner, 0, 0));
	//IInspectable_Release(inntmp);
	//printf("%x\n", __x_ABI_CWindows_CUI_CXaml_CIApplicationStatics_get_Current(pAppStats, &pcurr) );
	//IInspectable_AddRef(inner),
	//memcpy((IInspectableVtbl*)& outtervtbl + 1, (IInspectableVtbl*)inner->lpVtbl + 1, sizeof outtervtbl - sizeof(IInspectableVtbl));
	outter.lpVtbl->OnWindowCreated = OnWindowCreated;
	outter.lpVtbl->OnLaunched = OnLaunched;
	//outter.lpVtbl->OnActivated = OnActivated;

	EventRegistrationToken evnttoken;	//memcpy(outter.chBufferExtra, &inner->lpVtbl + 1, sizeof outter.chBufferExtra);

	__x_ABI_CWindows_CUI_CXaml_CIApplication_add_UnhandledException(pApp, &excimpl, &evnttoken);
	CreateThread(0, 0, stdcallmainras, pApp, 0, 0);
	return S_OK;
}


static const wchar_t* currentConection;

static HANDLE hReadyExternal; static __FIVector_1_HSTRING* hServers;

static HANDLE hDisconnect, hConnect;

static __x_ABI_CWindows_CNetworking_CVpn_CIVpnNativeProfile* pNativeProfile;

//extern __declspec(thread)RASCONNSTATUSW FirstConnection;

#define FIRSTPASS
#include "rmousevpn.c"
#undef FIRSTPASS

static __stdcall dialup()
{
	/*ResetEvent(hReadyExternal);

	hangup(conn);
	errprintf("Triggered for %s\n", currentConection);
	int success;do
	{
	//static DWORD serverIndex=1;
	//strcpy(params.szUserName,"ckiam6"),
	//strcpy(params.szPassword,"myuylj6m"),
	strcpy(params.szPhoneNumber,next=getnextserver(next)),
	//success = RasGetConnectStatusA(conn,&status)==ERROR_INVALID_HANDLE;
	success = next != *servers ? conn=NULL, RasDial(NULL,pbkpath,&params,0,NULL,&conn) : 0,
	errprintf("Connected to %s - %d\n",next, success);if(success==ERROR_DIAL_ALREADY_IN_PROGRESS)exit(0);}
//QueryServiceStatusEx(RasMan,SC_STATUS_PROCESS_INFO,&scstatus,sizeof scstatus,&noCare),
//TerminateProcess(OpenProcess(PROCESS_TERMINATE,false,scstatus.dwProcessId),0), StartService(RasMan,0,0);}
	while((success || next == currentConection)&&(hangup(success & 0x80000000 ? 0 : conn),Sleep(500),1));

	SetEvent(hReadyExternal);//, currentConection = next;*/
}

(__stdcall stdcallmainrastoonew)(pApp) __x_ABI_CWindows_CUI_CXaml_CIApplication* pApp; //uhm here I tried mimicking the VPN Settings
//but without much luck so this is unused
{
	IInspectable* pVpnObjInspect; HSTRING string;
	ULONG idCount; IID* pIdds; HSTRING_HEADER header;
	IRasMediaManager* pRasMan;
	system("PAUSE");
	WindowsCreateStringReference(L"Windows.Networking.UX.Internal.RasMediaManager",
		sizeof L"Windows.Networking.UX.Internal.RasMediaManager" / sizeof(WCHAR) - 1,
		&header, &string), printf("%x\n", RoActivateInstance(string, &pVpnObjInspect)), IInspectable_GetIids(pVpnObjInspect, &idCount, &pIdds);

	printf("here");
	printf("%x\n", IInspectable_QueryInterface(pVpnObjInspect, &IID_RasMediaManager, &pRasMan)), IInspectable_Release(pVpnObjInspect);

}

//The idea here is to replace the servername inside the rasphone.pbk
//without triggering any other settings changes
//which would have happened had we used the VPN API
//NOTE: The rasphone.pbk is local to the application
static InitiateStorage(lpVtbl, pServerName, pReplaceWith) void* lpVtbl; WCHAR* pServerName; WCHAR* pReplaceWith;
{HSTRING string; HSTRING_HEADER header; WindowsCreateStringReference(RuntimeClass_Windows_Storage_ApplicationData,
	sizeof RuntimeClass_Windows_Storage_ApplicationData / sizeof(WCHAR) - 1, &header, &string);
__x_ABI_CWindows_CStorage_CIApplicationDataStatics* pAppStats; RoGetActivationFactory(string,
	&IID___x_ABI_CWindows_CStorage_CIApplicationDataStatics, &pAppStats);
__x_ABI_CWindows_CStorage_CIApplicationData* pAppData;
__x_ABI_CWindows_CStorage_CIApplicationDataStatics_get_Current(pAppStats, &pAppData);
__x_ABI_CWindows_CStorage_CIApplicationDataStatics_Release(pAppStats);
__x_ABI_CWindows_CStorage_CIStorageFolder* pLocalFolder;
__x_ABI_CWindows_CStorage_CIApplicationData_get_LocalFolder(pAppData, &pLocalFolder);
__x_ABI_CWindows_CStorage_CIApplicationData_Release(pAppData);
__FIAsyncOperation_1_Windows__CStorage__CStorageFile* pStorageFileOperation;
WindowsCreateStringReference(L"rasphone.pbk", sizeof L"rasphone.pbk" / sizeof(WCHAR) - 1, &header, &string);
__x_ABI_CWindows_CStorage_CIStorageFolder_GetFileAsync(pLocalFolder, string, &pStorageFileOperation);
union {
	__FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStorageFile Handler;
	struct CompleteHandlerStorageFile Storage;
} un;
un.Handler.lpVtbl = lpVtbl;
((__FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStorageFileVtbl*)lpVtbl)->Invoke
= InvokeStorageFileCompleteHandler;
#else
struct CompleteHandlerStorageFile {
	__FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStorageFile;
	__x_ABI_CWindows_CStorage_CIStorageFile* pFile;
};
static InvokeStorageFileCompleteHandler(This, asyncoperation, status) struct CompleteHandlerStorageFile* This;
__FIAsyncOperation_1_Windows__CStorage__CStorageFile* asyncoperation; AsyncStatus status;
{__FIAsyncOperation_1_Windows__CStorage__CStorageFile_GetResults(asyncoperation, &This->pFile);
__FIAsyncOperation_1_Windows__CStorage__CStorageFile_Release(asyncoperation); SetEvent(hReady); return S_OK; }
#endif
#ifndef FIRSTPASS
printf("%x\n", __FIAsyncOperation_1_Windows__CStorage__CStorageFile_put_Completed(pStorageFileOperation, &un.Handler));
WaitForSingleObject(hReady, INFINITE);
ResetEvent(hReady);
__x_ABI_CWindows_CStorage_CIStorageFolder_Release(pLocalFolder);
__x_ABI_CWindows_CStorage_CIStorageFile* pFileStorage = un.Storage.pFile;
__FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStream* pOpenAsync;
__x_ABI_CWindows_CStorage_CIStorageFile_OpenAsync(un.Storage.pFile, FileAccessMode_ReadWrite, &pOpenAsync);
__FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStream_put_Completed(pOpenAsync, &un.Handler);
WaitForSingleObject(hReady, INFINITE);
ResetEvent(hReady);
__x_ABI_CWindows_CStorage_CIStorageFile_Release(pFileStorage);
__x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStream* pRandomAccess = un.Storage.pFile;
printf("pRandomAccess = %p\n", pRandomAccess); system("PAUSE"); UINT64 flsz, newflsz;
__x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStream_get_Size(pRandomAccess, &flsz);
__x_ABI_CWindows_CStorage_CStreams_CIInputStream* pInputStream;
__x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStream_QueryInterface(pRandomAccess,
	&IID___x_ABI_CWindows_CStorage_CStreams_CIInputStream, &pInputStream);
printf("%llu\n", flsz); __x_ABI_CWindows_CStorage_CStreams_CIDataReaderFactory* pReaderFact;
IInspectable* pObjInspect; __x_ABI_CWindows_CStorage_CStreams_CIDataReader* pDataReader;
WindowsCreateStringReference(RuntimeClass_Windows_Storage_Streams_DataReader,
	sizeof RuntimeClass_Windows_Storage_Streams_DataReader / sizeof(WCHAR) - 1,
	&header, &string), //printf("%x\n", RoActivateInstance(string, &pObjInspect)), /*WindowsDeleteString(string),*/ //system("PAUSE"),IInspectable_GetIids(pVpnObjInspect,&idCount,&pIdds),
	printf("%x\n", RoGetActivationFactory(string, &IID___x_ABI_CWindows_CStorage_CStreams_CIDataReaderFactory, &pReaderFact));
__x_ABI_CWindows_CStorage_CStreams_CIDataReaderFactory_CreateDataReader(pReaderFact, pInputStream, &pDataReader);
IInspectable_Release(pReaderFact); __FIAsyncOperation_1_UINT32* pAsyncOperationUINT32;
__x_ABI_CWindows_CStorage_CStreams_CIDataReader_LoadAsync(pDataReader, flsz, &pAsyncOperationUINT32);
__FIAsyncOperation_1_UINT32_put_Completed(pAsyncOperationUINT32, &un.Handler); WaitForSingleObject(hReady, INFINITE);
system("PAUSE");  int szServer = wcslen(pServerName), szReplaceWith = wcslen(pReplaceWith);
char* chServer = _alloca(szServer + 1), * chReplaceWith = _alloca(szReplaceWith + 1);
wcstombs(chServer, pServerName, szServer + 1), wcstombs(chReplaceWith, pReplaceWith, szReplaceWith + 1);
BYTE* chBuffer = (newflsz = flsz + (szReplaceWith - szServer) * 2, _alloca(flsz));
printf("%x\n", __x_ABI_CWindows_CStorage_CStreams_CIDataReader_ReadBytes(pDataReader, flsz, chBuffer));
/*printf("%.*s", flsz, chBuffer);*/ printf("%zu\n", newflsz), system("PAUSE"); __x_ABI_CWindows_CStorage_CStreams_CIOutputStream* pOutputStream;
__x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStream_put_Size(pRandomAccess, 0);
__x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStream_Seek(pRandomAccess, 0);
__x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStream_QueryInterface(pRandomAccess,
	&IID___x_ABI_CWindows_CStorage_CStreams_CIOutputStream, &pOutputStream);
__x_ABI_CWindows_CStorage_CStreams_CIDataWriterFactory* pWriterFact;
__x_ABI_CWindows_CStorage_CStreams_CIDataWriter* pDataWriter;
WindowsCreateStringReference(RuntimeClass_Windows_Storage_Streams_DataWriter,
	sizeof RuntimeClass_Windows_Storage_Streams_DataWriter / sizeof(WCHAR) - 1,
	&header, &string), //printf("%x\n", RoActivateInstance(string, &pObjInspect)), /*WindowsDeleteString(string),*/ //system("PAUSE"),IInspectable_GetIids(pVpnObjInspect,&idCount,&pIdds),
	printf("%x\n", RoGetActivationFactory(string, &IID___x_ABI_CWindows_CStorage_CStreams_CIDataWriterFactory, &pWriterFact));
__x_ABI_CWindows_CStorage_CStreams_CIDataWriterFactory_CreateDataWriter(pWriterFact, pOutputStream, &pDataWriter);
char* pFirstServer = strstr(chBuffer, chServer); IInspectable_Release(pWriterFact);
system("PAUSE");
__x_ABI_CWindows_CStorage_CStreams_CIDataWriter_WriteBytes(pDataWriter, pFirstServer - chBuffer, chBuffer),
printf("%.*s", pFirstServer - chBuffer, chBuffer);
__x_ABI_CWindows_CStorage_CStreams_CIDataWriter_WriteBytes(pDataWriter, szReplaceWith, chReplaceWith);
printf("%.*s", szReplaceWith, chReplaceWith);
system("PAUSE");
pFirstServer += szServer; char* pNextServer = strstr(pFirstServer, chServer);
__x_ABI_CWindows_CStorage_CStreams_CIDataWriter_WriteBytes(pDataWriter, pNextServer - pFirstServer, pFirstServer),
printf("%.*s", pNextServer - pFirstServer, pFirstServer);
__x_ABI_CWindows_CStorage_CStreams_CIDataWriter_WriteBytes(pDataWriter, szReplaceWith, chReplaceWith);
printf("%.*s - replace with two", szReplaceWith, chReplaceWith);
pNextServer += szServer;
__x_ABI_CWindows_CStorage_CStreams_CIDataWriter_WriteBytes(pDataWriter, chBuffer + flsz - pNextServer, pNextServer);
printf("%.*s", chBuffer + flsz - pNextServer, pNextServer);
system("PAUSE");
printf("%x\n", __x_ABI_CWindows_CStorage_CStreams_CIDataWriter_StoreAsync(pDataWriter, &pAsyncOperationUINT32));
ResetEvent(hReady), __FIAsyncOperation_1_UINT32_put_Completed(pAsyncOperationUINT32, &un.Handler);
__FIAsyncOperation_1_boolean* pasyncopbool;
WaitForSingleObject(hReady, INFINITE); system("PAUSE"); printf("%x\n", __x_ABI_CWindows_CStorage_CStreams_CIDataWriter_FlushAsync(pDataWriter, &pasyncopbool));
ResetEvent(hReady), __FIAsyncOperation_1_boolean_put_Completed(pasyncopbool, &un.Handler); WaitForSingleObject(hReady, INFINITE);
IInspectable_Release(pDataWriter); IInspectable_Release(pOutputStream); IInspectable_Release(pRandomAccess); IInspectable_Release(pDataReader);
IInspectable_Release(pInputStream); ResetEvent(hReady);
#if 0
IInspectable* pObjInspect; __x_ABI_CWindows_CStorage_CStreams_CIBufferFactory* pBuffFact;
__x_ABI_CWindows_CStorage_CStreams_CIBuffer* pBuff;
WindowsCreateStringReference(RuntimeClass_Windows_Storage_Streams_Buffer,
	sizeof RuntimeClass_Windows_Storage_Streams_Buffer / sizeof(WCHAR) - 1,
	&header, &string), printf("%x\n", RoActivateInstance(string, &pObjInspect)), /*WindowsDeleteString(string),*/ //system("PAUSE"),IInspectable_GetIids(pVpnObjInspect,&idCount,&pIdds),
	printf("%x\n", IInspectable_QueryInterface(pObjInspect, &IID___x_ABI_CWindows_CStorage_CStreams_CIBufferFactory,
		&pBuffFact)), IInspectable_Release(pObjInspect); __x_ABI_CWindows_CStorage_CStreams_CIBufferFactory_Create
		(pBuffFact, flsz, &pBuff); IInspectable_Release(pBuffFact);
__FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIBuffer_UINT32* pasyncoperationbuffer;
__x_ABI_CWindows_CStorage_CStreams_CIInputStream_ReadAsync(pInputStream, pBuff, flsz, InputStreamOptions_None,
	pasyncoperationbuffer);
__FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIBuffer_UINT32_put_Completed(pasyncoperationbuffer,
	&un.Handler); WaitForSingleObject(hReady, INFINITE); __x_ABI_CWindows_CStorage_CStreams_CIBuffer* pActualBuffer
	= un.Storage.pFile; if (pActualBuffer != pBuff) IInspectable_Release(pBuff);
#endif
}

(__stdcall stdcallmainras)(pApp) __x_ABI_CWindows_CUI_CXaml_CIApplication* pApp; //here is the main logic
{
	ULONG idCount; IID* pIdds; HSTRING_HEADER header;
	__x_ABI_CWindows_CNetworking_CVpn_CIVpnManagementAgent* pVpnMan;
	__x_ABI_CWindows_CUI_CXaml_CIWindow* pWindow;
	ULONG strSize; WCHAR* pRawString; __x_ABI_CWindows_CNetworking_CVpn_CIVpnChannel* pChannel;
	__FIAsyncOperation_1_Windows__CNetworking__CVpn__CVpnManagementErrorStatus* pVpnManErr;
	enum __x_ABI_CWindows_CNetworking_CVpn_CVpnManagementErrorStatus disconnectstatus;
	__x_ABI_CWindows_CNetworking_CVpn_CIVpnNativeProfile2* pNativeProfile2;
	__FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CVpn__CIVpnProfile* pProfiles;
	__FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CVpn__CIVpnProfile ProfilesRetrieverHandler =
	{ (__FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CVpn__CIVpnProfileVtbl[1])
		{ {QueryInterface,AddRef,Release,InvokeError}
} };  IInspectable* pVpnObjInspect; HSTRING string;

	IUnknownProfileType* pUnknownProfile; __x_ABI_CWindows_CNetworking_CVpn_CIVpnProfile* pProfile2;
	printf("stdcallmainras\n");
	ProfilesRetrieverHandler.lpVtbl->Invoke = InvokeError;
	//getCurrentPhoneNumber();

		//wprintf(L"%s\n", FirstConnection.szPhoneNumber);
	system("PAUSE");

	//volatile int a = a / 0;

	WindowsCreateStringReference(RuntimeClass_Windows_Networking_Vpn_VpnManagementAgent,
		sizeof RuntimeClass_Windows_Networking_Vpn_VpnManagementAgent / sizeof(WCHAR) - 1,
		&header, &string), printf("%x\n", RoActivateInstance(string, &pVpnObjInspect)), /*WindowsDeleteString(string),*/ //system("PAUSE"),IInspectable_GetIids(pVpnObjInspect,&idCount,&pIdds),
		printf("%x\n", IInspectable_QueryInterface(pVpnObjInspect, &IID___x_ABI_CWindows_CNetworking_CVpn_CIVpnManagementAgent, &pVpnMan)), IInspectable_Release(pVpnObjInspect);
	//printf("%x\n%x\n", WaitForSingleObject(hReadyExternal, 1000), GetLastError());
	//system("PAUSE");

	__x_ABI_CWindows_CSecurity_CCredentials_CIPasswordVault* pPassCredVault;

	__x_ABI_CWindows_CSecurity_CCredentials_CIPasswordCredential* pPassCred;

#if 0//change to 1 to create your first (app local) profile
	//and local vault
	WindowsCreateStringReference(RuntimeClass_Windows_Networking_Vpn_VpnNativeProfile,
		sizeof RuntimeClass_Windows_Networking_Vpn_VpnNativeProfile / sizeof(WCHAR) - 1,
		&header, &string), RoActivateInstance(string, &pVpnObjInspect), WindowsDeleteString(string), IInspectable_GetIids(pVpnObjInspect, &idCount, &pIdds),
		IInspectable_QueryInterface(pVpnObjInspect, &IID___x_ABI_CWindows_CNetworking_CVpn_CIVpnNativeProfile2, &pNativeProfile2),
		IInspectable_Release(pVpnObjInspect);

	__x_ABI_CWindows_CNetworking_CVpn_CIVpnNativeProfile2_put_RequireVpnClientAppUI(pNativeProfile2, true),


		IInspectable_QueryInterface(pNativeProfile2, &IID___x_ABI_CWindows_CNetworking_CVpn_CIVpnNativeProfile, &pNativeProfile),

		__x_ABI_CWindows_CNetworking_CVpn_CIVpnNativeProfile_put_NativeProtocolType(pNativeProfile, VpnNativeProtocolType_L2tp);

	__x_ABI_CWindows_CNetworking_CVpn_CIVpnNativeProfile_put_RoutingPolicyType(pNativeProfile, VpnRoutingPolicyType_ForceAllTrafficOverVpn);

	__x_ABI_CWindows_CNetworking_CVpn_CIVpnNativeProfile_get_Servers(pNativeProfile, &hServers);

	WindowsCreateStringReference(servers[0], wcslen(servers[0]), &header, &string);
	printf("%x\n", __FIVector_1_HSTRING_Append(hServers, string));
	//__x_ABI_CWindows_CNetworking_CVpn_CIVpnNativeProfile_put_UserAuthenticationMethod(pNativeProfile, VpnAuthenticationMethod_PresharedKey),
		//__x_ABI_CWindows_CNetworking_CVpn_CIVpnNativeProfile_put_TunnelAuthenticationMethod(pNativeProfile, VpnAuthenticationMethod_PresharedKey),
	IInspectable_QueryInterface(pNativeProfile, &IID___x_ABI_CWindows_CNetworking_CVpn_CIVpnProfile, &pProfile2),

		WindowsCreateStringReference(L"2019",
			sizeof L"2019" / sizeof(WCHAR) - 1,
			&header, &string),

		__x_ABI_CWindows_CNetworking_CVpn_CIVpnProfile_put_ProfileName(pProfile2, string);

	//__x_ABI_CWindows_CNetworking_CVpn_CIVpnProfile_put_RememberCredentials(pProfile2, true);

	__x_ABI_CWindows_CNetworking_CVpn_CIVpnProfile_put_AlwaysOn(pProfile2, false);

	printf("%x\n", __x_ABI_CWindows_CNetworking_CVpn_CIVpnManagementAgent_AddProfileFromObjectAsync(pVpnMan, pProfile2, &pVpnManErr));
	__FIAsyncOperation_1_Windows__CNetworking__CVpn__CVpnManagementErrorStatus_put_Completed(pVpnManErr, &ProfilesRetrieverHandler);
	WaitForSingleObject(hReady, INFINITE);
	ResetEvent(hReady);

	printf("profile created\n");

	WindowsCreateStringReference(RuntimeClass_Windows_Security_Credentials_PasswordVault,
		sizeof RuntimeClass_Windows_Security_Credentials_PasswordVault / sizeof(WCHAR) - 1,
		&header, &string), RoActivateInstance(string, &pVpnObjInspect), WindowsDeleteString(string), //IInspectable_GetIids(pVpnObjInspect, &idCount, &pIdds),
		IInspectable_QueryInterface(pVpnObjInspect, &IID___x_ABI_CWindows_CSecurity_CCredentials_CIPasswordVault, &pPassCredVault),
		IInspectable_Release(pVpnObjInspect);

	WindowsCreateStringReference(RuntimeClass_Windows_Security_Credentials_PasswordCredential,
		sizeof RuntimeClass_Windows_Security_Credentials_PasswordCredential / sizeof(WCHAR) - 1,
		&header, &string), RoActivateInstance(string, &pVpnObjInspect), WindowsDeleteString(string), //IInspectable_GetIids(pVpnObjInspect, &idCount, &pIdds),
		IInspectable_QueryInterface(pVpnObjInspect, &IID___x_ABI_CWindows_CSecurity_CCredentials_CIPasswordCredential, &pPassCred),
		IInspectable_Release(pVpnObjInspect);

	WindowsCreateStringReference(L"vpnCredentials",
		sizeof L"vpnCredentials" / sizeof(WCHAR) - 1,
		&header, &string),

		__x_ABI_CWindows_CSecurity_CCredentials_CIPasswordCredential_put_Resource(pPassCred, string),

		//wprintf(L"pass used - %s\n", serversPINs[pNextServerPointer - servers]);
	WindowsCreateStringReference(serversPINs[0],
		sizeof pass / sizeof(WCHAR) - 1,
		&header, &string),

		__x_ABI_CWindows_CSecurity_CCredentials_CIPasswordCredential_put_Password(pPassCred, string),

		WindowsCreateStringReference(user,
			sizeof user / sizeof(WCHAR) - 1,
			&header, &string),

		__x_ABI_CWindows_CSecurity_CCredentials_CIPasswordCredential_put_UserName(pPassCred, string),

		__x_ABI_CWindows_CSecurity_CCredentials_CIPasswordVault_Add(pPassCredVault,pPassCred),

	system("PAUSE");
	__x_ABI_CWindows_CUI_CXaml_CIApplication_Exit(pApp);
#endif
	auto bCompleted;
	//for (bool bCompleted;;Sleep(10000))
		//if (WaitForSingleObject(hReadyExternal, 0) != WAIT_OBJECT_0) //if hReadyExternal is non signaled
	//the above was used to synchronize with my main app
	//in this example however we'll simply switch to a new server and exit
	{
		bCompleted = true;
		ProfilesRetrieverHandler.lpVtbl->Invoke = InvokeCollect,
			wprintf(L"retrieving profiles\n");
		//actually this retrieves only the first profile (linked to the application)
		__x_ABI_CWindows_CNetworking_CVpn_CIVpnManagementAgent_GetProfilesAsync(pVpnMan, &pProfiles),
			__FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CVpn__CIVpnProfile_put_Completed(pProfiles, &ProfilesRetrieverHandler),
			//__FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CVpn__CIVpnProfile_Release(pProfiles),
			//__FIVectorView_1_Windows__CNetworking__CVpn__CIVpnProfile_Release(pProfile),
			WaitForSingleObject(hReady, INFINITE),
			ResetEvent(hReady);

		HANDLE hEvent[2] = { 0, };

		UINT32 nocare;

		ProfilesRetrieverHandler.lpVtbl->Invoke = InvokeError,

			wprintf(L"disconnecting profile\n");
		//disconnect the profile in case it's connected
		__x_ABI_CWindows_CNetworking_CVpn_CIVpnManagementAgent_DisconnectProfileAsync(pVpnMan, pProfile, &pVpnManErr),
			__FIAsyncOperation_1_Windows__CNetworking__CVpn__CVpnManagementErrorStatus_put_Completed(pVpnManErr, &ProfilesRetrieverHandler);
		/*if (WaitForSingleObject(hReady, 180000) == WAIT_TIMEOUT)
		{
			__FIAsyncOperation_1_Windows__CNetworking__CVpn__CVpnManagementErrorStatus_put_Completed(pVpnManErr, stub);
			__FIAsyncOperation_1_Windows__CNetworking__CVpn__CVpnManagementErrorStatus_Release(pVpnManErr);* /
			SetEvent(hDisconnect);

			while (WaitForSingleObject(hDisconnect, 0) == WAIT_OBJECT_0) Sleep(10000);
			//bCompleted = false;
			printf("taimed out\n");
		}*/
		WaitForSingleObject(hReady, INFINITE),
			ResetEvent(hReady);

		//system("rasdial 2019 / DISCONNECT");

		printf("%p\n", pProfile->lpVtbl->QueryInterface);
		//__x_ABI_CWindows_CUI_CXaml_CIApplication_Exit(pApp);
		//return 0;
		//system("PAUSE");

		/*WindowsCreateStringReference(RuntimeClass_Windows_Networking_Vpn_VpnNativeProfile,
			sizeof RuntimeClass_Windows_Networking_Vpn_VpnNativeProfile / sizeof(WCHAR) - 1,
			&header, &string), RoActivateInstance(string, &pVpnObjInspect), WindowsDeleteString(string), IInspectable_GetIids(pVpnObjInspect, &idCount, &pIdds),
			IInspectable_QueryInterface(pVpnObjInspect, &IID___x_ABI_CWindows_CNetworking_CVpn_CIVpnProfile, &pProfile2),
			IInspectable_Release(pVpnObjInspect);

		//printf("%p", pNativeProfile2->lpVtbl->QueryInterface);
		//system("PAUSE");
		__x_ABI_CWindows_CNetworking_CVpn_CIVpnProfile_get_ProfileName(pProfile, &string);
		__x_ABI_CWindows_CNetworking_CVpn_CIVpnProfile_put_ProfileName(pProfile2, string);*/

		//pProfile->lpVtbl = pProfile2->lpVtbl,
		printf("%x\n", IInspectable_QueryInterface(pProfile, &IID___x_ABI_CWindows_CNetworking_CVpn_CIVpnNativeProfile, &pNativeProfile));

#if 0 //junk
		ProfilesRetrieverHandler.lpVtbl->Invoke = InvokeCollect2,
			printf("%p\n", pUnknownProfile);
		system("PAUSE");
		printf("something something result %x\n", pUnknownProfile->lpVtbl->SomethingSomethingHostNames(pUnknownProfile, &pProfiles)),
			printf("%p\n", pProfiles);
		system("PAUSE");
		__FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CVpn__CIVpnProfile_put_Completed(pProfiles, &ProfilesRetrieverHandler),
			//__FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CVpn__CIVpnProfile_Release(pProfiles),
			//__FIVectorView_1_Windows__CNetworking__CVpn__CIVpnProfile_Release(pProfile),
			WaitForSingleObject(hReady, INFINITE),
			ResetEvent(hReady);


		__x_ABI_CWindows_CUI_CXaml_CIApplication_Exit(pApp);

		__x_ABI_CWindows_CNetworking_CVpn_CVpnManagementConnectionStatus Connstatus;

		__x_ABI_CWindows_CNetworking_CVpn_CIVpnNativeProfile2_get_ConnectionStatus(pNativeProfile2, &Connstatus),

			printf("connstatus -> %x\n", Connstatus);


		IInspectable_QueryInterface(pNativeProfile2, &IID___x_ABI_CWindows_CNetworking_CVpn_CIVpnNativeProfile, &pNativeProfile);

		//printf("%x\n", RoGetActivationFactory(string, &IID___x_ABI_CWindows_CNetworking_CVpn_CIVpnProfile, &pProfile2));

		//printf("%p\n", pNativeProfile);

		pProfile->lpVtbl = (char*)GetModuleHandle("Windows.Networking.Vpn.dll") + 0x904A0;

		//printf("%p\n", pProfile->lpVtbl);

		//printf("%x\n", __x_ABI_CWindows_CNetworking_CVpn_CIVpnProfile_QueryInterface(pProfile, &IID___x_ABI_CWindows_CNetworking_CVpn_CIVpnNativeProfile, &pNativeProfile)),
		//system("PAUSE"),
			//__x_ABI_CWindows_CNetworking_CVpn_CIVpnProfile_GetIids(pVpnObjInspect, &idCount, &pIdds),
		system("PAUSE");
#endif

		printf("%x\n", __x_ABI_CWindows_CNetworking_CVpn_CIVpnNativeProfile_get_Servers(pNativeProfile, &hServers));

		printf("%x\n", __FIVector_1_HSTRING_GetAt(hServers, 0, &string)), //get first server (my app only uses one)

			wprintf(L"%s\n", WindowsGetStringRawBuffer(string, &nocare));

		UINT32 noCare; HSTRING pCurr;

#if 0
		const wchar_t* pRevConn;
		for (;;)
			pRevConn = currentConection,
			__FIVector_1_HSTRING_GetAt(hServers, 0, &pCurr),
			currentConection = getcurrserver(WindowsGetStringRawBuffer(pCurr, &noCare)),
			currentConection != pRevConn ? wprintf(L"Waiting for %s...\n", currentConection),
			ResetEvent(1[hEvent]), CloseHandle(1[hEvent]) : 0,
			//0[hEvent] = CreateEventA(NULL,true,false,0[servers]),
			1[hEvent] = CreateEventW(NULL, true, false, currentConection),
			//errprintf("currentConection %s\n", currentConection),
			WaitForSingleObject(1[hEvent], 1000) == WAIT_OBJECT_0 || WaitForSingleObject(hReadyExternal, 0) != WAIT_OBJECT_0 ?
			dialup() : 0;
#endif
		const wchar_t* pCurrServer;
		const wchar_t* const* pNextServerPointer = getnextserver(pCurrServer = WindowsGetStringRawBuffer(string, &nocare)); //retrieve next server from the array
		const wchar_t* const pNextServer = *pNextServerPointer;
		system("PAUSE");
		wprintf(L"%s\n", pNextServer);
		system("PAUSE");

		InitiateStorage(ProfilesRetrieverHandler.lpVtbl, pCurrServer, pNextServer); //fix-ups 

		__x_ABI_CWindows_CNetworking_CVpn_CIVpnNativeProfile_Release(pNativeProfile);

		__x_ABI_CWindows_CNetworking_CVpn_CIVpnProfile_Release(pProfile);

		ProfilesRetrieverHandler.lpVtbl->Invoke = InvokeCollect,
			wprintf(L"retrieving profiles\n");
		//cache changes
		__x_ABI_CWindows_CNetworking_CVpn_CIVpnManagementAgent_GetProfilesAsync(pVpnMan, &pProfiles),
			__FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CVpn__CIVpnProfile_put_Completed(pProfiles, &ProfilesRetrieverHandler),
			//__FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CVpn__CIVpnProfile_Release(pProfiles),
			//__FIVectorView_1_Windows__CNetworking__CVpn__CIVpnProfile_Release(pProfile),
			WaitForSingleObject(hReady, INFINITE),
			ResetEvent(hReady);

		/*long filesz;
		wchar_t* chBuffer;
		FILE* file = _wfopen(pbkfilepath L"1.pbk", L"w");
		printf("%p\n", file),
		fseek(file, 0, SEEK_END), printf("%d\n", filesz = ftell(file)), rewind(file),
			chBuffer = _alloca(filesz), printf("%d\n", fread(chBuffer, filesz, 1, file)),
			printf("%d\n", GetLastError()),
			wprintf(chBuffer), fwrite(L"test", sizeof L"test", 1, file), system("PAUSE");*/

			//WindowsCreateStringReference(pNextServer, wcslen(pNextServer), &header, &string);
			//printf("%x\n", __FIVector_1_HSTRING_SetAt(hServers, 0, string));

			//__x_ABI_CWindows_CNetworking_CVpn_CIVpnNativeProfile_put_NativeProtocolType(pNativeProfile, method);

			//__x_ABI_CWindows_CNetworking_CVpn_CIVpnNativeProfile_put_RoutingPolicyType(pNativeProfile, VpnRoutingPolicyType_ForceAllTrafficOverVpn);
#ifdef somevpn
				//__x_ABI_CWindows_CNetworking_CVpn_CIVpnNativeProfile_put_UserAuthenticationMethod(pNativeProfile, VpnAuthenticationMethod_PresharedKey),
			//__x_ABI_CWindows_CNetworking_CVpn_CIVpnNativeProfile_put_TunnelAuthenticationMethod(pNativeProfile, VpnAuthenticationMethod_PresharedKey),

#endif
#if 0 //old attempts to make this work
		printf("deleting profile\n");
		printf("%x\n", __x_ABI_CWindows_CNetworking_CVpn_CIVpnManagementAgent_DeleteProfileAsync(pVpnMan, pProfile, &pVpnManErr));
		__FIAsyncOperation_1_Windows__CNetworking__CVpn__CVpnManagementErrorStatus_put_Completed(pVpnManErr, &ProfilesRetrieverHandler);
		WaitForSingleObject(hReady, INFINITE);
		ResetEvent(hReady);

		printf("adding profile\n");
		printf("%x\n", __x_ABI_CWindows_CNetworking_CVpn_CIVpnManagementAgent_AddProfileFromObjectAsync(pVpnMan, pProfile, &pVpnManErr));
		__FIAsyncOperation_1_Windows__CNetworking__CVpn__CVpnManagementErrorStatus_put_Completed(pVpnManErr, &ProfilesRetrieverHandler);
		WaitForSingleObject(hReady, INFINITE);
		ResetEvent(hReady);
#endif
		/*printf("updating profile\n");
		__x_ABI_CWindows_CNetworking_CVpn_CIVpnManagementAgent_UpdateProfileFromObjectAsync(pVpnMan, pProfile, &pVpnManErr);
		__FIAsyncOperation_1_Windows__CNetworking__CVpn__CVpnManagementErrorStatus_put_Completed(pVpnManErr, &ProfilesRetrieverHandler);
		WaitForSingleObject(hReady, INFINITE);
		ResetEvent(hReady);

		system("PAUSE");*/

		/*__x_ABI_CWindows_CNetworking_CVpn_CIVpnNativeProfile_Release(pNativeProfile);

		__x_ABI_CWindows_CNetworking_CVpn_CIVpnProfile_Release(pProfile);

		ProfilesRetrieverHandler.lpVtbl->Invoke = InvokeCollect,
			__x_ABI_CWindows_CNetworking_CVpn_CIVpnManagementAgent_GetProfilesAsync(pVpnMan, &pProfiles),
			__FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CVpn__CIVpnProfile_put_Completed(pProfiles, &ProfilesRetrieverHandler),
			//__FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CVpn__CIVpnProfile_Release(pProfiles),
			//__FIVectorView_1_Windows__CNetworking__CVpn__CIVpnProfile_Release(pProfile),
			WaitForSingleObject(hReady, INFINITE),
			ResetEvent(hReady);*/

		__FIVectorView_1_Windows__CSecurity__CCredentials__CPasswordCredential* pPassCredView;

		//authenticate

		WindowsCreateStringReference(RuntimeClass_Windows_Security_Credentials_PasswordCredential,
			sizeof RuntimeClass_Windows_Security_Credentials_PasswordCredential / sizeof(WCHAR) - 1,
			&header, &string), RoActivateInstance(string, &pVpnObjInspect), WindowsDeleteString(string), //IInspectable_GetIids(pVpnObjInspect, &idCount, &pIdds),
			IInspectable_QueryInterface(pVpnObjInspect, &IID___x_ABI_CWindows_CSecurity_CCredentials_CIPasswordCredential, &pPassCred),
			IInspectable_Release(pVpnObjInspect);

			WindowsCreateStringReference(L"vpnCredentials",
				sizeof L"vpnCredentials" / sizeof(WCHAR) - 1,
				&header, &string),

			__x_ABI_CWindows_CSecurity_CCredentials_CIPasswordCredential_put_Resource(pPassCred, string),

			//wprintf(L"pass used - %s\n", serversPINs[pNextServerPointer - servers]);
		/*WindowsCreateStringReference(serversPINs[pNextServerPointer - servers],
			sizeof pass / sizeof(WCHAR) - 1,
			&header, &string),

			__x_ABI_CWindows_CSecurity_CCredentials_CIPasswordCredential_put_Password(pPassCred, string),*/

			WindowsCreateStringReference(user,
				sizeof user / sizeof(WCHAR) - 1,
				&header, &string),

			__x_ABI_CWindows_CSecurity_CCredentials_CIPasswordCredential_put_UserName(pPassCred, string),

			__x_ABI_CWindows_CSecurity_CCredentials_CIPasswordCredential_RetrievePassword(pPassCred),


			wprintf(L"connectingg\n");
		ProfilesRetrieverHandler.lpVtbl->Invoke = InvokeError,
			__x_ABI_CWindows_CNetworking_CVpn_CIVpnManagementAgent_ConnectProfileWithPasswordCredentialAsync(pVpnMan, pProfile, pPassCred, &pVpnManErr);
			//__x_ABI_CWindows_CNetworking_CVpn_CIVpnManagementAgent_ConnectProfileAsync(pVpnMan, pProfile, &pVpnManErr),
			__FIAsyncOperation_1_Windows__CNetworking__CVpn__CVpnManagementErrorStatus_put_Completed(pVpnManErr, &ProfilesRetrieverHandler);
		/*if (WaitForSingleObject(hReady, 180000) == WAIT_TIMEOUT)
		{
			__FIAsyncOperation_1_Windows__CNetworking__CVpn__CVpnManagementErrorStatus_put_Completed(pVpnManErr, stub);
			__FIAsyncOperation_1_Windows__CNetworking__CVpn__CVpnManagementErrorStatus_Release(pVpnManErr);* /
			SetEvent(hConnect);

			while (WaitForSingleObject(hConnect, 0) == WAIT_OBJECT_0) Sleep(10000);
			/*bCompleted = false;
			printf("taimed out\n");
		}*/
		WaitForSingleObject(hReady, INFINITE),
			ResetEvent(hReady);

		//if (pNextServer != *servers)
		__x_ABI_CWindows_CSecurity_CCredentials_CIPasswordCredential_Release(pPassCred);

		wprintf(L"connected\n");

		system("PAUSE");

		Sleep(-1);

		//__x_ABI_CWindows_CNetworking_CVpn_CIVpnNativeProfile_Release(pNativeProfile);

		__x_ABI_CWindows_CNetworking_CVpn_CIVpnProfile_Release(pProfile);

		if (bCompleted)
			SetEvent(hReadyExternal);
	}
	//else Sleep(10000);
	__x_ABI_CWindows_CUI_CXaml_CIApplication_Exit(pApp);
}

(wmain)(a, argc) int a; wchar_t** argc;
{
	WaitForSingleObject(CreateMutexA(NULL, false, "rmouserassingeinstance"), 0) == WAIT_OBJECT_0 ? 0 : exit(0); //check if it's a single instance of the app
	//probably unnecessary for UWP App but still

	//AddVectoredExceptionHandler(1, PvectoredExceptionHandler1);
	//initexcept(logpath);

	printf("%x\n%x\n", hReadyExternal = CreateEvent(NULL, true, true, "rmouserasready"), GetLastError());
	hDisconnect = CreateEvent(NULL, true, false, "rmouserasdisconnect");
	hConnect = CreateEvent(NULL, true, false, "rmouserasconnect");
	hReady = CreateEvent(0, true, false, 0);
	system("PAUSE");
	RoInitialize(RO_INIT_MULTITHREADED);

	//next lines are activation code - oh boy

	//stdcallmainras();

	ULONG idCount; IID* pIdds; HSTRING_HEADER header;
	__x_ABI_CWindows_CNetworking_CVpn_CIVpnManagementAgent* pVpnMan;
	__x_ABI_CWindows_CUI_CXaml_CIWindow* pWindow;
	ULONG strSize; WCHAR* pRawString; __x_ABI_CWindows_CNetworking_CVpn_CIVpnChannel* pChannel;
	__FIAsyncOperation_1_Windows__CNetworking__CVpn__CVpnManagementErrorStatus* pVpnManErr;
	enum __x_ABI_CWindows_CNetworking_CVpn_CVpnManagementErrorStatus disconnectstatus;
	__x_ABI_CWindows_CNetworking_CVpn_CIVpnNativeProfile2* pNativeProfile2;
	__FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CVpn__CIVpnProfile* pProfiles;
	__FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CVpn__CIVpnProfile ProfilesRetrieverHandler =
	{ (__FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CVpn__CIVpnProfileVtbl[1])
		{ {QueryInterface,AddRef,Release,InvokeError}
} }; IInspectable* pVpnObjInspect; HSTRING string;

	__x_ABI_CWindows_CUI_CXaml_CIApplicationStatics* pAppStats;
	WindowsCreateStringReference(RuntimeClass_Windows_UI_Xaml_Application,
		sizeof RuntimeClass_Windows_UI_Xaml_Application / sizeof(WCHAR) - 1,
		&header, &string), RoGetActivationFactory(string, &IID___x_ABI_CWindows_CUI_CXaml_CIApplicationStatics, &pAppStats), WindowsDeleteString(string),

		ProfilesRetrieverHandler.lpVtbl->Invoke = InvokeApp,
		wprintf(L"%p\n", pAppStats),
		system("PAUSE");

	printf("%x\n", __x_ABI_CWindows_CUI_CXaml_CIApplicationStatics_Start(pAppStats, &ProfilesRetrieverHandler));
	system("PAUSE");
	//stdcallmainras();
//__x_ABI_CWindows_croini 
	return 0;
	//rest is junk
		/*WindowsCreateStringReference(RuntimeClass_Windows_Networking_Vpn_VpnNativeProfile,
		sizeof RuntimeClass_Windows_Networking_Vpn_VpnNativeProfile/sizeof(WCHAR)-1,
		&header, &string), RoActivateInstance(string,&pVpnObjInspect),WindowsDeleteString(string),IInspectable_GetIids(pVpnObjInspect,&idCount,&pIdds),
		IInspectable_QueryInterface(pVpnObjInspect,	&IID___x_ABI_CWindows_CNetworking_CVpn_CIVpnProfile,&pProfile),
		IInspectable_Release(pVpnObjInspect),
		WindowsCreateStringReference(L"MyConnection",sizeof L"MyConnection"/sizeof(WCHAR)-1,&header, &string),
		__x_ABI_CWindows_CNetworking_CVpn_CIVpnProfile_put_ProfileName(pProfile,string),WindowsDeleteString(string),
		__x_ABI_CWindows_CNetworking_CVpn_CIVpnProfile_put_RememberCredentials(pProfile, true),
		__x_ABI_CWindows_CNetworking_CVpn_CIVpnProfile_put_AlwaysOn(pProfile, true),
		printf("%x\n",__x_ABI_CWindows_CNetworking_CVpn_CIVpnProfile_QueryInterface(pProfile,&IID___x_ABI_CWindows_CNetworking_CVpn_CIVpnNativeProfile,&pNativeProfile)),
		__x_ABI_CWindows_CNetworking_CVpn_CIVpnProfile_Release(pProfile),
		__x_ABI_CWindows_CNetworking_CVpn_CIVpnNativeProfile_get_Servers(pNativeProfile, &hServers),
		WindowsCreateStringReference(L"ustx1.pointtoserver.com",sizeof L"ustx1.pointtoserver.com"/sizeof(WCHAR)-1,&header, &string),
		__FIVector_1_HSTRING_Append(hServers,string),WindowsDeleteString(string),
		printf("%x\n",__
//		system("PAUSE"),_ABI_CWindows_CNetworking_CVpn_CIVpnProfile_QueryInterface(pNativeProfile,&IID___x_ABI_CWindows_CNetworking_CVpn_CIVpnNativeProfile2,&pNativeProfile2)),
		croini _CWindows_CNetworking_CVpn_CIVpnNativeProfile_Release(pNativeProfile),
		__x_ABI_CWindows_CNetworking_CVpn_CIVpnNativeProfile2_put_RequireVpnClientAppUI(pNativeProfile2, true),
		printf("%x\n",__x_ABI_CWindows_CNetworking_CVpn_CIVpnNativeProfile2_QueryInterface(pNativeProfile2,&IID___x_ABI_CWindows_CNetworking_CVpn_CIVpnProfile,&pProfile)),
		__x_ABI_CWindows_CNetworking_CVpn_CIVpnNativeProfile2_Release(pNativeProfile2),
		//__x_ABI_CWindows_CNetworking_CVpn_CIVpnManagementAgent_AddProfileFromXmlAsync(pVpnMan, string, &pVpnManErr),

		WindowsCreateStringReference(pVPNXmlCode,sizeof pVPNXmlCode/
		sizeof(WCHAR)-1,&header, &string),__x_ABI_CWindows_CNetworking_CVpn_CIVpnManagementAgent_UpdateProfileFromObjectAsync(pVpnMan,pProfile,&pVpnManErr),
		WindowsDeleteString(string),__FIAsyncOperation_1_Windows__CNetworking__CVpn__CVpnManagementErrorStatus_put_Completed(pVpnManErr,&ProfilesRetrieverHandler),
		__FIAsyncOperation_1_Windows__CNetworking__CVpn__CVpnManagementErrorStatus_Release(pVpnManErr),
		WaitForSingleObject(hReady, INFINITE),
		//WaitForSingleObject(hReady, INFINITE),
		ProfilesRetrieverHandler.lpVtbl->Invoke = InvokeCollect,
		ResetEvent(hReady),*/
		//printf("%x\n",__x_ABI_CWindows_CNetworking_CVpn_CIVpnChannel_Stop(pChannel));
		//__x_ABI_CWindows_CNetworking_CVpn_CIVpnProfile_get_ProfileName(pProfie,&string),
		//pRawString=WindowsGetStringRawBuffer(string, &strSize),

	system("PAUSE");

	ProfilesRetrieverHandler.lpVtbl->Invoke = InvokeCollect,
		__x_ABI_CWindows_CNetworking_CVpn_CIVpnManagementAgent_GetProfilesAsync(pVpnMan, &pProfiles),
		__FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CVpn__CIVpnProfile_put_Completed(pProfiles, &ProfilesRetrieverHandler),
		//__FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CVpn__CIVpnProfile_Release(pProfiles),
		//__FIVectorView_1_Windows__CNetworking__CVpn__CIVpnProfile_Release(pProfile),
		WaitForSingleObject(hReady, INFINITE),
		ResetEvent(hReady);

	HANDLE hEvent[2] = { 0, };

	system("PAUSE");

	printf("%x\n", __x_ABI_CWindows_CNetworking_CVpn_CIVpnProfile_QueryInterface(pProfile, &IID___x_ABI_CWindows_CNetworking_CVpn_CIVpnNativeProfile, &pNativeProfile)),

		__x_ABI_CWindows_CNetworking_CVpn_CIVpnProfile_GetIids(pVpnObjInspect, &idCount, &pIdds),
		__x_ABI_CWindows_CNetworking_CVpn_CIVpnNativeProfile_get_Servers(pNativeProfile, &hServers);

	system("PAUSE");

	//system("PAUSE");

	ProfilesRetrieverHandler.lpVtbl->Invoke = InvokeError,
		__x_ABI_CWindows_CNetworking_CVpn_CIVpnManagementAgent_DisconnectProfileAsync(pVpnMan, pProfile, &pVpnManErr),
		__FIAsyncOperation_1_Windows__CNetworking__CVpn__CVpnManagementErrorStatus_put_Completed(pVpnManErr, &ProfilesRetrieverHandler),
		//__FIAsyncOperation_1_Windows__CNetworking__CVpn__CVpnManagementErrorStatus_Release(pVpnManErr),
		__FIVectorView_1_Windows__CNetworking__CVpn__CIVpnProfile_Release(pProfile),
		WaitForSingleObject(hReady, INFINITE),
		ResetEvent(hReady);

	system("PAUSE");
	//printf("%p\n",pProfie),
	//wprintf(L"%s.*\n", string,strSize);
	/*ProfilesRetrieverHandler.lpVtbl->Invoke = InvokeError,
	__x_ABI_CWindows_CNetworking_CVpn_CIVpnManagementAgent_ConnectProfileAsync(pVpnMan,ProfilesRetrieverHandler.pProfile,&pVpnManErr),
	__FIAsyncOperation_1_Windows__CNetworking__CVpn__CVpnManagementErrorStatus_put_Completed(pVpnManErr,&ProfilesRetrieverHandler),
	__FIAsyncOperation_1_Windows__CNetworking__CVpn__CVpnManagementErrorStatus_Release(pVpnManErr),
	WaitForSingleObject(hReady, INFINITE);*/
	/*__x_ABI_CWindows_CNetworking_CVpn_CIVpnManagementAgent_DisconnectProfileAsync(pVpnMan,pProfie,&pVpnManErr),
	__FIAsyncOperation_1_Windows__CNetworking__CVpn__CVpnManagementErrorStatus_put_Completed(pVpnManErr,&ProfilesRetrieverHandler);
	WaitForSingleObject(hReady, INFINITE);*/
	//Sleep(INFINITE);
	/*do
	Sleep(1000),
	__FIAsyncOperation_1_Windows__CNetworking__CVpn__CVpnManagementErrorStatus_GetResults(pVpnManErr,&disconnectstatus),
	printf("%d\n", disconnectstatus);
	//Sleep(INFINITE);
	while(1);*/
}
#endif