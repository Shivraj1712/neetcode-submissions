func getConcatenation(nums []int) []int {
    var ans []int = make([]int,2 *len(nums))
    for i := 0 ; i < len(nums); i += 1 {
        ans[i] = nums[i]
        ans[i + len(nums)] = nums[i]
    }
    return ans
}
