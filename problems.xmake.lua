-- 自动扫描所有编号的主文件，生成对应的target
for _, mainfile in ipairs(os.files("src/*.*.cpp")) do
    local filename = path.basename(mainfile)
    local number = filename:match("^(%d+)%.")

    if number then
        target(number)
            set_kind("shared")
            add_files("src/" .. number .. ".*.cpp")

            -- 为每个编号自动添加对应的测试
            for _, testfile in ipairs(os.files("src/" .. number .. "-test.*.cpp")) do
                local basename = path.basename(testfile)
                local testname = testfile:match("/" .. number .. "%-test%.(.-)%.cpp$") or
                                basename:match("^" .. number .. "%-test%.(.+)$") or basename
                add_tests(testname, {
                    kind = "binary",
                    files = testfile,
                    packages = "doctest"})
            end
    end
end