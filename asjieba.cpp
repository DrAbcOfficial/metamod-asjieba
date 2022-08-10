#include <extdll.h>

#include <dllapi.h>
#include <meta_api.h>

#include <cl_entity.h>
#include <entity_state.h>

#include "enginedef.h"
#include "serverdef.h"


bool SC_SERVER_DECL CASEngineFuncs__base64_encode(void* pthis SC_SERVER_DUMMYARG_NOCOMMA, CString* hash, CString* out)
{

	return true;
}

void RegisterAngelScriptMethods()
{
	ASEXT_RegisterDirInitCallback([](CASDirectoryList* pASDir) {

		ASEXT_CreateDirectory(pASDir, "maps", ASFlag_Plugin, ASFileAccessControl_Read, true, 0);
		ASEXT_CreateDirectory(pASDir, "maps/soundcache", ASFlag_Plugin, ASFileAccessControl_Read | ASFileAccessControl_Write, true, 0);

		ASEXT_CreateDirectory(pASDir, "models", ASFlag_Plugin, ASFileAccessControl_Read, true, 0);
		ASEXT_CreateDirectory(pASDir, "models/player", ASFlag_Plugin, ASFileAccessControl_Read, true, 0);

		ASEXT_CreateDirectory(pASDir, "sound", ASFlag_Plugin, ASFileAccessControl_Read, true, 0);
		ASEXT_CreateDirectory(pASDir, "sprites", ASFlag_Plugin, ASFileAccessControl_Read, true, 0);

		});
	ASEXT_RegisterDocInitCallback([](CASDocumentation* pASDoc) {

		//ASEXT_RegisterObjectMethod(pASDoc,
		//	"Calculate base64 for input string (binary)", "CEngineFuncs", "bool base64_encode(const string& in hash, string& out outstr)",
		//	(void *)CASEngineFuncs__base64_encode, 3);

		});
}