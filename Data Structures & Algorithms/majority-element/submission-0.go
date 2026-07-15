func majorityElement(nums []int) int {
    var freq int = 0
    var ans int 
    for _ , n := range nums {
        if freq == 0 {
            ans = n 
        }
        if n == ans {
            freq += 1
        }else {
            freq -= 1
        }
    }
    return ans
}
