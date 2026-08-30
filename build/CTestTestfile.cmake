# CMake generated Testfile for 
# Source directory: C:/Users/Phant/Documents/Codex/2026-08-13/referenced-chatgpt-conversation-this-is-an/work/repository-upgrades/cs-405-secure-coding
# Build directory: C:/Users/Phant/Documents/Codex/2026-08-13/referenced-chatgpt-conversation-this-is-an/work/repository-upgrades/cs-405-secure-coding/build
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
if(CTEST_CONFIGURATION_TYPE MATCHES "^([Dd][Ee][Bb][Uu][Gg])$")
  add_test("security_lab_tests" "C:/Users/Phant/Documents/Codex/2026-08-13/referenced-chatgpt-conversation-this-is-an/work/repository-upgrades/cs-405-secure-coding/build/Debug/security_lab_tests.exe")
  set_tests_properties("security_lab_tests" PROPERTIES  _BACKTRACE_TRIPLES "C:/Users/Phant/Documents/Codex/2026-08-13/referenced-chatgpt-conversation-this-is-an/work/repository-upgrades/cs-405-secure-coding/CMakeLists.txt;21;add_test;C:/Users/Phant/Documents/Codex/2026-08-13/referenced-chatgpt-conversation-this-is-an/work/repository-upgrades/cs-405-secure-coding/CMakeLists.txt;0;")
elseif(CTEST_CONFIGURATION_TYPE MATCHES "^([Rr][Ee][Ll][Ee][Aa][Ss][Ee])$")
  add_test("security_lab_tests" "C:/Users/Phant/Documents/Codex/2026-08-13/referenced-chatgpt-conversation-this-is-an/work/repository-upgrades/cs-405-secure-coding/build/Release/security_lab_tests.exe")
  set_tests_properties("security_lab_tests" PROPERTIES  _BACKTRACE_TRIPLES "C:/Users/Phant/Documents/Codex/2026-08-13/referenced-chatgpt-conversation-this-is-an/work/repository-upgrades/cs-405-secure-coding/CMakeLists.txt;21;add_test;C:/Users/Phant/Documents/Codex/2026-08-13/referenced-chatgpt-conversation-this-is-an/work/repository-upgrades/cs-405-secure-coding/CMakeLists.txt;0;")
elseif(CTEST_CONFIGURATION_TYPE MATCHES "^([Mm][Ii][Nn][Ss][Ii][Zz][Ee][Rr][Ee][Ll])$")
  add_test("security_lab_tests" "C:/Users/Phant/Documents/Codex/2026-08-13/referenced-chatgpt-conversation-this-is-an/work/repository-upgrades/cs-405-secure-coding/build/MinSizeRel/security_lab_tests.exe")
  set_tests_properties("security_lab_tests" PROPERTIES  _BACKTRACE_TRIPLES "C:/Users/Phant/Documents/Codex/2026-08-13/referenced-chatgpt-conversation-this-is-an/work/repository-upgrades/cs-405-secure-coding/CMakeLists.txt;21;add_test;C:/Users/Phant/Documents/Codex/2026-08-13/referenced-chatgpt-conversation-this-is-an/work/repository-upgrades/cs-405-secure-coding/CMakeLists.txt;0;")
elseif(CTEST_CONFIGURATION_TYPE MATCHES "^([Rr][Ee][Ll][Ww][Ii][Tt][Hh][Dd][Ee][Bb][Ii][Nn][Ff][Oo])$")
  add_test("security_lab_tests" "C:/Users/Phant/Documents/Codex/2026-08-13/referenced-chatgpt-conversation-this-is-an/work/repository-upgrades/cs-405-secure-coding/build/RelWithDebInfo/security_lab_tests.exe")
  set_tests_properties("security_lab_tests" PROPERTIES  _BACKTRACE_TRIPLES "C:/Users/Phant/Documents/Codex/2026-08-13/referenced-chatgpt-conversation-this-is-an/work/repository-upgrades/cs-405-secure-coding/CMakeLists.txt;21;add_test;C:/Users/Phant/Documents/Codex/2026-08-13/referenced-chatgpt-conversation-this-is-an/work/repository-upgrades/cs-405-secure-coding/CMakeLists.txt;0;")
else()
  add_test("security_lab_tests" NOT_AVAILABLE)
endif()
