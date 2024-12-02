class Solution {
    public String solution(String my_string) {
        String answer = "";
        char[] charArray = {'a', 'e', 'i', 'o', 'u'};
        
        for (int i = 0; i < my_string.length(); i++) {
            char currentChar = my_string.charAt(i);
            int isChar = 0;
            for (char ch : charArray) {
                if (currentChar == ch) {
                    isChar = 1;
                }
            }
            answer += (isChar == 1 ? "" : currentChar);
        }
        
        return answer;
    }
}