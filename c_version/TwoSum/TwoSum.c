/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    int *numsReturn;

    *returnSize = 2;
    numsReturn = malloc((*returnSize) * sizeof(int));
    if (!numsReturn)
        return (NULL);
    for (int i = 0; i < numsSize - 1; i++)
    {
        for (int j = i + 1; j < numsSize; j++)
        {
            if (nums[i] + nums[j] == target)
            {
                numsReturn[0] = i;
                numsReturn[1] = j;
                return (numsReturn);
            }
        }
    }
    return (NULL);
}