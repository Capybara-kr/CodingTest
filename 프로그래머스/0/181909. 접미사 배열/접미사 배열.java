import java.util.ArrayList;
import java.util.Collections;

class Solution {
    public ArrayList<String> solution(String my_string) {
        ArrayList<String> answer = new ArrayList<>();    
        
        for (int i = 0; i < my_string.length(); i++) {
            String str = my_string.substring(i);
            answer.add(str);
        }
        
        Collections.sort(answer);        
        
        return answer;
    }
}