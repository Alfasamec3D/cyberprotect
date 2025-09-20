add_test([=[TestMachine.RunTest]=]  /mnt/9C468886468862BE/media/programs/cyberprotect/build/test_run [==[--gtest_filter=TestMachine.RunTest]==] --gtest_also_run_disabled_tests)
set_tests_properties([=[TestMachine.RunTest]=]  PROPERTIES WORKING_DIRECTORY /mnt/9C468886468862BE/media/programs/cyberprotect/build SKIP_REGULAR_EXPRESSION [==[\[  SKIPPED \]]==])
set(  test_run_TESTS TestMachine.RunTest)
