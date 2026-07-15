func twoSum(nums []int, target int) []int {
    mp := make(map[int]int)
    ans := make([]int,0)
    for index , value := range nums {
        val := target - value
        if in2 , exists := mp[val]; exists{
            ans = append(ans,in2)
            ans = append(ans,index)
            return ans
        }
        mp[value] = index
    }
    return ans ;
}
