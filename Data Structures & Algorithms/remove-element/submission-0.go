func removeElement(nums []int, val int) int {
    var write int = 0 
    for read := 0; read < len(nums); read += 1 {
        if nums[read] != val {
            nums[write] = nums[read]
            write += 1
        }
    }
    return write
}
