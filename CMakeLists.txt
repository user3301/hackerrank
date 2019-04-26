cmake_minimum_required(VERSION 3.14)
project(oj)

set(CMAKE_CXX_STANDARD 17)
add_subdirectory(lib/googletest-release-1.8.1)
include_directories(lib/googletest-release-1.8.1/googletest/include)
include_directories(lib/googletest-release-1.8.1/googlemock/include)

set(SOURCE_FILES main.cpp)
add_executable(oj main.cpp questions/TwoAdd.cpp tests/AddTest.cpp common/TreeNode.h questions/SimpleArraySum.cpp tests/SimpleArraySumTest.cpp questions/CompareTheTriplets.cpp tests/CompareTheTripletsTest.cpp questions/DiagonalDifference.cpp tests/DiagonalDifferenceTest.cpp questions/PlusMinus.cpp questions/Staircase.cpp tests/StaircaseTest.cpp questions/MinMaxSum.cpp tests/MinMaxSumTest.cpp questions/BirthdayCakeCandles.cpp tests/BirthdayCakeCandlesTest.cpp questions/TimeConversion.cpp tests/TimeConversionTest.cpp questions/GradingStudents.cpp tests/GradingStudentsTest.cpp questions/AppleAndOrange.cpp tests/AppleAndOrangeTest.cpp questions/Kangaroo.cpp tests/KangarooTest.cpp questions/BetweenTwoSets.cpp tests/BetweenTwoSetsTest.cpp questions/BreakingTheRecords.cpp tests/BreakingTheRecordsTest.cpp questions/BirthdayChocolate.cpp tests/BirthdayChocolateTest.cpp questions/DivisibleSumPairs.cpp tests/DivisibleSumPairsTest.cpp questions/MigratoryBirds.cpp tests/MigratoryBirdsTest.cpp)
target_link_libraries(oj gtest gtest_main)