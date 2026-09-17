workspace "KrazyCatEngine"
    architecture "x64"
    startproject "Sandbox"

    configurations
    {
        "Debug",
        "Release",
        "Dist"
    }

    outputdir = "%{cfg.buildcfg}-%{cfg.system}-%{cfg.architecture}"

project "KrazyCatEngine"
    location "KrazyCatEngine"
    kind "SharedLib"
    language "C++"

    targetdir("bin/" .. outputdir .. "/%{prj.name}")
    objdir("bin-int/" .. outputdir .. "/%{prj.name}")

    files
    {
        "%{prj.name}/src/**.h",
        "%{prj.name}/src/**.cpp"
    }

    includedirs
    {
        "KrazyCatEngine/vendor/spdlog/include"
    }

    filter "system:windows"
        cppdialect "C++20"
        staticruntime "On"
        systemversion "latest"
        buildoptions { "/utf-8" }

    defines
    {
        "KCE_PLATFORM_WINDOWS",
        "KCE_BUILD_DLL"
    }

    postbuildcommands
    {
        "{COPY} %{cfg.buildtarget.relpath} ../bin/" .. outputdir .. "/Sandbox"
    }

    filter "configurations:Debug"
        defines "KCE_DEBUG"
        symbols "On"

    filter "configurations:Release"
        defines "KCE_RELEASE"
        optimize "On"

    filter "configurations:Dist"
        defines "KCE_DIST"
        optimize "On"

project "Sandbox"
    location "Sandbox"
    kind "ConsoleApp"
    language "C++"

    targetdir("bin/" .. outputdir .. "/%{prj.name}")
    objdir("bin-int/" .. outputdir .. "/%{prj.name}")

    files
    {
        "%{prj.name}/src/**.h",
        "%{prj.name}/src/**.cpp"
    }

    includedirs
    {
        "KrazyCatEngine/vendor/spdlog/include",
        "KrazyCatEngine/src",
    }

    links
    {
        "KrazyCatEngine"
    }

    filter "system:windows"
        cppdialect "C++20"
        staticruntime "On"
        systemversion "latest"
        buildoptions { "/utf-8" }

    defines
    {
        "KCE_PLATFORM_WINDOWS"
    }

    filter "configurations:Debug"
        defines "KCE_DEBUG"
        symbols "On"

    filter "configurations:Release"
        defines "KCE_RELEASE"
        optimize "On"

    filter "configurations:Dist"
        defines "KCE_DIST"
        optimize "On"
