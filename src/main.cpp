#include "po3_functions.h"

const SKSE::TaskInterface	* g_task = nullptr;
RE::BGSKeyword* keyword = nullptr;
RE::BGSArtObject* art = nullptr;

//----------------------------------------------------------------------------------------

void OnInit(SKSE::MessagingInterface::Message* a_msg)
{
	if (a_msg->type == SKSEMessagingInterface::kMessage_DataLoaded)
	{
		keyword = skyrim_cast<RE::BGSKeyword*>(RE::TESForm::LookupByID(KeywordActorTypeNPCID));
		art = skyrim_cast<RE::BGSArtObject*>(RE::TESForm::LookupByID(ArtSoulTrapTargetEffectsID));
	}
}

//----------------------------------------------------------------------------------------

extern "C" {
	bool SKSEPlugin_Query(const SKSE::QueryInterface* a_skse, SKSE::PluginInfo* a_info)
	{
		SKSE::Logger::OpenRelative(FOLDERID_Documents, L"\\My Games\\Skyrim Special Edition\\SKSE\\po3_papyrusextender64.log");
		SKSE::Logger::SetPrintLevel(SKSE::Logger::Level::kDebugMessage);
		SKSE::Logger::SetFlushLevel(SKSE::Logger::Level::kDebugMessage);
		SKSE::Logger::UseLogStamp(true);

		_MESSAGE("Loading po3_PapyrusExtender");

		a_info->infoVersion = SKSE::PluginInfo::kVersion;
		a_info->name = "powerofthree's PapyrusExtender for SSE - 1.5.80/73";
		a_info->version = 2;

		if (a_skse->IsEditor())
		{
			_FATALERROR("Loaded in editor, marking as incompatible!\n");
			return false;
		}

		switch (a_skse->RuntimeVersion())
		{
			case RUNTIME_VERSION_1_5_73:
			case RUNTIME_VERSION_1_5_80:
				break;
			default:
			{
				_FATALERROR("Unsupported runtime version %08X!\n", a_skse->RuntimeVersion());
				return false;
			}
		}

		return true;
	}

	bool SKSEPlugin_Load(const SKSE::LoadInterface* a_skse)
	{
		_MESSAGE("po3_PapyrusExtender SSE 1.5.80/73 loaded");

		if (!SKSE::Init(a_skse))
		{
			return false;
		}

		const auto papyrus = SKSE::GetPapyrusInterface();
		if (!papyrus->Register(PO3_SKSEFunctions::Register)) 
		{
			_FATALERROR("Failed to register papyrus callback!\n");
			return false;
		}

		g_task = SKSE::GetTaskInterface();
		if (!g_task)
		{
			_FATALERROR("Task interface registration failed!\n");
			return false;
		}

		const auto messaging = SKSE::GetMessagingInterface();
		if (!messaging->RegisterListener("SKSE", OnInit))
		{
			_FATALERROR("Messaging interface registration failed!\n");
			return false;
		}

		return true;
	}
};