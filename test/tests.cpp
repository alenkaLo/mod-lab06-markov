// Copyright 2024 alenkaLo
#include <gtest/gtest.h>
#include "../include/textgen.h"
TEST(TestCaseName, TestName2) {
    std::string path = "InputText.txt";
    std::map<prefix, std::vector<std::string>> statetab;
    statetab = ReadFile(2, path);
    prefix pref;
    pref = statetab.begin()->first;
    int result = pref.size();
    EXPECT_EQ(result, 2);
}
