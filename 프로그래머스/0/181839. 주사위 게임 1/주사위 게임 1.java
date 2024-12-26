class Solution {
    public int solution(int a, int b) {
        int answer = 0;
        int result = 0;
        
        if (a % 2 == 1) {
            result = (b % 2 == 1) ? 0 : 1;
        } else {
            result = (b % 2 == 1) ? 1 : 2;
        }
        
        switch (result) {
            case 0:
                answer = (int)(Math.pow(a, 2) + Math.pow(b, 2));
                break;
            case 1:
                answer = 2 * (a + b);
                break;
            case 2:
                answer = Math.abs(a - b);
        }
        
        return answer;
    }
}