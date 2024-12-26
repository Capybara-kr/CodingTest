class Solution {
    public int solution(String myString, String pat) {
        int answer = 0;
        String revMyString = "";
        
        for (int i = 0; i < myString.length(); i++) {
            switch(myString.charAt(i)) {
                case 'A' :
                    revMyString += 'B';
                    break;
                case 'B' :
                    revMyString += 'A';
                    break;
            }
        }
        
        boolean result = revMyString.contains(pat);
        answer = (result == true) ? 1 : 0;
        
        return answer;
    }
}