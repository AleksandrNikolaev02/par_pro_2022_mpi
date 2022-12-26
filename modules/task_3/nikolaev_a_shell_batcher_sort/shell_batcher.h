// Copyright 2022 Nikolaev Alexander
#ifndef MODULES_TASK_3_NIKOLAEV_A_SHELL_BATCHER_SORT_SHELL_BATCHER_H_
#define MODULES_TASK_3_NIKOLAEV_A_SHELL_BATCHER_SORT_SHELL_BATCHER_H_

#include <vector>
#include <string>

std::vector<int> getRandomArray(int ArraySize);
std::vector<int> GetShellSortSequential(std::vector<int> array);
void compexch(int &first, int &second);
void OddEvenMergeBatcher(std::vector<int>& array, int hi, int lo, int r);
std::vector<int> MergeArray(std::vector<int>& array1, std::vector<int>& array2);
std::vector<int> GetShellSortParallel(std::vector<int>& array, int ArraySize);

#endif  // MODULES_TASK_3_NIKOLAEV_A_SHELL_BATCHER_SORT_SHELL_BATCHER_H_

