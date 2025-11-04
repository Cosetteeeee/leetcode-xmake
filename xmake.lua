add_rules("mode.debug")
-- add_rules("mode.debug", "mode.release")

add_rules("plugin.compile_commands.autoupdate", {outputdir = ".vscode"})
add_requires("doctest")

set_languages("c99", "cxx23")

set_toolchains("clang")
add_includedirs("C:/msys64/ucrt64/include/c++/v1")
add_cxxflags("--target=x86_64-w64-mingw32", "-stdlib=libc++", "-Wno-macro-redefined")
add_shflags("--target=x86_64-w64-mingw32", "-stdlib=libc++")
add_ldflags("--target=x86_64-w64-mingw32", "-stdlib=libc++", {force = true})

includes("problems.xmake.lua")

