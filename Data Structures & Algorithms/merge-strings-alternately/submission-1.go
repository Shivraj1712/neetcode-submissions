func mergeAlternately(word1 string, word2 string) string {
    var ans [] byte
    i := 0 
    j := 0
    k := 0
    for i < len(word1) && j < len(word2) && k < len(word1)+ len(word2) {
        if i < len(word1) && k % 2 == 0 {
            ans = append(ans,word1[i])
            i += 1
        }else if j < len(word2) && k % 2 != 0 {
            ans = append(ans,word2[j])
            j += 1
        }
        k += 1
    }
    for i < len(word1) {
        ans = append(ans,word1[i])
        i += 1
    }
    for j < len(word2) {
        ans = append(ans,word2[j])
        j += 1
    }
    return string(ans)
}
