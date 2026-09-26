add_rules("mode.debug", "mode.release")

-- 这一行是关键！告诉 xmake 去哪里找 LeviLamina 的扩展包
add_repositories("levilamina https://github.com/LiteLDev/xmake-repo.git")
add_requires("levilamina")

target("MyPvpMod")
    add_rules("levilamina.mod")
    add_files("mod.cpp")
    add_packages("levilamina")
