#pragma once
/* TODO:
* 1. Monitor memory usage
* 2. Monitor stack dumps
* 3. 
*/
namespace MonitorHooks
{
	using VM = RE::BSScript::Internal::VirtualMachine;
	using StackID = RE::VMStackID;
	
	static std::map<RE::BSScript::IFunction*, int> functionCount;

	// TODO: Get VTABLE into CLIB-NG
	/* struct StackDumpHook
	{		
		static std::int64_t thunk(RE::BSScript::IVMDebugInterface* self)
		{
			logger::info("Stack dump detected!");
			RE::DebugMessageBox("Stack dump detected! Check papyrus logs");
			return func(self);
		}
		

		static inline REL::Relocation<decltype(thunk)> func;

		static inline int idx = 1;

		
		// Install our hook at the specified vfunc `DumpRunningStacksToLog`
		static inline void Install()
		{
			stl::write_vfunc<VM, 0x3, StackDumpHook>();

			logger::info("Stack Dump Virtual Function hooked");
		}
	}; */

	static inline void InstallHooks()
	{
		//StackDumpHook::Install();
	}
}
