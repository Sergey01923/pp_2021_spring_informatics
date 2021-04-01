// Copyright 2021 Novozhilova Ekaterina
#include <gtest/gtest.h>
#include "./labeling.h"

TEST(Sequential, Test_10x10) {
    std::vector<std::vector<int>> arr = {{1, 0, 0, 0, 0, 0, 0, 0, 0, 0},
                                        {1, 0, 1, 1, 0, 0, 0, 0, 1, 0},
                                        {1, 0, 0, 1, 0, 1, 1, 0, 0, 0},
                                        {0, 0, 0, 0, 0, 1, 1, 0, 0, 0},
                                        {0, 0, 0, 0, 0, 0, 1, 0, 0, 0},
                                        {0, 0, 0, 1, 0, 1, 0, 0, 0, 0},
                                        {0, 0, 1, 1, 1, 1, 1, 0, 0, 0},
                                        {0, 0, 0, 1, 1, 1, 0, 0, 1, 1},
                                        {1, 0, 0, 0, 1, 0, 0, 0, 1, 1},
                                        {0, 0, 0, 0, 0, 0, 0, 0, 1, 1}};
    std::vector<std::vector<int>> expected = {{1, 0, 0, 0, 0, 0, 0, 0, 0, 0},
                                             {1, 0, 2, 2, 0, 0, 0, 0, 3, 0},
                                             {1, 0, 0, 2, 0, 4, 4, 0, 0, 0},
                                             {0, 0, 0, 0, 0, 4, 4, 0, 0, 0},
                                             {0, 0, 0, 0, 0, 0, 4, 0, 0, 0},
                                             {0, 0, 0, 5, 0, 5, 0, 0, 0, 0},
                                             {0, 0, 5, 5, 5, 5, 5, 0, 0, 0},
                                             {0, 0, 0, 5, 5, 5, 0, 0, 6, 6},
                                             {7, 0, 0, 0, 5, 0, 0, 0, 6, 6},
                                             {0, 0, 0, 0, 0, 0, 0, 0, 6, 6}};
    std::vector<std::vector<int>> res;
    res = Labeling(arr, 10, 10);
    ASSERT_EQ(expected, res);
}
TEST(Sequential, Test_15x15) {
    std::vector<std::vector<int>> arr = {{1, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1},
                                     {0, 0, 1, 0, 0, 0, 1, 1, 1, 1, 1, 0, 0, 0, 1},
                                     {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0},
                                     {0, 0, 1, 0, 0, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0},
                                     {0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
                                     {0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
                                     {0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
                                     {0, 0, 0, 1, 0, 1, 0, 1, 1, 0, 0, 0, 0, 0, 0},
                                     {0, 0, 0, 1, 1, 1, 0, 1, 1, 0, 0, 0, 0, 0, 0},
                                     {1, 0, 1, 1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0},
                                     {1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0},
                                     {1, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0},
                                     {1, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0},
                                     {1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
                                     {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}};
    std::vector<std::vector<int>> expected = {{1, 0, 2, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 3},
                                              {0, 0, 2, 0, 0, 0, 4, 4, 4, 4, 4, 0, 0, 0, 3},
                                              {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0},
                                              {0, 0, 5, 0, 0, 4, 4, 4, 4, 4, 4, 0, 0, 0, 0},
                                              {0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
                                              {0, 0, 5, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
                                              {0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
                                              {0, 0, 0, 5, 0, 5, 0, 6, 6, 0, 0, 0, 0, 0, 0},
                                              {0, 0, 0, 5, 5, 5, 0, 6, 6, 0, 0, 0, 0, 0, 0},
                                              {7, 0, 5, 5, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0},
                                              {7, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0},
                                              {7, 0, 0, 0, 0, 5, 5, 5, 5, 5, 5, 0, 0, 0, 0},
                                              {7, 0, 0, 0, 0, 0, 5, 5, 0, 0, 0, 0, 0, 0, 0},
                                              {7, 7, 7, 7, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
                                              {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}};
    std::vector<std::vector<int>> res;
    res = Labeling(arr, 15, 15);
    ASSERT_EQ(expected, res);
}
TEST(Sequential, Test_5x5) {
    std::vector<std::vector<int>> arr = {{0, 0, 1, 1, 1},
                                        {0, 0, 0, 0, 1},
                                        {1, 1, 0, 0, 0},
                                        {0, 0, 0, 0, 0},
                                        {0, 0, 1, 0, 0}};
    std::vector<std::vector<int>> expected = {{0, 0, 1, 1, 1},
                                             {0, 0, 0, 0, 1},
                                             {2, 2, 0, 0, 0},
                                             {0, 0, 0, 0, 0},
                                             {0, 0, 3, 0, 0}};
    std::vector<std::vector<int>> res;
    res = Labeling(arr, 5, 5);
    ASSERT_EQ(expected, res);
}
TEST(Sequential, Test_Empty) {
    std::vector<std::vector<int>> arr = {{0, 0, 0, 0, 0},
                                        {0, 0, 0, 0, 0},
                                        {0, 0, 0, 0, 0},
                                        {0, 0, 0, 0, 0},
                                        {0, 0, 0, 0, 0}};
    std::vector<std::vector<int>> expected = {{0, 0, 0, 0, 0},
                                             {0, 0, 0, 0, 0},
                                             {0, 0, 0, 0, 0},
                                             {0, 0, 0, 0, 0},
                                             {0, 0, 0, 0, 0}};
    std::vector<std::vector<int>> res;
    res = Labeling(arr, 5, 5);
    ASSERT_EQ(expected, res);
}
TEST(Sequential, Test_Full) {
    std::vector<std::vector<int>> arr = {{1, 1, 1, 1, 1},
                                        {1, 1, 1, 1, 1},
                                        {1, 1, 1, 1, 1},
                                        {1, 1, 1, 1, 1},
                                        {1, 1, 1, 1, 1}};
    std::vector<std::vector<int>> expected = {{1, 1, 1, 1, 1},
                                             {1, 1, 1, 1, 1},
                                             {1, 1, 1, 1, 1},
                                             {1, 1, 1, 1, 1},
                                             {1, 1, 1, 1, 1}};
    std::vector<std::vector<int>> res;
    res = Labeling(arr, 5, 5);
    ASSERT_EQ(expected, res);
}