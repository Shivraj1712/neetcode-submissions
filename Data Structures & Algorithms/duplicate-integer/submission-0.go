func hasDuplicate(nums []int) bool {
    sort.Ints(nums)
    for i := 1; i < len(nums); i += 1 {
        if nums[i] == nums[i-1] {
            return true
        }
    }
    return false
}
