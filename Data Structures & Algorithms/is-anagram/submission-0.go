func isAnagram(s string, t string) bool {
    if(len(s) != len(t)){
        return false
    }
    freq1 := make(map[rune]int)
    freq2 := make(map[rune]int)
    for _ , char := range s {
        freq1[char]++;
    }
    for _ , char := range t {
        freq2[char]++;
    }
    for key , value := range freq1 {
        count , exists := freq2[key]
        if !exists {
            return false
        }
        if count != value {
            return false
        }
    }
    for key , value := range freq2 {
        count , exists := freq1[key]
        if !exists {
            return false
        }
        if count != value {
            return false
        }
    }
    return true
}
