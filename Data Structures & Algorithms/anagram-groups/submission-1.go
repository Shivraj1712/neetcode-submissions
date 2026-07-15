func groupAnagrams(strs []string) [][]string {
    freq := make(map[string][]string)
    for _ , val := range strs {
        chars := strings.Split(val,"") 
        sort.Strings(chars)
        k := strings.Join(chars,"")
        freq[k] = append(freq[k],val)
    }
    var ans [][] string
    for _ , val := range freq{
        ans = append(ans,val)
    }
    return ans
}
