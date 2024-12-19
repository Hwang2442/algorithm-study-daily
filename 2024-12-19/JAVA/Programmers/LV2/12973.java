//TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or
// click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.
import java.util.*;

public class Main {
    public static void main(String[] args) {
    }
}
    class Solution {
        public int solution(String s)
        {
            int answer = -1;
            Stack<Character> stack_char = new Stack<>();

            for (int i = 0; i < s.length(); i++)
            {
                char sc = s.charAt(i);
                if (!stack_char.isEmpty() && stack_char.peek() == sc)
                {
                    stack_char.pop();
                    continue;
                }
                stack_char.push(sc);
            }

            if (stack_char.isEmpty()) answer = 1;
            else answer = 0;

            return answer;
    }
}