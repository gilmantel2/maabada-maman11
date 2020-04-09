
int best_match_index(const char pattern[], const char text[]) {
    int bestMatchIndex = 0;
    int bestMatchMismatches = -1;

    int i = 0;
    while (text[i] != '\0' && bestMatchMismatches != 0) {
        int mismatches = 0;
        int j = 0;
        while (pattern[j] != '\0') {
            if(text[j+i] == '\0'){
                mismatches = -1;
                break;
            }

            if(pattern[j] != text[j+i])
                mismatches++;
            j++;
        }
        if(mismatches != -1 && (bestMatchMismatches > mismatches || bestMatchMismatches == -1)) {
            bestMatchMismatches = mismatches;
            bestMatchIndex = i;
        }
        i++;
    }
    return bestMatchIndex;
}



