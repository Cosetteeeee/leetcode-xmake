add_rules("mode.debug")
-- add_rules("mode.debug", "mode.release")

add_rules("plugin.compile_commands.autoupdate", {outputdir = ".vscode"})
add_requires("doctest")

set_languages("c99", "cxx23")

toolchain("myclang")
    set_kind("standalone")
    set_sdkdir("$(projectdir)/.devenv/profile")
    set_bindir("$(projectdir)/.devenv/profile/bin")
    add_includedirs("$(projectdir)/.devenv/profile/include/c++/v1")
    add_includedirs("$(projectdir)/.devenv/profile/include")
    add_linkdirs("$(projectdir)/.devenv/profile/lib")
    add_cxflags("-stdlib=libc++", "-Wno-macro-redefined")
    add_ldflags("-stdlib=libc++")
    set_toolset("cc", "clang")
    set_toolset("cxx", "clang", "clang++")
    set_toolset("ld", "clang++", "clang")
    set_toolset("sh", "clang++", "clang")
    set_toolset("ar", "ar")
    set_toolset("ex", "ar")
    set_toolset("strip", "strip")
    set_toolset("mm", "clang")
    set_toolset("mxx", "clang", "clang++")
    set_toolset("as", "clang")
toolchain_end()

set_toolchains("myclang")

includes("problems.xmake.lua")

