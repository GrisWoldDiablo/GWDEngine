workspace "GWD"
	architecture "x86_64"
	startproject "GWD"

	configurations
	{
		"Debug",
		"Release"
	}
	
	flags
	{
		"MultiProcessorCompile"
	}

outputdir = "%{cfg.buildcfg}-%{cfg.system}-%{cfg.architecture}"

-- Include directories relative to root folder (solution directory)
IncludeDir = {}
IncludeDir["GLFW"] = "GWD/SDK/GLFW/include"
IncludeDir["Glad"] = "GWD/SDK/Glad/include"
IncludeDir["ImGui"] = "GWD/SDK/imgui"
IncludeDir["glm"] = "GWD/SDK/glm"
IncludeDir["stb_image"] = "GWD/SDK/stb_image"

group "Dependencies"
	include "GWD/SDK/GLFW"
	include "GWD/SDK/Glad"
	include "GWD/SDK/imgui"
group ""

project "GWD"
	location "GWD"
	kind "StaticLib"
	language "C++"
	cppdialect "C++17"
	staticruntime "on"

	targetdir ("bin/" .. outputdir .. "/%{prj.name}")
	objdir ("bin-int/" .. outputdir .. "/%{prj.name}")

	pchheader "gwdpch.h"
	pchsource "GWD/src/gwdpch.cpp"

	files
	{
		"%{prj.name}/src/**.h",
		"%{prj.name}/src/**.cpp",
		"%{prj.name}/vendor/stb_image/**.h",
		"%{prj.name}/vendor/stb_image/**.cpp",
		"%{prj.name}/SDK/glm/glm/**.hpp",
		"%{prj.name}/SDK/glm/glm/**.inl",
	}

	defines
	{
	}

	includedirs
	{
		"%{prj.name}/src",
		"%{prj.name}/SDK/spdlog/include",
		"%{IncludeDir.GLFW}",
		"%{IncludeDir.Glad}",
		"%{IncludeDir.ImGui}",
		"%{IncludeDir.glm}",
		"%{IncludeDir.stb_image}"
	}

	links 
	{ 
		"GLFW",
		"Glad",
		"ImGui",
		"opengl32.lib"
	}

	filter "system:windows"
		systemversion "latest"

		defines
		{
		}

	filter "configurations:Debug"
		defines "GWD_DEBUG"
		runtime "Debug"
		symbols "on"

	filter "configurations:Release"
		defines "GWD_RELEASE"
		runtime "Release"
		optimize "on"
		
project "Void"
	location "Void"
	kind "ConsoleApp"
	language "C++"
	cppdialect "C++17"
	staticruntime "on"

	targetdir ("bin/" .. outputdir .. "/%{prj.name}")
	objdir ("bin-int/" .. outputdir .. "/%{prj.name}")

	files
	{
		"%{prj.name}/src/**.h",
		"%{prj.name}/src/**.cpp"
	}

	includedirs
	{
		"GWD/SDK/spdlog/include",
		"GWD/src",
		"GWD/SDK",
		"%{IncludeDir.glm}"
	}

	links
	{
		"GWD"
	}

	filter "system:windows"
		systemversion "latest"
		
	filter "configurations:Debug"
		defines "GWD_DEBUG"
		runtime "Debug"
		symbols "on"

	filter "configurations:Release"
		defines "GWD_RELEASE"
		runtime "Release"
		optimize "on"
		